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
		
		LocalServerSocket(QAndroidJniObject obj);
		// Constructors
		LocalServerSocket(java::io::FileDescriptor &arg0);
		LocalServerSocket(jstring &arg0);
		LocalServerSocket(const QString &arg0);
		LocalServerSocket() = default;
		
		// Methods
		QAndroidJniObject accept();
		void close();
		QAndroidJniObject getFileDescriptor();
		QAndroidJniObject getLocalSocketAddress();
	};
} // namespace android::net

