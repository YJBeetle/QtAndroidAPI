#include "../../../java/nio/ByteBuffer.hpp"
#include "./ScanResult_InformationElement.hpp"

namespace android::net::wifi
{
	// Fields
	
	// QJniObject forward
	ScanResult_InformationElement::ScanResult_InformationElement(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ScanResult_InformationElement::ScanResult_InformationElement(android::net::wifi::ScanResult_InformationElement &arg0)
		: __JniBaseClass(
			"android.net.wifi.ScanResult$InformationElement",
			"(Landroid/net/wifi/ScanResult$InformationElement;)V",
			arg0.object()
		) {}
	
	// Methods
	java::nio::ByteBuffer ScanResult_InformationElement::getBytes()
	{
		return callObjectMethod(
			"getBytes",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint ScanResult_InformationElement::getId()
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint ScanResult_InformationElement::getIdExt()
	{
		return callMethod<jint>(
			"getIdExt",
			"()I"
		);
	}
} // namespace android::net::wifi

