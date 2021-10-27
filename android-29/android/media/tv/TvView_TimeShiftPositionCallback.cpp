#include "./TvView_TimeShiftPositionCallback.hpp"

namespace android::media::tv
{
	// Fields
	
	TvView_TimeShiftPositionCallback::TvView_TimeShiftPositionCallback(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TvView_TimeShiftPositionCallback::TvView_TimeShiftPositionCallback()
	{
		__thiz = QAndroidJniObject(
			"android.media.tv.TvView$TimeShiftPositionCallback",
			"()V"
		);
	}
	
	// Methods
	void TvView_TimeShiftPositionCallback::onTimeShiftCurrentPositionChanged(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"onTimeShiftCurrentPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void TvView_TimeShiftPositionCallback::onTimeShiftCurrentPositionChanged(const QString &arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"onTimeShiftCurrentPositionChanged",
			"(Ljava/lang/String;J)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void TvView_TimeShiftPositionCallback::onTimeShiftStartPositionChanged(jstring arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"onTimeShiftStartPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0,
			arg1
		);
	}
	void TvView_TimeShiftPositionCallback::onTimeShiftStartPositionChanged(const QString &arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"onTimeShiftStartPositionChanged",
			"(Ljava/lang/String;J)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace android::media::tv

