#pragma once

#include "../../content/res/Configuration.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "./ConfigurationStats.def.hpp"

namespace android::app::usage
{
	// Fields
	inline JObject ConfigurationStats::CREATOR()
	{
		return getStaticObjectField(
			"android.app.usage.ConfigurationStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	inline ConfigurationStats::ConfigurationStats(android::app::usage::ConfigurationStats &arg0)
		: JObject(
			"android.app.usage.ConfigurationStats",
			"(Landroid/app/usage/ConfigurationStats;)V",
			arg0.object()
		) {}
	
	// Methods
	inline jint ConfigurationStats::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline jint ConfigurationStats::getActivationCount() const
	{
		return callMethod<jint>(
			"getActivationCount",
			"()I"
		);
	}
	inline android::content::res::Configuration ConfigurationStats::getConfiguration() const
	{
		return callObjectMethod(
			"getConfiguration",
			"()Landroid/content/res/Configuration;"
		);
	}
	inline jlong ConfigurationStats::getFirstTimeStamp() const
	{
		return callMethod<jlong>(
			"getFirstTimeStamp",
			"()J"
		);
	}
	inline jlong ConfigurationStats::getLastTimeActive() const
	{
		return callMethod<jlong>(
			"getLastTimeActive",
			"()J"
		);
	}
	inline jlong ConfigurationStats::getLastTimeStamp() const
	{
		return callMethod<jlong>(
			"getLastTimeStamp",
			"()J"
		);
	}
	inline jlong ConfigurationStats::getTotalTimeActive() const
	{
		return callMethod<jlong>(
			"getTotalTimeActive",
			"()J"
		);
	}
	inline void ConfigurationStats::writeToParcel(android::os::Parcel arg0, jint arg1) const
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
