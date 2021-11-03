#pragma once

#include "../../JObject.hpp"

class JArray;
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
class JString;

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
		void bind(android::net::LocalSocketAddress arg0) const;
		void close() const;
		void connect(android::net::LocalSocketAddress arg0) const;
		void connect(android::net::LocalSocketAddress arg0, jint arg1) const;
		JArray getAncillaryFileDescriptors() const;
		java::io::FileDescriptor getFileDescriptor() const;
		java::io::InputStream getInputStream() const;
		android::net::LocalSocketAddress getLocalSocketAddress() const;
		java::io::OutputStream getOutputStream() const;
		android::net::Credentials getPeerCredentials() const;
		jint getReceiveBufferSize() const;
		android::net::LocalSocketAddress getRemoteSocketAddress() const;
		jint getSendBufferSize() const;
		jint getSoTimeout() const;
		jboolean isBound() const;
		jboolean isClosed() const;
		jboolean isConnected() const;
		jboolean isInputShutdown() const;
		jboolean isOutputShutdown() const;
		void setFileDescriptorsForSend(JArray arg0) const;
		void setReceiveBufferSize(jint arg0) const;
		void setSendBufferSize(jint arg0) const;
		void setSoTimeout(jint arg0) const;
		void shutdownInput() const;
		void shutdownOutput() const;
		JString toString() const;
	};
} // namespace android::net

