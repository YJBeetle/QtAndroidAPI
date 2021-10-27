#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class FileDescriptor;
}

namespace android::net
{
	class IpSecManager_UdpEncapsulationSocket : public __JniBaseClass
	{
	public:
		// Fields
		
		IpSecManager_UdpEncapsulationSocket(QAndroidJniObject obj);
		// Constructors
		IpSecManager_UdpEncapsulationSocket() = default;
		
		// Methods
		void close();
		QAndroidJniObject getFileDescriptor();
		jint getPort();
		jstring toString();
	};
} // namespace android::net

