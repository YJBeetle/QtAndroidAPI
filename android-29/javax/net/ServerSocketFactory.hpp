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
		
		ServerSocketFactory(QAndroidJniObject obj);
		// Constructors
		ServerSocketFactory() = default;
		
		// Methods
		static QAndroidJniObject getDefault();
		QAndroidJniObject createServerSocket();
		QAndroidJniObject createServerSocket(jint arg0);
		QAndroidJniObject createServerSocket(jint arg0, jint arg1);
		QAndroidJniObject createServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2);
	};
} // namespace javax::net

