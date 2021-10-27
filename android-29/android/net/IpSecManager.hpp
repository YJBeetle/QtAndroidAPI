#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class IpSecManager_SecurityParameterIndex;
}
namespace android::net
{
	class IpSecManager_UdpEncapsulationSocket;
}
namespace android::net
{
	class IpSecTransform;
}
namespace java::io
{
	class FileDescriptor;
}
namespace java::net
{
	class DatagramSocket;
}
namespace java::net
{
	class InetAddress;
}
namespace java::net
{
	class Socket;
}

namespace android::net
{
	class IpSecManager : public __JniBaseClass
	{
	public:
		// Fields
		static jint DIRECTION_IN();
		static jint DIRECTION_OUT();
		
		IpSecManager(QAndroidJniObject obj);
		// Constructors
		IpSecManager() = default;
		
		// Methods
		QAndroidJniObject allocateSecurityParameterIndex(java::net::InetAddress arg0);
		QAndroidJniObject allocateSecurityParameterIndex(java::net::InetAddress arg0, jint arg1);
		void applyTransportModeTransform(java::io::FileDescriptor arg0, jint arg1, android::net::IpSecTransform arg2);
		void applyTransportModeTransform(java::net::DatagramSocket arg0, jint arg1, android::net::IpSecTransform arg2);
		void applyTransportModeTransform(java::net::Socket arg0, jint arg1, android::net::IpSecTransform arg2);
		QAndroidJniObject openUdpEncapsulationSocket();
		QAndroidJniObject openUdpEncapsulationSocket(jint arg0);
		void removeTransportModeTransforms(java::io::FileDescriptor arg0);
		void removeTransportModeTransforms(java::net::DatagramSocket arg0);
		void removeTransportModeTransforms(java::net::Socket arg0);
	};
} // namespace android::net

