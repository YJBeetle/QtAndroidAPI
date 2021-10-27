#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::content
{
	class Context;
}
namespace android::net
{
	class IpSecAlgorithm;
}
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
namespace java::net
{
	class InetAddress;
}

namespace android::net
{
	class IpSecTransform_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		IpSecTransform_Builder(QAndroidJniObject obj);
		// Constructors
		IpSecTransform_Builder(android::content::Context &arg0);
		IpSecTransform_Builder() = default;
		
		// Methods
		QAndroidJniObject buildTransportModeTransform(java::net::InetAddress arg0, android::net::IpSecManager_SecurityParameterIndex arg1);
		QAndroidJniObject setAuthenticatedEncryption(android::net::IpSecAlgorithm arg0);
		QAndroidJniObject setAuthentication(android::net::IpSecAlgorithm arg0);
		QAndroidJniObject setEncryption(android::net::IpSecAlgorithm arg0);
		QAndroidJniObject setIpv4Encapsulation(android::net::IpSecManager_UdpEncapsulationSocket arg0, jint arg1);
	};
} // namespace android::net

