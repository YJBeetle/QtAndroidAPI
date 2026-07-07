#pragma once

#include "./NsdServiceInfo.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AdvertisingRequest.def.hpp"

namespace android::net::nsd
{
	// Fields
	inline JObject AdvertisingRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.net.nsd.AdvertisingRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jlong AdvertisingRequest::FLAG_SKIP_PROBING()
	{
		return getStaticField<jlong>(
			"android.net.nsd.AdvertisingRequest",
			"FLAG_SKIP_PROBING"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AdvertisingRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AdvertisingRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jlong AdvertisingRequest::getFlags() const
	{
		return callMethod<jlong>(
			"getFlags",
			"()J"
		);
	}
	inline jint AdvertisingRequest::getProtocolType() const
	{
		return callMethod<jint>(
			"getProtocolType",
			"()I"
		);
	}
	inline android::net::nsd::NsdServiceInfo AdvertisingRequest::getServiceInfo() const
	{
		return callObjectMethod(
			"getServiceInfo",
			"()Landroid/net/nsd/NsdServiceInfo;"
		);
	}
	inline jint AdvertisingRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AdvertisingRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AdvertisingRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::net::nsd

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::nsd;
#endif
