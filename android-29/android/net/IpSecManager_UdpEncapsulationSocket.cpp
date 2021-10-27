#include "../../java/io/FileDescriptor.hpp"
#include "./IpSecManager_UdpEncapsulationSocket.hpp"

namespace android::net
{
	// Fields
	
	IpSecManager_UdpEncapsulationSocket::IpSecManager_UdpEncapsulationSocket(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void IpSecManager_UdpEncapsulationSocket::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject IpSecManager_UdpEncapsulationSocket::getFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jint IpSecManager_UdpEncapsulationSocket::getPort()
	{
		return __thiz.callMethod<jint>(
			"getPort",
			"()I"
		);
	}
	jstring IpSecManager_UdpEncapsulationSocket::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::net

