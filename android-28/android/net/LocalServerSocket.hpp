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
		LocalServerSocket(jstring arg0);
		
		// Methods
		android::net::LocalSocket accept();
		void close();
		java::io::FileDescriptor getFileDescriptor();
		android::net::LocalSocketAddress getLocalSocketAddress();
	};
} // namespace android::net

