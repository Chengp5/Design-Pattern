#pragma once
#include<iostream>
class VideoPlayer
{
public:
	VideoPlayer()
	{
		menu="false";
		playList = "false";
		mainWindow = "false";
		controlBar = "false";
		collectList = "false";
	}
	void setMenu(std::string _menu) {
		menu = _menu;
	}
	void setPlayList(std::string _list)
	{
		playList = _list;
	}
	void setMainWinodw(std::string _window)
	{
		mainWindow = _window;
	}
	void setControlBar(std::string _bar)
	{
		controlBar = _bar;
	}
	void setCollectList(std::string _list)
	{
		collectList = _list;
	}
	
	void display()
	{
		std::cout <<"Menu " <<menu << "\n"
			<<"Playlist "<< playList << "\n"
			<<"MainWindow "<< mainWindow << "\n"
			<<"controlBar "<< controlBar << "\n"
			<<"collectList "<< collectList << "\n\n";
	}

private:
	std::string menu;
	std::string playList;
	std::string mainWindow;
	std::string controlBar;
	std::string collectList;

};

