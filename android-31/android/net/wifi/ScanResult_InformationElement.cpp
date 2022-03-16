#include "../../os/Parcel.hpp"
#include "../../../JObject.hpp"
#include "../../../java/nio/ByteBuffer.hpp"
#include "./ScanResult_InformationElement.hpp"

namespace android::net::wifi
{
	// Fields
	JObject ScanResult_InformationElement::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.ScanResult$InformationElement",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	ScanResult_InformationElement::ScanResult_InformationElement(android::net::wifi::ScanResult_InformationElement &arg0)
		: JObject(
			"android.net.wifi.ScanResult$InformationElement",
			"(Landroid/net/wifi/ScanResult$InformationElement;)V",
			arg0.object()
		) {}
	
	// Methods
	jint ScanResult_InformationElement::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ScanResult_InformationElement::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	java::nio::ByteBuffer ScanResult_InformationElement::getBytes() const
	{
		return callObjectMethod(
			"getBytes",
			"()Ljava/nio/ByteBuffer;"
		);
	}
	jint ScanResult_InformationElement::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	jint ScanResult_InformationElement::getIdExt() const
	{
		return callMethod<jint>(
			"getIdExt",
			"()I"
		);
	}
	jint ScanResult_InformationElement::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void ScanResult_InformationElement::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi

