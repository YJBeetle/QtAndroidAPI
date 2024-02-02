#pragma once

#include "../os/Parcel.def.hpp"
#include "../os/ParcelUuid.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./CallEndpoint.def.hpp"

namespace android::telecom
{
	// Fields
	inline JObject CallEndpoint::CREATOR()
	{
		return getStaticObjectField(
			"android.telecom.CallEndpoint",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint CallEndpoint::TYPE_BLUETOOTH()
	{
		return getStaticField<jint>(
			"android.telecom.CallEndpoint",
			"TYPE_BLUETOOTH"
		);
	}
	inline jint CallEndpoint::TYPE_EARPIECE()
	{
		return getStaticField<jint>(
			"android.telecom.CallEndpoint",
			"TYPE_EARPIECE"
		);
	}
	inline jint CallEndpoint::TYPE_SPEAKER()
	{
		return getStaticField<jint>(
			"android.telecom.CallEndpoint",
			"TYPE_SPEAKER"
		);
	}
	inline jint CallEndpoint::TYPE_STREAMING()
	{
		return getStaticField<jint>(
			"android.telecom.CallEndpoint",
			"TYPE_STREAMING"
		);
	}
	inline jint CallEndpoint::TYPE_UNKNOWN()
	{
		return getStaticField<jint>(
			"android.telecom.CallEndpoint",
			"TYPE_UNKNOWN"
		);
	}
	inline jint CallEndpoint::TYPE_WIRED_HEADSET()
	{
		return getStaticField<jint>(
			"android.telecom.CallEndpoint",
			"TYPE_WIRED_HEADSET"
		);
	}
	
	// Constructors
	inline CallEndpoint::CallEndpoint(JString arg0, jint arg1, android::os::ParcelUuid arg2)
		: JObject(
			"android.telecom.CallEndpoint",
			"(Ljava/lang/CharSequence;ILandroid/os/ParcelUuid;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object()
		) {}
	
	// Methods
	inline jint CallEndpoint::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean CallEndpoint::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString CallEndpoint::getEndpointName() const
	{
		return callObjectMethod(
			"getEndpointName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint CallEndpoint::getEndpointType() const
	{
		return callMethod<jint>(
			"getEndpointType",
			"()I"
		);
	}
	inline android::os::ParcelUuid CallEndpoint::getIdentifier() const
	{
		return callObjectMethod(
			"getIdentifier",
			"()Landroid/os/ParcelUuid;"
		);
	}
	inline jint CallEndpoint::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString CallEndpoint::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void CallEndpoint::writeToParcel(android::os::Parcel arg0, jint arg1) const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telecom;
#endif
