#pragma once

#include "./Parcel.def.hpp"
#include "../../JString.hpp"
#include "./PowerMonitor.def.hpp"

namespace android::os
{
	// Fields
	inline JObject PowerMonitor::CREATOR()
	{
		return getStaticObjectField(
			"android.os.PowerMonitor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint PowerMonitor::POWER_MONITOR_TYPE_CONSUMER()
	{
		return getStaticField<jint>(
			"android.os.PowerMonitor",
			"POWER_MONITOR_TYPE_CONSUMER"
		);
	}
	inline jint PowerMonitor::POWER_MONITOR_TYPE_MEASUREMENT()
	{
		return getStaticField<jint>(
			"android.os.PowerMonitor",
			"POWER_MONITOR_TYPE_MEASUREMENT"
		);
	}
	
	// Constructors
	
	// Methods
	inline jint PowerMonitor::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString PowerMonitor::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint PowerMonitor::getType() const
	{
		return callMethod<jint>(
			"getType",
			"()I"
		);
	}
	inline void PowerMonitor::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::os;
#endif
