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
		
		SocketFactory(QAndroidJniObject obj);
		// Constructors
		SocketFactory() = default;
		
		// Methods
		static QAndroidJniObject getDefault();
		QAndroidJniObject createSocket();
		QAndroidJniObject createSocket(jstring arg0, jint arg1);
		QAndroidJniObject createSocket(java::net::InetAddress arg0, jint arg1);
		QAndroidJniObject createSocket(jstring arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
		QAndroidJniObject createSocket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
	};
} // namespace javax::net

