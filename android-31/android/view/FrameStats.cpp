#include "./FrameStats.hpp"

namespace android::view
{
	// Fields
	jlong FrameStats::UNDEFINED_TIME_NANO()
	{
		return getStaticField<jlong>(
			"android.view.FrameStats",
			"UNDEFINED_TIME_NANO"
		);
	}
	
	// QJniObject forward
	FrameStats::FrameStats(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	FrameStats::FrameStats()
		: JObject(
			"android.view.FrameStats",
			"()V"
		) {}
	
	// Methods
	jlong FrameStats::getEndTimeNano() const
	{
		return callMethod<jlong>(
			"getEndTimeNano",
			"()J"
		);
	}
	jint FrameStats::getFrameCount() const
	{
		return callMethod<jint>(
			"getFrameCount",
			"()I"
		);
	}
	jlong FrameStats::getFramePresentedTimeNano(jint arg0) const
	{
		return callMethod<jlong>(
			"getFramePresentedTimeNano",
			"(I)J",
			arg0
		);
	}
	jlong FrameStats::getRefreshPeriodNano() const
	{
		return callMethod<jlong>(
			"getRefreshPeriodNano",
			"()J"
		);
	}
	jlong FrameStats::getStartTimeNano() const
	{
		return callMethod<jlong>(
			"getStartTimeNano",
			"()J"
		);
	}
} // namespace android::view

