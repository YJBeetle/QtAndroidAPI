#pragma once

#include "../../../JString.hpp"
#include "./TvView_TimeShiftPositionCallback.def.hpp"

namespace android::media::tv
{
	// Fields
	
	// Constructors
	inline TvView_TimeShiftPositionCallback::TvView_TimeShiftPositionCallback()
		: JObject(
			"android.media.tv.TvView$TimeShiftPositionCallback",
			"()V"
		) {}
	
	// Methods
	inline void TvView_TimeShiftPositionCallback::onTimeShiftCurrentPositionChanged(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"onTimeShiftCurrentPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
	inline void TvView_TimeShiftPositionCallback::onTimeShiftStartPositionChanged(JString arg0, jlong arg1) const
	{
		callMethod<void>(
			"onTimeShiftStartPositionChanged",
			"(Ljava/lang/String;J)V",
			arg0.object<jstring>(),
			arg1
		);
	}
} // namespace android::media::tv

// Base class headers

