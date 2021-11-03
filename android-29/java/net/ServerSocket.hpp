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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ServerSocket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ServerSocket(QAndroidJniObject obj);
		
		// Constructors
		ServerSocket();
		ServerSocket(jint arg0);
		ServerSocket(jint arg0, jint arg1);
		ServerSocket(jint arg0, jint arg1, java::net::InetAddress arg2);
		
		// Methods
		static void setSocketFactory(JObject arg0);
		java::net::Socket accept();
		void bind(java::net::SocketAddress arg0);
		void bind(java::net::SocketAddress arg0, jint arg1);
		void close();
		java::nio::channels::ServerSocketChannel getChannel();
		java::net::InetAddress getInetAddress();
		jint getLocalPort();
		java::net::SocketAddress getLocalSocketAddress();
		JObject getOption(JObject arg0);
		jint getReceiveBufferSize();
		jboolean getReuseAddress();
		jint getSoTimeout();
		jboolean isBound();
		jboolean isClosed();
		java::net::ServerSocket setOption(JObject arg0, JObject arg1);
		void setPerformancePreferences(jint arg0, jint arg1, jint arg2);
		void setReceiveBufferSize(jint arg0);
		void setReuseAddress(jboolean arg0);
		void setSoTimeout(jint arg0);
		JObject supportedOptions();
		JString toString();
	};
} // namespace java::net

