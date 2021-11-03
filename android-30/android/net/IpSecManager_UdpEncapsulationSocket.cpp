#include "../../java/io/FileDescriptor.hpp"
#include "../../JString.hpp"
#include "./IpSecManager_UdpEncapsulationSocket.hpp"

namespace android::net
{
	// Fields
	
	// QJniObject forward
	IpSecManager_UdpEncapsulationSocket::IpSecManager_UdpEncapsulationSocket(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void IpSecManager_UdpEncapsulationSocket::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	java::io::FileDescriptor IpSecManager_UdpEncapsulationSocket::getFileDescriptor()
	{
		return callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jint IpSecManager_UdpEncapsulationSocket::getPort()
	{
		return callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	JString IpSecManager_UdpEncapsulationSocket::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::net

