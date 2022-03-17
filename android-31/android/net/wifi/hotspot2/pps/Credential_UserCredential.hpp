#pragma once

#include "../../../../os/Parcel.def.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Credential_UserCredential.def.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	inline JObject Credential_UserCredential::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline Credential_UserCredential::Credential_UserCredential()
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"()V"
		) {}
	inline Credential_UserCredential::Credential_UserCredential(android::net::wifi::hotspot2::pps::Credential_UserCredential &arg0)
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential$UserCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$UserCredential;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint Credential_UserCredential::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Credential_UserCredential::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Credential_UserCredential::getEapType() const
	{
		return callMethod<jint>(
			"getEapType",
			"()I"
		);
	}
	inline JString Credential_UserCredential::getNonEapInnerMethod() const
	{
		return callObjectMethod(
			"getNonEapInnerMethod",
			"()Ljava/lang/String;"
		);
	}
	inline JString Credential_UserCredential::getPassword() const
	{
		return callObjectMethod(
			"getPassword",
			"()Ljava/lang/String;"
		);
	}
	inline JString Credential_UserCredential::getUsername() const
	{
		return callObjectMethod(
			"getUsername",
			"()Ljava/lang/String;"
		);
	}
	inline jint Credential_UserCredential::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Credential_UserCredential::setEapType(jint arg0) const
	{
		callMethod<void>(
			"setEapType",
			"(I)V",
			arg0
		);
	}
	inline void Credential_UserCredential::setNonEapInnerMethod(JString arg0) const
	{
		callMethod<void>(
			"setNonEapInnerMethod",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Credential_UserCredential::setPassword(JString arg0) const
	{
		callMethod<void>(
			"setPassword",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Credential_UserCredential::setUsername(JString arg0) const
	{
		callMethod<void>(
			"setUsername",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString Credential_UserCredential::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Credential_UserCredential::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::wifi::hotspot2::pps

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::wifi::hotspot2::pps;
#endif
