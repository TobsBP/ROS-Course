#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
    map<string,int> teams_score;

    teams_score["Corinthians"] = 30;
    teams_score["Atletico Mineiro"] = 23;
    teams_score["Cruzeiro"] = 20;
    teams_score["Santos"] = 17;
    teams_score["São Paulo"] = 15;

    for (auto item : teams_score)
        cout << item.first << " scored " << item.second << " goals in 2024" << endl;
    
    return 0;
}