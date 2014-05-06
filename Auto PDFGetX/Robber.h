class Robber
{
public:
	Robber(HWND _hSampleBtn, HWND _hResetBtn, 
		HWND _hGetIBtn, HWND _hCalCBtn, 
		HWND _hGetSBtn, HWND _hGetGBtn, 
		HWND _hStatusText);
	~Robber();
	bool process(std::string file_path);

private:
	HWND hSampleBtn, hResetBtn, hGetIBtn, hCalCBtn, hGetSBtn, hGetGBtn, hStatusText;
	std::string GetStatusText();
	bool processStep(unsigned int step);
};