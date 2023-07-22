#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AssociationRequest.def.hpp"

namespace android::companion
{
	// Fields
	inline JObject AssociationRequest::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.AssociationRequest",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline JString AssociationRequest::DEVICE_PROFILE_APP_STREAMING()
	{
		return getStaticObjectField(
			"android.companion.AssociationRequest",
			"DEVICE_PROFILE_APP_STREAMING",
			"Ljava/lang/String;"
		);
	}
	inline JString AssociationRequest::DEVICE_PROFILE_AUTOMOTIVE_PROJECTION()
	{
		return getStaticObjectField(
			"android.companion.AssociationRequest",
			"DEVICE_PROFILE_AUTOMOTIVE_PROJECTION",
			"Ljava/lang/String;"
		);
	}
	inline JString AssociationRequest::DEVICE_PROFILE_COMPUTER()
	{
		return getStaticObjectField(
			"android.companion.AssociationRequest",
			"DEVICE_PROFILE_COMPUTER",
			"Ljava/lang/String;"
		);
	}
	inline JString AssociationRequest::DEVICE_PROFILE_WATCH()
	{
		return getStaticObjectField(
			"android.companion.AssociationRequest",
			"DEVICE_PROFILE_WATCH",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AssociationRequest::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AssociationRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString AssociationRequest::getDeviceProfile() const
	{
		return callObjectMethod(
			"getDeviceProfile",
			"()Ljava/lang/String;"
		);
	}
	inline JString AssociationRequest::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AssociationRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AssociationRequest::isForceConfirmation() const
	{
		return callMethod<jboolean>(
			"isForceConfirmation",
			"()Z"
		);
	}
	inline jboolean AssociationRequest::isSelfManaged() const
	{
		return callMethod<jboolean>(
			"isSelfManaged",
			"()Z"
		);
	}
	inline jboolean AssociationRequest::isSingleDevice() const
	{
		return callMethod<jboolean>(
			"isSingleDevice",
			"()Z"
		);
	}
	inline JString AssociationRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AssociationRequest::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
