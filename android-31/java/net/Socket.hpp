#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}
class JObject;
class JString;
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
	class Socket : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Socket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Socket(QJniObject obj);
		
		// Constructors
		Socket();
		Socket(java::net::Proxy arg0);
		Socket(JString arg0, jint arg1);
		Socket(java::net::InetAddress arg0, jint arg1);
		Socket(JString arg0, jint arg1, jboolean arg2);
		Socket(java::net::InetAddress arg0, jint arg1, jboolean arg2);
		Socket(JString arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
		Socket(java::net::InetAddress arg0, jint arg1, java::net::InetAddress arg2, jint arg3);
		
		// Methods
		static void setSocketImplFactory(JObject arg0);
		void bind(java::net::SocketAddress arg0);
		void close();
		void connect(java::net::SocketAddress arg0);
		void connect(java::net::SocketAddress arg0, jint arg1);
		java::nio::channels::SocketChannel getChannel();
		java::net::InetAddress getInetAddress();
		java::io::InputStream getInputStream();
		jboolean getKeepAlive();
		java::net::InetAddress getLocalAddress();
		jint getLocalPort();
		java::net::SocketAddress getLocalSocketAddress();
		jboolean getOOBInline();
		JObject getOption(JObject arg0);
		java::io::OutputStream getOutputStream();
		jint getPort();
		jint getReceiveBufferSize();
		java::net::SocketAddress getRemoteSocketAddress();
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
		java::net::Socket setOption(JObject arg0, JObject arg1);
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
		JObject supportedOptions();
		JString toString();
	};
} // namespace java::net

