#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class FileDescriptor;
}

namespace android::net
{
	class IpSecManager_UdpEncapsulationSocket : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IpSecManager_UdpEncapsulationSocket(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpSecManager_UdpEncapsulationSocket(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		java::io::FileDescriptor getFileDescriptor();
		jint getPort();
		jstring toString();
	};
} // namespace android::net

