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
namespace java::lang::invoke
{
	class VarHandle;
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
		Socket(QJniObject obj) : JObject(obj) {}
		
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
		void bind(java::net::SocketAddress arg0) const;
		void close() const;
		void connect(java::net::SocketAddress arg0) const;
		void connect(java::net::SocketAddress arg0, jint arg1) const;
		java::nio::channels::SocketChannel getChannel() const;
		java::net::InetAddress getInetAddress() const;
		java::io::InputStream getInputStream() const;
		jboolean getKeepAlive() const;
		java::net::InetAddress getLocalAddress() const;
		jint getLocalPort() const;
		java::net::SocketAddress getLocalSocketAddress() const;
		jboolean getOOBInline() const;
		JObject getOption(JObject arg0) const;
		java::io::OutputStream getOutputStream() const;
		jint getPort() const;
		jint getReceiveBufferSize() const;
		java::net::SocketAddress getRemoteSocketAddress() const;
		jboolean getReuseAddress() const;
		jint getSendBufferSize() const;
		jint getSoLinger() const;
		jint getSoTimeout() const;
		jboolean getTcpNoDelay() const;
		jint getTrafficClass() const;
		jboolean isBound() const;
		jboolean isClosed() const;
		jboolean isConnected() const;
		jboolean isInputShutdown() const;
		jboolean isOutputShutdown() const;
		void sendUrgentData(jint arg0) const;
		void setKeepAlive(jboolean arg0) const;
		void setOOBInline(jboolean arg0) const;
		java::net::Socket setOption(JObject arg0, JObject arg1) const;
		void setPerformancePreferences(jint arg0, jint arg1, jint arg2) const;
		void setReceiveBufferSize(jint arg0) const;
		void setReuseAddress(jboolean arg0) const;
		void setSendBufferSize(jint arg0) const;
		void setSoLinger(jboolean arg0, jint arg1) const;
		void setSoTimeout(jint arg0) const;
		void setTcpNoDelay(jboolean arg0) const;
		void setTrafficClass(jint arg0) const;
		void shutdownInput() const;
		void shutdownOutput() const;
		JObject supportedOptions() const;
		JString toString() const;
	};
} // namespace java::net

