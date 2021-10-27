#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
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
	class Proxy;
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
	class SocketChannel;
}

namespace java::net
{
	class Socket : public __JniBaseClass
	{
	public:
		// Fields
		
		Socket(QAndroidJniObject obj);
		// Constructors
		Socket();
		Socket(java::net::Proxy &arg0);
		Socket(jstring &arg0, jint &arg1);
		Socket(const QString &arg0, jint &arg1);
		Socket(java::net::InetAddress &arg0, jint &arg1);
		Socket(jstring &arg0, jint &arg1, jboolean &arg2);
		Socket(const QString &arg0, jint &arg1, jboolean &arg2);
		Socket(java::net::InetAddress &arg0, jint &arg1, jboolean &arg2);
		Socket(jstring &arg0, jint &arg1, java::net::InetAddress &arg2, jint &arg3);
		Socket(const QString &arg0, jint &arg1, java::net::InetAddress &arg2, jint &arg3);
		Socket(java::net::InetAddress &arg0, jint &arg1, java::net::InetAddress &arg2, jint &arg3);
		
		// Methods
		static void setSocketImplFactory(__JniBaseClass arg0);
		void bind(java::net::SocketAddress arg0);
		void close();
		void connect(java::net::SocketAddress arg0);
		void connect(java::net::SocketAddress arg0, jint arg1);
		QAndroidJniObject getChannel();
		QAndroidJniObject getInetAddress();
		QAndroidJniObject getInputStream();
		jboolean getKeepAlive();
		QAndroidJniObject getLocalAddress();
		jint getLocalPort();
		QAndroidJniObject getLocalSocketAddress();
		jboolean getOOBInline();
		jobject getOption(__JniBaseClass arg0);
		QAndroidJniObject getOutputStream();
		jint getPort();
		jint getReceiveBufferSize();
		QAndroidJniObject getRemoteSocketAddress();
		jboolean getReuseAddress();
		jint getSendBufferSize();
		jint getSoLinger();
		jint getSoTimeout();
		jboolean getTcpNoDelay();
		jint getTrafficClass();
		jboolean isBound();
		jboolean isClosed();
		jboolean isConnected();
		jboolean isInputShutdown();
		jboolean isOutputShutdown();
		void sendUrgentData(jint arg0);
		void setKeepAlive(jboolean arg0);
		void setOOBInline(jboolean arg0);
		QAndroidJniObject setOption(__JniBaseClass arg0, jobject arg1);
		void setPerformancePreferences(jint arg0, jint arg1, jint arg2);
		void setReceiveBufferSize(jint arg0);
		void setReuseAddress(jboolean arg0);
		void setSendBufferSize(jint arg0);
		void setSoLinger(jboolean arg0, jint arg1);
		void setSoTimeout(jint arg0);
		void setTcpNoDelay(jboolean arg0);
		void setTrafficClass(jint arg0);
		void shutdownInput();
		void shutdownOutput();
		QAndroidJniObject supportedOptions();
		jstring toString();
	};
} // namespace java::net

