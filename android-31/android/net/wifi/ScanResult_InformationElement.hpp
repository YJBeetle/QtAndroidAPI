#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../java/nio/ByteBuffer.def.hpp"
#include "./ScanResult_InformationElement.def.hpp"

namespace android::net::wifi
{
	// Fields
	inline JObject ScanResult_InformationElement::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.ScanResult$InformationElement",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ScanResult_InformationElement::ScanResult_InformationElement(android::net::wifi::ScanResult_InformationElement &arg0)
		: JObject(
			"android.net.wifi.ScanResult$InformationElement",
			"(Landroid/net/wifi/ScanResult$InformationElement;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ScanResult_InformationElement::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ScanResult_InformationElement::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
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
	inline jint ScanResult_InformationElement::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void ScanResult_InformationElement::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi;
#endif
