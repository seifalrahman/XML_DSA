#ifndef POST_H
#define POST_H

#include <string>
#include <vector>

using namespace std;

class Post {
private:
    string body;
    vector<string> topics;

public:
    Post(string body);

    

    string getBody() const;
    void setBody(const string& newBody);
    vector<string> getTopics() const;
    void setTopics(const vector<string>& newTopics);
};

#endif 
