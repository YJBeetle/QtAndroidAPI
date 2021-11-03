#include "../../java/io/FileDescriptor.hpp"
#include "./IpSecManager_UdpEncapsulationSocket.hpp"

namespace android::net
{
	// Fields
	
	// QAndroidJniObject forward
	IpSecManager_UdpEncapsulationSocket::IpSecManager_UdpEncapsulationSocket(QAndroidJniObject obj) : JObject(obj) {}
	
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
	jstring IpSecManager_UdpEncapsulationSocket::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net

