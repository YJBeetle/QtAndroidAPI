#pragma once

#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./UsageStats.def.hpp"

namespace android::app::usage
{
	// Fields
	inline JObject UsageStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.UsageStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline UsageStats::UsageStats(android::app::usage::UsageStats &arg0)
		: JObject(
			"android.app.usage.UsageStats",
			"(Landroid/app/usage/UsageStats;)V",
			arg0.object()
		) {}
	
	// Methods
	inline void UsageStats::add(android::app::usage::UsageStats arg0) const
	{
		callMethod<void>(
			"add",
			"(Landroid/app/usage/UsageStats;)V",
			arg0.object()
		);
	}
	inline jint UsageStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jlong UsageStats::getFirstTimeStamp() const
	{
		return callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	inline jlong UsageStats::getLastTimeForegroundServiceUsed() const
	{
		return callMethod<jlong>(
			"getLastTimeForegroundServiceUsed",
			"()J"
		);
	}
	inline jlong UsageStats::getLastTimeStamp() const
	{
		return callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	inline jlong UsageStats::getLastTimeUsed() const
	{
		return callMethod<jlong>(
			"getLastTimeUsed",
			"()J"
		);
	}
	inline jlong UsageStats::getLastTimeVisible() const
	{
		return callMethod<jlong>(
			"getLastTimeVisible",
			"()J"
		);
	}
	inline JString UsageStats::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jlong UsageStats::getTotalTimeForegroundServiceUsed() const
	{
		return callMethod<jlong>(
			"getTotalTimeForegroundServiceUsed",
			"()J"
		);
	}
	inline jlong UsageStats::getTotalTimeInForeground() const
	{
		return callMethod<jlong>(
			"getTotalTimeInForeground",
			"()J"
		);
	}
	inline jlong UsageStats::getTotalTimeVisible() const
	{
		return callMethod<jlong>(
			"getTotalTimeVisible",
			"()J"
		);
	}
	inline void UsageStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
