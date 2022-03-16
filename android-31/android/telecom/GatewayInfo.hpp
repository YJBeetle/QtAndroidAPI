#pragma once

#include "../net/Uri.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "./GatewayInfo.def.hpp"

namespace android::telecom
{
	// Fields
	inline JObject GatewayInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.GatewayInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline GatewayInfo::GatewayInfo(JString arg0, android::net::Uri arg1, android::net::Uri arg2)
		: JObject(
			"android.telecom.GatewayInfo",
			"(Ljava/lang/String;Landroid/net/Uri;Landroid/net/Uri;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
	inline jint GatewayInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline android::net::Uri GatewayInfo::getGatewayAddress() const
	{
		return callObjectMethod(
			"getGatewayAddress",
			"()Landroid/net/Uri;"
		);
	}
	inline JString GatewayInfo::getGatewayProviderPackageName() const
	{
		return callObjectMethod(
			"getGatewayProviderPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline android::net::Uri GatewayInfo::getOriginalAddress() const
	{
		return callObjectMethod(
			"getOriginalAddress",
			"()Landroid/net/Uri;"
		);
	}
	inline jboolean GatewayInfo::isEmpty() const
	{
		return callMethod<jboolean>(
			"isEmpty",
			"()Z"
		);
	}
	inline void GatewayInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::telecom

// Base class headers

