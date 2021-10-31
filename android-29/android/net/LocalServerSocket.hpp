#pragma once

#include "../../__JniBaseClass.hpp"

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
	class LocalServerSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LocalServerSocket(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LocalServerSocket(QAndroidJniObject obj);
		
		// Constructors
		LocalServerSocket(java::io::FileDescriptor arg0);
		LocalServerSocket(jstring arg0);
		
		// Methods
		QAndroidJniObject accept();
		void close();
		QAndroidJniObject getFileDescriptor();
		QAndroidJniObject getLocalSocketAddress();
	};
} // namespace android::net

