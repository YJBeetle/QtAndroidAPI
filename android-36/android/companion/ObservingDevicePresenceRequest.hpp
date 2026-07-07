#pragma once

#include "../os/Parcel.def.hpp"
#include "../os/ParcelUuid.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ObservingDevicePresenceRequest.def.hpp"

namespace android::companion
{
	// Fields
	inline JObject ObservingDevicePresenceRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.ObservingDevicePresenceRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint ObservingDevicePresenceRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean ObservingDevicePresenceRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint ObservingDevicePresenceRequest::getAssociationId() const
	{
		return callMethod<jint>(
			"getAssociationId",
			"()I"
		);
	}
	inline android::os::ParcelUuid ObservingDevicePresenceRequest::getUuid() const
	{
		return callObjectMethod(
			"getUuid",
			"()Landroid/os/ParcelUuid;"
		);
	}
	inline jint ObservingDevicePresenceRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ObservingDevicePresenceRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void ObservingDevicePresenceRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::companion

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::companion;
#endif
