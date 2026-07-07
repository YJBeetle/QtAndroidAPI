#pragma once

#include "../os/Parcel.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./DataNotificationConfig.def.hpp"

namespace android::ranging
{
	// Fields
	inline JObject DataNotificationConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.DataNotificationConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint DataNotificationConfig::NOTIFICATION_CONFIG_DISABLE()
	{
		return getStaticField<jint>(
			"android.ranging.DataNotificationConfig",
			"NOTIFICATION_CONFIG_DISABLE"
		);
	}
	inline jint DataNotificationConfig::NOTIFICATION_CONFIG_ENABLE()
	{
		return getStaticField<jint>(
			"android.ranging.DataNotificationConfig",
			"NOTIFICATION_CONFIG_ENABLE"
		);
	}
	inline jint DataNotificationConfig::NOTIFICATION_CONFIG_PROXIMITY_EDGE()
	{
		return getStaticField<jint>(
			"android.ranging.DataNotificationConfig",
			"NOTIFICATION_CONFIG_PROXIMITY_EDGE"
		);
	}
	inline jint DataNotificationConfig::NOTIFICATION_CONFIG_PROXIMITY_LEVEL()
	{
		return getStaticField<jint>(
			"android.ranging.DataNotificationConfig",
			"NOTIFICATION_CONFIG_PROXIMITY_LEVEL"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint DataNotificationConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean DataNotificationConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint DataNotificationConfig::getNotificationConfigType() const
	{
		return callMethod<jint>(
			"getNotificationConfigType",
			"()I"
		);
	}
	inline jint DataNotificationConfig::getProximityFarCm() const
	{
		return callMethod<jint>(
			"getProximityFarCm",
			"()I"
		);
	}
	inline jint DataNotificationConfig::getProximityNearCm() const
	{
		return callMethod<jint>(
			"getProximityNearCm",
			"()I"
		);
	}
	inline jint DataNotificationConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString DataNotificationConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void DataNotificationConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::ranging

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::ranging;
#endif
