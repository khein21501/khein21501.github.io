#include<iostream>
using namespace std;
class Song{
    private:
        string title;
        string album;
        string singer;
    public:
        Song(){
            this->title="unknown";
            this->album="unknown";
            this->singer="unknown";
        }
        void setTitle(string title){
            this->title=title;

        }
        string getTitle(){
            return this->title;
        }
        void setAlbum(){
            this->album=album;
        }
        string getAlbum(){

            return this->album;
        }
        void setSinger(){
            this->singer=singer;
        }
        string getSinger(){
            return this->singer;
        }

};
int main(){
        Song songs[3];
        string title,album,singer;
        for (int i = 0; i < 3; i++)
        {
            cout<<"Enter song title: ";
            getline(cin,title);
            cout<<"Enter album :";
            getline(cin,album);
            cout<<"Enter Singer Name : ";
            getline(cin,singer);
            songs[i].setTitle(title);
            songs[i].setAlbum(album);
            songs[i].setSinger(singer);
        }
        cout<<"Song Info"<<endl;
        cout<<"No\tTitle\tAlbum\tSinger\n";
        for (int i = 0; i < 3; i++)
        {
            cout<<i+1<<"\t"<<songs[i].getTitle()<<"\t"<<songs[i].setAlbum()<<"\t"<<songs[i].setSinger()<<endl;
        }
        
        
    return 0;
}