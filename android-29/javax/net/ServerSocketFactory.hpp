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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServerSocketFactory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ServerSocketFactory(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject getDefault();
		QAndroidJniObject createServerSocket();
		QAndroidJniObject createServerSocket(jint arg0);
		QAndroidJniObject createServerSocket(jint arg0, jint arg1);
		QAndroidJniObject createServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2);
	};
} // namespace javax::net

