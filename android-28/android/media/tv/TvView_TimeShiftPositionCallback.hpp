#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::tv
{
	class TvView_TimeShiftPositionCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvView_TimeShiftPositionCallback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TvView_TimeShiftPositionCallback(QJniObject obj);
		
		// Constructors
		TvView_TimeShiftPositionCallback();
		
		// Methods
		void onTimeShiftCurrentPositionChanged(jstring arg0, jlong arg1);
		void onTimeShiftStartPositionChanged(jstring arg0, jlong arg1);
	};
} // namespace android::media::tv

