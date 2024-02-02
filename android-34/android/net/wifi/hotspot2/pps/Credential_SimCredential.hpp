#pragma once

#include "../../../../os/Parcel.def.hpp"
#include "../../../../../JObject.hpp"
#include "../../../../../JString.hpp"
#include "./Credential_SimCredential.def.hpp"

namespace android::net::wifi::hotspot2::pps
{
	// Fields
	inline JObject Credential_SimCredential::CREATOR()
	{
		return getStaticObjectField(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline Credential_SimCredential::Credential_SimCredential()
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"()V"
		) {}
	inline Credential_SimCredential::Credential_SimCredential(android::net::wifi::hotspot2::pps::Credential_SimCredential &arg0)
		: JObject(
			"android.net.wifi.hotspot2.pps.Credential$SimCredential",
			"(Landroid/net/wifi/hotspot2/pps/Credential$SimCredential;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint Credential_SimCredential::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean Credential_SimCredential::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint Credential_SimCredential::getEapType() const
	{
		return callMethod<jint>(
			"getEapType",
			"()I"
		);
	}
	inline JString Credential_SimCredential::getImsi() const
	{
		return callObjectMethod(
			"getImsi",
			"()Ljava/lang/String;"
		);
	}
	inline jint Credential_SimCredential::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline void Credential_SimCredential::setEapType(jint arg0) const
	{
		callMethod<void>(
			"setEapType",
			"(I)V",
			arg0
		);
	}
	inline void Credential_SimCredential::setImsi(JString arg0) const
	{
		callMethod<void>(
			"setImsi",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JString Credential_SimCredential::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void Credential_SimCredential::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
