#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Credentials;
}
namespace android::net
{
	class LocalSocketAddress;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::io
{
	class InputStream;
}
namespace java::io
{
	class OutputStream;
}

namespace android::net
{
	class LocalSocket : public JObject
	{
	public:
		// Fields
		static jint SOCKET_DGRAM();
		static jint SOCKET_SEQPACKET();
		static jint SOCKET_STREAM();
		
		// QJniObject forward
		template<typename ...Ts> explicit LocalSocket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocalSocket(QJniObject obj);
		
		// Constructors
		LocalSocket();
		LocalSocket(jint arg0);
		
		// Methods
		void bind(android::net::LocalSocketAddress arg0);
		void close();
		void connect(android::net::LocalSocketAddress arg0);
		void connect(android::net::LocalSocketAddress arg0, jint arg1);
		jarray getAncillaryFileDescriptors();
		java::io::FileDescriptor getFileDescriptor();
		java::io::InputStream getInputStream();
		android::net::LocalSocketAddress getLocalSocketAddress();
		java::io::OutputStream getOutputStream();
		android::net::Credentials getPeerCredentials();
		jint getReceiveBufferSize();
		android::net::LocalSocketAddress getRemoteSocketAddress();
		jint getSendBufferSize();
		jint getSoTimeout();
		jboolean isBound();
		jboolean isClosed();
		jboolean isConnected();
		jboolean isInputShutdown();
		jboolean isOutputShutdown();
		void setFileDescriptorsForSend(jarray arg0);
		void setReceiveBufferSize(jint arg0);
		void setSendBufferSize(jint arg0);
		void setSoTimeout(jint arg0);
		void shutdownInput();
		void shutdownOutput();
		jstring toString();
	};
} // namespace android::net

