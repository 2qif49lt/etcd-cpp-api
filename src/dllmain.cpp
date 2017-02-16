#ifdef _WIN312
#include <Windows.h>


BOOL APIENTRY DllMain( HMODULE hModule,
					  DWORD  ul_reason_for_call,
					  LPVOID lpReserved
					  )
{
	return TRUE;
}
#endif // _WIN32

#include <iostream>
using namespace std;

#include "../etcd/Client.hpp"
#include "../etcd/Response.hpp"
#include "../etcd/Value.hpp"

int main(){
	etcd::Client etcd("http://127.0.0.1:2379");
	etcd::Response response = etcd.get("/name").get();
	std::cout << response.value().as_string();
	return 0;
}