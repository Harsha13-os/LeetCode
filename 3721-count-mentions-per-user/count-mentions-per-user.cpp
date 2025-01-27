class Solution {
public:
    vector<int> countMentions(int numberOfUsers, vector<vector<string>>& events) {
        vector<int> mentions(numberOfUsers, 0);  
        vector<int> offlineUntil(numberOfUsers, -1);  
        vector<bool> isOnline(numberOfUsers, true); 

        sort(events.begin(), events.end(), [](const vector<string>& a, const vector<string>& b) {
            int timeA = stoi(a[1]);
            int timeB = stoi(b[1]);
            if (timeA == timeB) {
                return a[0] == "OFFLINE";  
            }
            return timeA < timeB;
        });

        for (const auto& event : events) {
            int timestamp = stoi(event[1]);

            for (int user = 0; user < numberOfUsers; user++) {
                if (offlineUntil[user] != -1 && timestamp >= offlineUntil[user]) {
                    isOnline[user] = true;  
                    offlineUntil[user] = -1;  
                }
            }

            if (event[0] == "MESSAGE") {
                string mentionsString = event[2];
                stringstream ss(mentionsString);
                string token;

                while (ss >> token) {
                    if (token == "ALL") {
                        for (int user = 0; user < numberOfUsers; user++) {
                            mentions[user]++;
                        }
                    } else if (token == "HERE") {
                        for (int user = 0; user < numberOfUsers; user++) {
                            if (isOnline[user]) {
                                mentions[user]++;
                            }
                        }
                    } else if (token.substr(0, 2) == "id") {
                        int userId = stoi(token.substr(2));
                        mentions[userId]++;
                    }
                }
            } else if (event[0] == "OFFLINE") {
                int userId = stoi(event[2]);
                isOnline[userId] = false;  
                offlineUntil[userId] = timestamp + 60;  
            }
        }

        return mentions;
    }
};