#include <iostream>
#include<string>
#include<Windows.h>
#include<mmsystem.h>
#include<fstream>
#include<algorithm>
#include<cstdlib>
#pragma comment(lib, "Winmm.lib")

using namespace std;

class Audio_Player
{
protected:
	string Model_Number;
	string Manafacturer;
	bool state;
public:
	Audio_Player(string M_N, string m_n)
	{
		Model_Number = M_N;
		Manafacturer = m_n;
	}

	void mount_unmount()
	{
		bool unmount;
		int condition;

		unmount = true;
		if (unmount == true)
		{
			cout << endl;
			cout << "You Audio Player is Un-Mounted." << endl << endl;
			cout << "If Would you like to Mount it. Please press 1." << endl;
			cin >> condition;
			cout << endl;
			if (condition == 1)
			{
				cout << "You Have Mounted the Audio Player." << endl;
				cout << endl;
			}
			else
			{

			}
		}

	}


};

class Storage_Media
{

 public:
	void Storage_Type()
	{
	
	}
};

class CD :public Storage_Media
{
public:

	void Song_List()
	{
		fstream PlayList;

		PlayList.open("CD.txt", ios::out);

		bool mount;
		int in, choice, choose, decide, op;
		string song[3];


		song[0] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\BEST-INTRO-MUSIC-8-SECONDS_";
		song[1] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\8-Second-Intro-music-8-Sec-intro-no-copyright";
		song[2] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\5-sec-Intro-Music";

		song[0] = song[0].substr(40, song[0].length());
		song[1] = song[1].substr(40, song[1].length());
		song[2] = song[2].substr(40, song[2].length());

		
		for (int i = 0; i <= 2; i++)
		{

			cout << song[i] << endl << endl;
		}

		
		cin >> choose;
		cout << endl;
		if (choose == 1)
		{
			std::srand(std::time(0));
			cout << "Shuffled Version is :";
			random_shuffle(begin(song), end(song));
			cout << endl << endl;
			for (int i = 0; i <= 2; i++)
			{

				cout << song[i] << endl << endl;
			}
		}
		else if (choose == 0)
		{

		}

		cout << "Would you like to play a single Song or the entire PLaylist. Press 1 for single or 2 for Playlist. ";
		cin >> decide;
		cout << endl << endl;
		if (decide == 1)
		{
		point:
			cout << "Which Song would you like to play. If to play entire PlayList enter 4.";
			cin >> op;
			if (op == 1)
			{
				cout << song[0];
				wstring Play = wstring(song[0].begin(), song[0].end());
				PlaySound(Play.c_str(), NULL, SND_SYNC);
			}
			else if (op == 2)
			{
				cout << song[1];
				wstring Play = wstring(song[1].begin(), song[1].end());
				PlaySound(Play.c_str(), NULL, SND_SYNC);
			}
			else if (op == 3)
			{
				cout << song[2];
				wstring Play = wstring(song[2].begin(), song[2].end());
				PlaySound(Play.c_str(), NULL, SND_SYNC);
			}

			else if (op == 4)
			{
				goto move;

			}
			else
			{
				cout << "Error";
				goto point;
			}
		}

		else if (decide == 2)
		{
			goto move;
		}

	move:
		cout << "The Songs will now play" << endl << endl;

		for (int i = 0; i <= 2; i++)
		{

			cout << song[i];
			wstring List = wstring(song[i].begin(), song[i].end());
			PlaySound(List.c_str(), NULL, SND_SYNC);

			cout << endl;
			cout << "this song has finished playing." << endl << endl;

			mount = true;
			if (mount == true)
			{
				cout << "If you would like to Eject the CD from the Audio PLayer. Please press 0." << endl << endl;
				cout << "If you would like to Continue the Songs of the CD. Please press 1." << endl << endl;
			}
			cin >> in;
			cout << endl;
			if (in == 0)
			{
				cout << "You Have Un-Mounted the CD from the Audio PLayer." << endl << endl;

				goto jump;
			}
			else if (in == 1)
			{

			}
		}
		cout << "As all songs have played. You can either Replay the songs or Un-Mount the CD." << endl << endl;
		cout << "Press 1 to Replay and 2 to Un-Mount : ";
		cin >> choice;
		cout << endl << endl;

		if (choice == 1)
		{
			goto move;
		}

		else if (choice == 2)
		{
			cout << "The CD has been ejected" << endl << endl;
			Storage_Type();
		}

	jump:
		Storage_Type();

	}

};

