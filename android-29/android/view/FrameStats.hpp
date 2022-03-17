#pragma once

#include "./FrameStats.def.hpp"

namespace android::view
{
	// Fields
	inline jlong FrameStats::UNDEFINED_TIME_NANO()
	{
		return getStaticField<jlong>(
			"android.view.FrameStats",
			"UNDEFINED_TIME_NANO"
		);
	}
	
	// Constructors
	inline FrameStats::FrameStats()
		: JObject(
			"android.view.FrameStats",
			"()V"
		) {}
	
	// Methods
	inline jlong FrameStats::getEndTimeNano() const
	{
		return callMethod<jlong>(
			"getEndTimeNano",
			"()J"
		);
	}
	inline jint FrameStats::getFrameCount() const
	{
		return callMethod<jint>(
			"getFrameCount",
			"()I"
		);
	}
	inline jlong FrameStats::getFramePresentedTimeNano(jint arg0) const
	{
		return callMethod<jlong>(
			"getFramePresentedTimeNano",
			"(I)J",
			arg0
		);
	}
	inline jlong FrameStats::getRefreshPeriodNano() const
	{
		return callMethod<jlong>(
			"getRefreshPeriodNano",
			"()J"
		);
	}
	inline jlong FrameStats::getStartTimeNano() const
	{
		return callMethod<jlong>(
			"getStartTimeNano",
			"()J"
		);
	}
} // namespace android::view

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view;
#endif
