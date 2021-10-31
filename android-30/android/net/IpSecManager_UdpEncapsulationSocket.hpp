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
		
		// QJniObject forward
		template<typename ...Ts> explicit IpSecManager_UdpEncapsulationSocket(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IpSecManager_UdpEncapsulationSocket(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		java::io::FileDescriptor getFileDescriptor();
		jint getPort();
		jstring toString();
	};
} // namespace android::net

