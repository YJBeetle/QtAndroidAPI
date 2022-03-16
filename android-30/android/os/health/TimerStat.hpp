#pragma once

#include "../Parcel.def.hpp"
#include "./TimerStat.def.hpp"

namespace android::os::health
{
	// Fields
	inline JObject TimerStat::CREATOR()
	{
		return getStaticObjectField(
			"android.os.health.TimerStat",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline TimerStat::TimerStat()
		: JObject(
			"android.os.health.TimerStat",
			"()V"
		) {}
	inline TimerStat::TimerStat(android::os::Parcel arg0)
		: JObject(
			"android.os.health.TimerStat",
			"(Landroid/os/Parcel;)V",
			arg0.object()
		) {}
	inline TimerStat::TimerStat(jint arg0, jlong arg1)
		: JObject(
			"android.os.health.TimerStat",
			"(IJ)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jint TimerStat::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint TimerStat::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline jlong TimerStat::getTime() const
	{
		return callMethod<jlong>(
			"getTime",
			"()J"
		);
	}
	inline void TimerStat::setCount(jint arg0) const
	{
		callMethod<void>(
			"setCount",
			"(I)V",
			arg0
		);
	}
	inline void TimerStat::setTime(jlong arg0) const
	{
		callMethod<void>(
			"setTime",
			"(J)V",
			arg0
		);
	}
	inline void TimerStat::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::os::health

// Base class headers

