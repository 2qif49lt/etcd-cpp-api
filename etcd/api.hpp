#ifndef _ETCD_CLI_DLL_API_H
#define _ETCD_CLI_DLL_API_H

#ifdef	_ETCD_CLIENT_IMPLEMENT
#define _etcdclidll __declspec(dllexport)
#else 
#define _etcdclidll __declspec(dllimport)
#endif

#ifndef _WIN32
#undef _etcdclidll
#define _etcdclidll 
#endif

#endif //_ETCD_CLI_DLL_API_H

