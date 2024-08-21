#include <iostream>
#include <list>
using namespace std;

class ytChannel{
    private:
    string ytName;
    int subscriberCount;
    list<string> videotitles;
    public:
    ytChannel(string name)
    {
        ytName = name;
        subscriberCount = 0;
    }
    void subscribe()
    {
        ++subscriberCount;
    }
    void unsubscribe()
    {   
        if(subscriberCount>0)
        --subscriberCount;
    }
    void Display()
    {
        cout<<"Name Of Youtube Channel Is "<<ytName<<endl;
        cout<<"Subscribers cout is "<<subscriberCount<<endl;
        cout<<"Videos published are:"<<endl;
        for(string videos:videotitles)
        {
            cout<<videos<<endl;
        }
    }
    void addtitles(string title)
    {
        videotitles.push_back(title);
    }
};

int main()
{
    ytChannel channel1("maddyStrange");
    ytChannel channel2("OggyandCoackroaches");
    ytChannel channel3("kashurShud");


    channel1.subscribe();
    channel1.subscribe();
    channel2.subscribe();
    channel3.subscribe();
    channel3.subscribe();
    channel1.subscribe();

    channel1.addtitles("Captain got killed!");
    channel3.addtitles("kashur chu xoor.");
    channel3.addtitles("habibi in kashmir.");
    channel2.addtitles("Oggy is dead");
    channel1.Display();
    channel2.Display();
    channel3.Display();
    
    channel1.unsubscribe();
    channel1.Display();
    
    
    return 0;

}