class USB :public Storage_Media
{
public:

	void USB_Space()
	{
		double space = 14.3;

		if (space < 0 || space < 16.0)
		{
			cout << "The USB has been inserted and read." << endl << endl;
			Song_List();

		}
		else
		{
			cout << "The USB cannot be read as it exceeds the capacity of 16 GB." << endl << endl;
			cout << "Please Eject the USB" << endl << endl;

			Storage_Type();
		}
	}

	void Add_Song()
	{
		fstream PlayList;

		PlayList.open("USB.txt", ios::app);
		bool mount;
		int choice, decision, in, dec, choose, op, decide;
		string song[4];

		song[0] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\BEST-INTRO-MUSIC-8-SECONDS_";
		song[1] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\8-Second-Intro-music-8-Sec-intro-no-copyright";
		song[2] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\5-sec-Intro-Music";
		song[3] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\10-second-intro-music";

		song[0] = song[0].substr(40, song[0].length());
		song[1] = song[1].substr(40, song[1].length());
		song[2] = song[2].substr(40, song[2].length());
		song[3] = song[3].substr(40, song[3].length());

		cout << "To continue. Please press 1. If not press any other number. ";
		cin >> choice;
		cout << endl;

		if (choice == 1)
		{
			cout << "Your old Playlist was: " << endl << endl;
			PlayList << "Your old Playlist was: " << endl << endl;


			for (int i = 0; i <= 2; i++)
			{
				cout << song[i] << endl << endl;
				PlayList << song[i] << endl << endl;
			}

			cout << "Your New Playlist is:" << endl << endl;
			PlayList << "Your New Playlist is:" << endl << endl;

			for (int i = 0; i <= 3; i++)
			{

				cout << song[i] << endl << endl;
				PlayList << song[i] << endl << endl;
			}

			cout << "Would you Like to Shuffle the Songs. Press 1 to shuffle or 0 to not-shuffle : ";
			cin >> choose;

			if (choose == 1)
			{
				std::srand(std::time(0));
				cout << endl;
				cout << "Shuffled Version is";
				PlayList << "Shuffled Version is";

				random_shuffle(begin(song), end(song));

				cout << endl << endl;

				for (int i = 0; i <= 3; i++)
				{
					cout << song[i] << endl << endl;
					PlayList << song[i] << endl << endl;
				}

			}

			else if (choose == 0)
			{

			}
			cout << "Would you like to play a single Song or the entire PLaylist. Press 1 for single or any other number not to play single. ";
			cin >> decide;
			cout << endl << endl;
			if (decide == 1)
			{
			point:
				cout << "Which Song would you like to play. If to play entire PlayList enter 5.";
				cin >> op;
				if (op == 1)
				{
					cout << song[0];
					wstring Play = wstring(song[0].begin(), song[0].end());
					PlaySound(Play.c_str(), NULL, SND_SYNC);
				}
				else if (op == 2)
				{
					cout << song[1];
					wstring Play = wstring(song[1].begin(), song[1].end());
					PlaySound(Play.c_str(), NULL, SND_SYNC);
				}
				else if (op == 3)
				{
					cout << song[2];
					wstring Play = wstring(song[2].begin(), song[2].end());
					PlaySound(Play.c_str(), NULL, SND_SYNC);
				}
				else if (op == 4)
				{
					cout << song[3];
					wstring Play = wstring(song[3].begin(), song[3].end());
					PlaySound(Play.c_str(), NULL, SND_SYNC);
				}
				else if (op == 5)
				{
					goto move;

				}
				else
				{
					cout << "Error";
					goto point;
				}
			}
			else
			{

			}
			cout << "Would you Like to delete a song from the PlayList. Press 1 to Delete and 0 to skip . ";
			cin >> decide;
			cout << endl;

			if (decide == 1)
			{
				cout << "To Continue please Press 1 , if not Press 0. ";
				PlayList << "To Continue please Press 1 , if not Press 0. ";
				cin >> choose;
				cout << endl;

				if (choose == 1)
				{
					cout << "Which song would you like to delete. ";
					PlayList << "Which song would you like to delete. ";
					cin >> op;
					cout << endl;
					switch (op)
					{
					case 1:
						song[0] = "";
						break;
					case 2:
						song[1] = "";
						break;
					case 3:
						song[2] = "";
						break;
					case 4:
						song[3] = "";
						break;
					default:
						// operator is doesn't match any case constant (+, -, *, /)
						cout << "Error! The operator is not correct";
						break;
					}

					cout << "Your New Playlist is:" << endl << endl;
					PlayList << "Your New Playlist is:" << endl << endl;
					for (int i = 0; i <= 3; i++)
					{
						if (song[i].length() != 0 || song[i] != "")
						{
							cout << song[i] << endl << endl;
						}

					}
					goto go;
				}
			}
			else if (choose == 0)
			{
				goto go;
			}
		go:
			cout << "Would You Like to PLay. Press 1, if not Press any other number.";

			cin >> decision;
			if (decision == 1)
			{
			move:
				for (int i = 0; i <= 3; i++)
				{
					if (song[i].length() == 0 || song[i] == "")
					{
						continue;
					}
					else
					{
						cout << "Track " << i + 1 << " : ";
						PlayList << "Track " << i + 1 << " : ";
						cout << song[i] << endl;
						PlayList << song[i] << endl;

						wstring List = wstring(song[i].begin(), song[i].end());

						PlaySound(List.c_str(), NULL, SND_SYNC);
						cout << endl;
						cout << "this song has finished playing." << endl << endl;
						PlayList << "this song has finished playing." << endl << endl;

						cout << "Would you like to play the previous song or next song. Press 1 to Forward and 2 to rewind or 3 to Skip. ";
						PlayList << "Would you like to play the previous song or next song. Press 1 to Forward and 2 to rewind or 3 to Skip. ";
						cin >> choose;
						cout << endl;
						if (choose == 1)
						{
							i++;
						}
						else if (choose == 2)
						{
							i--;

						}

						mount = true;
						if (mount == true)
						{

							cout << "If you would like to Continue the Songs of the USB. Please press 1." << endl << endl;
							PlayList << "If you would like to Continue the Songs of the USB. Please press 1." << endl << endl;
							cout << "If you would like to Eject the USB from the Audio PLayer. Please press 0." << endl << endl;
							PlayList << "If you would like to Eject the USB from the Audio PLayer. Please press 0." << endl << endl;
						}
						cin >> in;
						cout << endl;
						if (in == 0)
						{
							cout << "You Have Un-Mounted the USB from the Audio PLayer." << endl << endl;

							goto jump;
						}
						else if (in == 1)
						{

						}
					}
				}
				cout << "As all songs have played. You can either Replay the songs or Eject the USB." << endl << endl;
				cout << "Press 1 to Replay and 2 to Un-Mount : ";
				cin >> choice;
				cout << endl << endl;

				if (choice == 1)
				{
					goto move;
				}

				else if (choice == 2)
				{
					goto jump;
				}

			}
			else
			{
				cout << "If you would like to Eject the USB from the Audio PLayer. Please press 0." << endl << endl;
				cout << "If you would like to Play the Songs. Please press 1." << endl << endl;
				cin >> dec;
				cout << endl << endl;

				if (dec == 0)
				{
					goto jump;
				}

				else if (dec == 1)
				{
					goto move;
				}
			}
		}
		else
		{
			Song_List();
		}

	jump:
		cout << "The USB has been Ejected " << endl << endl;
		PlayList << "The USB has been Ejected " << endl << endl;
		Storage_Type();

		PlayList.close();

	}
	void Song_List()
	{
		fstream PlayList;
		PlayList.open("USB.txt", ios::out);
		bool mount;
		int in, choice, dec, choose, op, decision, decide;
		string song[3];

		song[0] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\BEST-INTRO-MUSIC-8-SECONDS_";
		song[1] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\8-Second-Intro-music-8-Sec-intro-no-copyright";
		song[2] = "C:\\Users\\adnan\\source\\repos\\Tests\\Tests\\5-sec-Intro-Music";

		song[0] = song[0].substr(40, song[0].length());
		song[1] = song[1].substr(40, song[1].length());
		song[2] = song[2].substr(40, song[2].length());


		cout << "These are the Songs that are availible for you " << endl << endl;
		PlayList << "These are the Songs that are availible for you " << endl << endl;
		for (int i = 0; i <= 2; i++)
		{

			cout << song[i] << endl << endl;
			PlayList << song[i] << endl << endl;
		}

		cout << "Would you Like to Shuffle the Songs. Press 1 to shuffle or 0 to not-shuffle : ";
		cin >> choose;
		cout << endl;

		if (choose == 1)
		{
			std::srand(std::time(0));
			cout << "Shuffled Version is";
			PlayList << "Shuffled Version is";
			random_shuffle(begin(song), end(song));
			cout << endl << endl;
			for (int i = 0; i <= 2; i++)
			{
				cout << song[i] << endl << endl;
				PlayList << song[i] << endl << endl;
			}
			goto move;
		}

		else if (choose == 0)
		{
			goto move;
		}

		cout << "Would you like to play a single Song or the entire PLaylist. Press 1 for single or 2 for other options. ";
		cin >> decide;
		cout << endl << endl;
		if (decide == 1)
		{
		point:
			cout << "Which Song would you like to play. If to play entire PlayList enter 4.";
			cin >> op;
			if (op == 1)
			{
				cout << song[0];
				wstring Play = wstring(song[0].begin(), song[0].end());
				PlaySound(Play.c_str(), NULL, SND_SYNC);
			}
			else if (op == 2)
			{
				cout << song[1];
				wstring Play = wstring(song[1].begin(), song[1].end());
				PlaySound(Play.c_str(), NULL, SND_SYNC);
			}
			else if (op == 3)
			{
				cout << song[2];
				wstring Play = wstring(song[2].begin(), song[2].end());
				PlaySound(Play.c_str(), NULL, SND_SYNC);
			}
			else if (op == 4)
			{
				goto move;

			}
			else
			{
				cout << "Error";
				goto point;
			}
		}

		else if (decide == 2)
		{
			goto move;
		}

	move:

		cout << "Would You Like to Add a Song. Press 1 , Press 2 to Delete , Press any number to Skip. ";
		cin >> dec;

		if (dec == 1)
		{
			Add_Song();
		}

		else if (dec == 2)
		{

			cout << "To Continue please Press 1 , if not Press 0. ";
			PlayList << "To Continue please Press 1 , if not Press 0. ";
			cin >> choose;
			cout << endl;

			if (choose == 1)
			{
				cout << "Which song would you like to delete. ";
				PlayList << "Which song would you like to delete. ";
				cin >> op;
				cout << endl;
				switch (op)
				{
				case 1:
					song[0] = "";
					break;
				case 2:
					song[1] = "";
					break;
				case 3:
					song[2] = "";
					break;
				default:
					// operator is doesn't match any case constant (+, -, *, /)
					cout << "Error! The operator is not correct";
					break;
				}
				cout << "Your old Playlist was: " << endl << endl;
				PlayList << "Your old Playlist was: " << endl << endl;

				for (int i = 0; i <= 2; i++)
				{
					if (song[i].length() != 0 || song[i] != "")
					{
						cout << song[i] << endl << endl;
						PlayList << song[i] << endl << endl;
					}

				}
				cout << "Your New Playlist is:" << endl << endl;
				PlayList << "Your New Playlist is:" << endl << endl;
				for (int i = 0; i <= 2; i++)
				{
					if (song[i].length() != 0 || song[i] != "")
					{
						cout << song[i] << endl << endl;
						PlayList << song[i] << endl << endl;
					}

				}
				goto go;
			}
		go:
			cout << "Would You Like to PLay. Press 1, if not Press any other number.";

			cin >> decision;
			if (decision == 1)
			{
			Point:
				for (int i = 0; i <= 3; i++)
				{
					if (song[i].length() == 0 || song[i] == "")
					{
						continue;
					}
					else
					{
						cout << "Track " << i << " : ";
						PlayList << "Track " << i << " : ";
						cout << song[i] << endl;
						PlayList << song[i] << endl;

						wstring List = wstring(song[i].begin(), song[i].end());

						PlaySound(List.c_str(), NULL, SND_SYNC);
						cout << endl;
						cout << "this song has finished playing." << endl << endl;
						PlayList << "this song has finished playing." << endl << endl;

						cout << "Would you like to play the previous song or next song. Press 1 to Forward and 2 to rewind or 3 to Skip. ";
						PlayList << "Would you like to play the previous song or next song. Press 1 to Forward and 2 to rewind or 3 to Skip. ";
						cin >> choose;
						cout << endl;
						if (choose == 1)
						{
							i++;
						}
						else if (choose == 2)
						{
							i--;

						}

						mount = true;
						if (mount == true)
						{

							cout << "If you would like to Continue the Songs of the USB. Please press 1." << endl << endl;
							cout << "If you would like to Eject the USB from the Audio PLayer. Please press 0." << endl << endl;
						}
						cin >> in;
						cout << endl;
						if (in == 0)
						{
							cout << "You Have Un-Mounted the USB from the Audio PLayer." << endl << endl;

							goto jump;
						}
						else if (in == 1)
						{

						}
					}
				}
				cout << "As all songs have played. You can either Replay the songs or Eject the USB." << endl << endl;
				cout << "Press 1 to Replay and 2 to Un-Mount : ";
				cin >> choice;
				cout << endl << endl;

				if (choice == 1)
				{
					goto Point;
				}

				else if (choice == 2)
				{
					goto jump;
				}

			}
		}
		else
		{
			for (int i = 0; i <= 2; i++)
			{

				cout << song[i];
				PlayList << song[i];
				wstring List = wstring(song[i].begin(), song[i].end());
				PlaySound(List.c_str(), NULL, SND_SYNC);

				cout << "this song has finished playing." << endl << endl;
				PlayList << "this song has finished playing." << endl << endl;

				cout << "Would you like to play the previous song or next song. Press 1 to Forward and 2 to rewind or 3 to Skip. ";
				PlayList << "Would you like to play the previous song or next song. Press 1 to Forward and 2 to rewind or 3 to Skip. ";
				cin >> choose;
				cout << endl;
				if (choose == 1)
				{
					i++;
				}
				else if (choose == 2)
				{
					i--;

				}

				mount = true;
				if (mount == true)
				{
					cout << "If you would like to Eject the USB from the Audio PLayer. Please press 0." << endl << endl;
					cout << "If you would like to Continue the Songs of the USB. Please press 1." << endl << endl;
				}
				cin >> in;
				cout << endl;
				if (in == 0)
				{
					cout << "You Have Un-Mounted the USB from the Audio PLayer." << endl << endl;

					Storage_Type();
					break;
				}
				else if (in == 1)
				{

				}
			}
			cout << "As all songs have played. You can either Replay the songs or Eject the USB." << endl << endl;
			cout << "Press 1 to Replay and 2 to Un-Mount : ";
			cin >> choice;
			cout << endl << endl;

			if (choice == 1)
			{
				goto move;
			}

			else if (choice == 2)
			{
				goto jump;
			}
		}

	jump:
		cout << "The USB has been ejected" << endl << endl;
		PlayList << "The USB has been ejected" << endl << endl;
		Storage_Type();

		PlayList.close();

	}

};
