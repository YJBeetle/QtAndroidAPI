#include "./FrameStats.hpp"

namespace android::view
{
	// Fields
	jlong FrameStats::UNDEFINED_TIME_NANO()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.view.FrameStats",
			"UNDEFINED_TIME_NANO"
		);
	}
	
	FrameStats::FrameStats(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	FrameStats::FrameStats()
	{
		__thiz = QAndroidJniObject(
			"android.view.FrameStats",
			"()V"
		);
	}
	
	// Methods
	jlong FrameStats::getEndTimeNano()
	{
		return __thiz.callMethod<jlong>(
			"getEndTimeNano",
			"()J"
		);
	}
	jint FrameStats::getFrameCount()
	{
		return __thiz.callMethod<jint>(
			"getFrameCount",
			"()I"
		);
	}
	jlong FrameStats::getFramePresentedTimeNano(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getFramePresentedTimeNano",
			"(I)J",
			arg0
		);
	}
	jlong FrameStats::getRefreshPeriodNano()
	{
		return __thiz.callMethod<jlong>(
			"getRefreshPeriodNano",
			"()J"
		);
	}
	jlong FrameStats::getStartTimeNano()
	{
		return __thiz.callMethod<jlong>(
			"getStartTimeNano",
			"()J"
		);
	}
} // namespace android::view

