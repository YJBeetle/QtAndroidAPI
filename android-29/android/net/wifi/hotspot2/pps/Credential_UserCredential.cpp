#include "../../../../os/Parcel.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Credential_UserCredential.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	JObject Credential_UserCredential::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	Credential_UserCredential::Credential_UserCredential()
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"()V"
		) {}
	Credential_UserCredential::Credential_UserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential &arg0)
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;)V",
			arg0.object()
		) {}
	
	// Methods
	jint Credential_UserCredential::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Credential_UserCredential::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint Credential_UserCredential::getEapType() const
	{
		return callMethod<jint>(
			"getEapType",
			"()I"
		);
	}
	JString Credential_UserCredential::getNonEapInnerMethod() const
	{
		return callObjectMethod(
			"getNonEapInnerMethod",
			"()Ljava/lang/String;"
		);
	}
	JString Credential_UserCredential::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	JString Credential_UserCredential::getUsername() const
	{
		return callObjectMethod(
			"getUsername",
			"()Ljava/lang/String;"
		);
	}
	jint Credential_UserCredential::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void Credential_UserCredential::setEapType(jint arg0) const
	{
		callMethod<void>(
			"setEapType",
			"(I)V",
			arg0
		);
	}
	void Credential_UserCredential::setNonEapInnerMethod(JString arg0) const
	{
		callMethod<void>(
			"setNonEapInnerMethod",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Credential_UserCredential::setPassword(JString arg0) const
	{
		callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void Credential_UserCredential::setUsername(JString arg0) const
	{
		callMethod<void>(
			"setUsername",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	JString Credential_UserCredential::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void Credential_UserCredential::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

