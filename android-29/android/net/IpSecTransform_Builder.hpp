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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit IpSecTransform_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IpSecTransform_Builder(QAndroidJniObject obj);
		
		// Constructors
		IpSecTransform_Builder(android::content::Context arg0);
		
		// Methods
		android::net::IpSecTransform buildTransportModeTransform(java::net::InetAddress arg0, android::net::IpSecManager_SecurityParameterIndex arg1);
		android::net::IpSecTransform_Builder setAuthenticatedEncryption(android::net::IpSecAlgorithm arg0);
		android::net::IpSecTransform_Builder setAuthentication(android::net::IpSecAlgorithm arg0);
		android::net::IpSecTransform_Builder setEncryption(android::net::IpSecAlgorithm arg0);
		android::net::IpSecTransform_Builder setIpv4Encapsulation(android::net::IpSecManager_UdpEncapsulationSocket arg0, jint arg1);
	};
} // namespace android::net

