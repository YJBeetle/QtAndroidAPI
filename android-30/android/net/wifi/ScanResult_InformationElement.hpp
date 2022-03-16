#pragma once

#include "../../../java/nio/ByteBuffer.def.hpp"
#include "./ScanResult_InformationElement.def.hpp"

namespace android::net::wifi
{
	// Fields
	
	// Constructors
	inline ScanResult_InformationElement::ScanResult_InformationElement(android::net::wifi::ScanResult_InformationElement &arg0)
		: JObject(
			"android.net.wifi.ScanResult$InformationElement",
			"(Landroid/net/wifi/ScanResult$InformationElement;)V",
			arg0.object()
		) {}
	
	// Methods
	inline java::nio::ByteBuffer ScanResult_InformationElement::getBytes() const
	{
		return callObjectMethod(
			"getBytes",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	inline jint ScanResult_InformationElement::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint ScanResult_InformationElement::getIdExt() const
	{
		return callMethod<jint>(
			"getIdExt",
			"()I"
		);
	}
} // namespace android::net::wifi

// Base class headers

