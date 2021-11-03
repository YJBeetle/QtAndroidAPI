#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class LocalSocket;
}
namespace android::net
{
	class LocalSocketAddress;
}
namespace java::io
{
	class FileDescriptor;
}
class JString;

namespace android::net
{
	class LocalServerSocket : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LocalServerSocket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LocalServerSocket(QJniObject obj);
		
		// Constructors
		LocalServerSocket(java::io::FileDescriptor arg0);
		LocalServerSocket(JString arg0);
		
		// Methods
		android::net::LocalSocket accept() const;
		void close() const;
		java::io::FileDescriptor getFileDescriptor() const;
		android::net::LocalSocketAddress getLocalSocketAddress() const;
	};
} // namespace android::net

