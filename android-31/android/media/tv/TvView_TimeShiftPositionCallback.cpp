#include "./TvView_TimeShiftPositionCallback.hpp"

namespace android::media::tv
{
	// Fields
	
	// QAndroidJniObject forward
	TvView_TimeShiftPositionCallback::TvView_TimeShiftPositionCallback(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	TvView_TimeShiftPositionCallback::TvView_TimeShiftPositionCallback()
		: __JniBaseClass(
			"android.media.tv.TvView$TimeShiftPositionCallback",
			"()V"
		) {}
	
	// Methods
	void TvView_TimeShiftPositionCallback::onTimeShiftCurrentPositionChanged(jstring arg0, jlong arg1)
	{
		callMethod<void>(
			"onTimeShiftCurrentPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void TvView_TimeShiftPositionCallback::onTimeShiftStartPositionChanged(jstring arg0, jlong arg1)
	{
		callMethod<void>(
			"onTimeShiftStartPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
} // namespace android::media::tv

