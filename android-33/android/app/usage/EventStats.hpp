#pragma once

#include "../../os/Parcel.def.hpp"
#include "./EventStats.def.hpp"

namespace android::app::usage
{
	// Fields
	inline JObject EventStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.EventStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline EventStats::EventStats(android::app::usage::EventStats &arg0)
		: JObject(
			"android.app.usage.EventStats",
			"(Landroid/app/usage/EventStats;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void EventStats::add(android::app::usage::EventStats arg0) const
	{
		callMethod<void>(
			"add",
			"(Landroid/app/usage/EventStats;)V",
			arg0.object()
		);
	}
	inline jint EventStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint EventStats::getCount() const
	{
		return callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	inline jint EventStats::getEventType() const
	{
		return callMethod<jint>(
			"getEventType",
			"()I"
		);
	}
	inline jlong EventStats::getFirstTimeStamp() const
	{
		return callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	inline jlong EventStats::getLastEventTime() const
	{
		return callMethod<jlong>(
			"getLastEventTime",
			"()J"
		);
	}
	inline jlong EventStats::getLastTimeStamp() const
	{
		return callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	inline jlong EventStats::getTotalTime() const
	{
		return callMethod<jlong>(
			"getTotalTime",
			"()J"
		);
	}
	inline void EventStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::usage

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::usage;
#endif
