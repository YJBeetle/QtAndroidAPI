#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::lang
{
	class Void;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class Socket;
}
namespace java::net
{
	class SocketAddress;
}
namespace java::net
{
	class SocketImpl;
}
namespace java::nio::channels
{
	class ServerSocketChannel;
}

namespace java::net
{
	class ServerSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		ServerSocket(QAndroidJniObject obj);
		// Constructors
		ServerSocket();
		ServerSocket(jint &arg0);
		ServerSocket(jint &arg0, jint &arg1);
		ServerSocket(jint &arg0, jint &arg1, java::net::InetAddress &arg2);
		
		// Methods
		static void setSocketFactory(__JniBaseClass arg0);
		QAndroidJniObject accept();
		void bind(java::net::SocketAddress arg0);
		void bind(java::net::SocketAddress arg0, jint arg1);
		void close();
		QAndroidJniObject getChannel();
		QAndroidJniObject getInetAddress();
		jint getLocalPort();
		QAndroidJniObject getLocalSocketAddress();
		jobject getOption(__JniBaseClass arg0);
		jint getReceiveBufferSize();
		jboolean getReuseAddress();
		jint getSoTimeout();
		jboolean isBound();
		jboolean isClosed();
		QAndroidJniObject setOption(__JniBaseClass arg0, jobject arg1);
		void setPerformancePreferences(jint arg0, jint arg1, jint arg2);
		void setReceiveBufferSize(jint arg0);
		void setReuseAddress(jboolean arg0);
		void setSoTimeout(jint arg0);
		QAndroidJniObject supportedOptions();
		jstring toString();
	};
} // namespace java::net

