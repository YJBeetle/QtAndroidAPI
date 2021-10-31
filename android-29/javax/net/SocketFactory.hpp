#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class Socket;
}

namespace javax::net
{
	class SocketFactory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SocketFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SocketFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getDefault();
		QAndroidJniObject createSocket();
		QAndroidJniObject createSocket(jstring arg0, jint arg1);
		QAndroidJniObject createSocket(java::net::InetAddress arg0, jint arg1);
		QAndroidJniObject createSocket(jstring arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
		QAndroidJniObject createSocket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
	};
} // namespace javax::net

