#pragma once

#include "../../JObject.hpp"

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
	class ServerSocket : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ServerSocket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServerSocket(QJniObject obj);
		
		// Constructors
		ServerSocket();
		ServerSocket(jint arg0);
		ServerSocket(jint arg0, jint arg1);
		ServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2);
		
		// Methods
		static void setSocketFactory(JObject arg0);
		java::net::Socket accept() const;
		void bind(java::net::SocketAddress arg0) const;
		void bind(java::net::SocketAddress arg0, jint arg1) const;
		void close() const;
		java::nio::channels::ServerSocketChannel getChannel() const;
		java::net::InetAddress getInetAddress() const;
		jint getLocalPort() const;
		java::net::SocketAddress getLocalSocketAddress() const;
		JObject getOption(JObject arg0) const;
		jint getReceiveBufferSize() const;
		jboolean getReuseAddress() const;
		jint getSoTimeout() const;
		jboolean isBound() const;
		jboolean isClosed() const;
		java::net::ServerSocket setOption(JObject arg0, JObject arg1) const;
		void setPerformancePreferences(jint arg0, jint arg1, jint arg2) const;
		void setReceiveBufferSize(jint arg0) const;
		void setReuseAddress(jboolean arg0) const;
		void setSoTimeout(jint arg0) const;
		JObject supportedOptions() const;
		JString toString() const;
	};
} // namespace java::net

