#include "../../../JString.hpp"
#include "./TvView_TimeShiftPositionCallback.hpp"

namespace android::media::tv
{
	// Fields
	
	// QJniObject forward
	TvView_TimeShiftPositionCallback::TvView_TimeShiftPositionCallback(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	TvView_TimeShiftPositionCallback::TvView_TimeShiftPositionCallback()
		: JObject(
			"android.media.tv.TvView$TimeShiftPositionCallback",
			"()V"
		) {}
	
	// Methods
	void TvView_TimeShiftPositionCallback::onTimeShiftCurrentPositionChanged(JString arg0, jlong arg1)
	{
		callMethod<void>(
			"onTimeShiftCurrentPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	void TvView_TimeShiftPositionCallback::onTimeShiftStartPositionChanged(JString arg0, jlong arg1)
	{
		callMethod<void>(
			"onTimeShiftStartPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::media::tv

