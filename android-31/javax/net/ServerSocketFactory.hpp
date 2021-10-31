#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class ServerSocket;
}

namespace javax::net
{
	class ServerSocketFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServerSocketFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ServerSocketFactory(QJniObject obj);
		
		// Constructors
		
		// Methods
		static javax::net::ServerSocketFactory getDefault();
		java::net::ServerSocket createServerSocket();
		java::net::ServerSocket createServerSocket(jint arg0);
		java::net::ServerSocket createServerSocket(jint arg0, jint arg1);
		java::net::ServerSocket createServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2);
	};
} // namespace javax::net

