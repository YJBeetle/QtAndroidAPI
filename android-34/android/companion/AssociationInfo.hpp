#pragma once

#include "./AssociatedDevice.def.hpp"
#include "../net/MacAddress.def.hpp"
#include "../os/Parcel.def.hpp"
#include "../../JString.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AssociationInfo.def.hpp"

namespace android::companion
{
	// Fields
	inline JObject AssociationInfo::CREATOR()
	{
		return getStaticObjectField(
			"android.companion.AssociationInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint AssociationInfo::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean AssociationInfo::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::companion::AssociatedDevice AssociationInfo::getAssociatedDevice() const
	{
		return callObjectMethod(
			"getAssociatedDevice",
			"()Landroid/companion/AssociatedDevice;"
		);
	}
	inline android::net::MacAddress AssociationInfo::getDeviceMacAddress() const
	{
		return callObjectMethod(
			"getDeviceMacAddress",
			"()Landroid/net/MacAddress;"
		);
	}
	inline JString AssociationInfo::getDeviceProfile() const
	{
		return callObjectMethod(
			"getDeviceProfile",
			"()Ljava/lang/String;"
		);
	}
	inline JString AssociationInfo::getDisplayName() const
	{
		return callObjectMethod(
			"getDisplayName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline jint AssociationInfo::getId() const
	{
		return callMethod<jint>(
			"getId",
			"()I"
		);
	}
	inline jint AssociationInfo::getSystemDataSyncFlags() const
	{
		return callMethod<jint>(
			"getSystemDataSyncFlags",
			"()I"
		);
	}
	inline jint AssociationInfo::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AssociationInfo::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void AssociationInfo::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
