#pragma once

#include "../../JObject.hpp"

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
	class IpSecManager : public JObject
	{
	public:
		// Fields
		static jint DIRECTION_IN();
		static jint DIRECTION_OUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit IpSecManager(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		IpSecManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::net::IpSecManager_SecurityParameterIndex allocateSecurityParameterIndex(java::net::InetAddress arg0) const;
		android::net::IpSecManager_SecurityParameterIndex allocateSecurityParameterIndex(java::net::InetAddress arg0, jint arg1) const;
		void applyTransportModeTransform(java::io::FileDescriptor arg0, jint arg1, android::net::IpSecTransform arg2) const;
		void applyTransportModeTransform(java::net::DatagramSocket arg0, jint arg1, android::net::IpSecTransform arg2) const;
		void applyTransportModeTransform(java::net::Socket arg0, jint arg1, android::net::IpSecTransform arg2) const;
		android::net::IpSecManager_UdpEncapsulationSocket openUdpEncapsulationSocket() const;
		android::net::IpSecManager_UdpEncapsulationSocket openUdpEncapsulationSocket(jint arg0) const;
		void removeTransportModeTransforms(java::io::FileDescriptor arg0) const;
		void removeTransportModeTransforms(java::net::DatagramSocket arg0) const;
		void removeTransportModeTransforms(java::net::Socket arg0) const;
	};
} // namespace android::net

