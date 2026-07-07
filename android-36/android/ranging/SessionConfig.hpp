#pragma once

#include "../os/Parcel.def.hpp"
#include "./DataNotificationConfig.def.hpp"
#include "./SensorFusionParams.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./SessionConfig.def.hpp"

namespace android::ranging
{
	// Fields
	inline JObject SessionConfig::CREATOR()
	{
		return getStaticObjectField(
			"android.ranging.SessionConfig",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint SessionConfig::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jboolean SessionConfig::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::ranging::DataNotificationConfig SessionConfig::getDataNotificationConfig() const
	{
		return callObjectMethod(
			"getDataNotificationConfig",
			"()Landroid/ranging/DataNotificationConfig;"
		);
	}
	inline jint SessionConfig::getRangingMeasurementsLimit() const
	{
		return callMethod<jint>(
			"getRangingMeasurementsLimit",
			"()I"
		);
	}
	inline android::ranging::SensorFusionParams SessionConfig::getSensorFusionParams() const
	{
		return callObjectMethod(
			"getSensorFusionParams",
			"()Landroid/ranging/SensorFusionParams;"
		);
	}
	inline jint SessionConfig::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean SessionConfig::isAngleOfArrivalNeeded() const
	{
		return callMethod<jboolean>(
			"isAngleOfArrivalNeeded",
			"()Z"
		);
	}
	inline JString SessionConfig::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	inline void SessionConfig::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
