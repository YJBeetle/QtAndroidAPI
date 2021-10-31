#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::tv
{
	class TvView_TimeShiftPositionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		TvView_TimeShiftPositionCallback(QAndroidJniObject obj);
		// Constructors
		TvView_TimeShiftPositionCallback();
		
		// Methods
		void onTimeShiftCurrentPositionChanged(jstring arg0, jlong arg1);
		void onTimeShiftStartPositionChanged(jstring arg0, jlong arg1);
	};
} // namespace android::media::tv

