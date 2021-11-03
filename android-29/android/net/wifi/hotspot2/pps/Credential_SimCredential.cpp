#include "../../../../os/Parcel.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Credential_SimCredential.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	JObject Credential_SimCredential::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QJniObject forward
	Credential_SimCredential::Credential_SimCredential(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	Credential_SimCredential::Credential_SimCredential()
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"()V"
		) {}
	Credential_SimCredential::Credential_SimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential &arg0)
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;)V",
			arg0.object()
		) {}
	
	// Methods
	jint Credential_SimCredential::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Credential_SimCredential::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Credential_SimCredential::getEapType()
	{
		return callMethod<jint>(
			"getEapType",
			"()I"
		);
	}
	JString Credential_SimCredential::getImsi()
	{
		return callObjectMethod(
			"getImsi",
			"()Ljava/lang/String;"
		);
	}
	jint Credential_SimCredential::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential_SimCredential::setEapType(jint arg0)
	{
		callMethod<void>(
			"setEapType",
			"(I)V",
			arg0
		);
	}
	void Credential_SimCredential::setImsi(JString arg0)
	{
		callMethod<void>(
			"setImsi",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString Credential_SimCredential::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Credential_SimCredential::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

