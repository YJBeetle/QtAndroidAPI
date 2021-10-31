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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IpSecManager_UdpEncapsulationSocket(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IpSecManager_UdpEncapsulationSocket(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		QAndroidJniObject getFileDescriptor();
		jint getPort();
		jstring toString();
	};
} // namespace android::net

