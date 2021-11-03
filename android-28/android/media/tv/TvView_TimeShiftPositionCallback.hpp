#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::tv
{
	class TvView_TimeShiftPositionCallback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TvView_TimeShiftPositionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvView_TimeShiftPositionCallback(QAndroidJniObject obj);
		
		// Constructors
		TvView_TimeShiftPositionCallback();
		
		// Methods
		void onTimeShiftCurrentPositionChanged(JString arg0, jlong arg1);
		void onTimeShiftStartPositionChanged(JString arg0, jlong arg1);
	};
} // namespace android::media::tv

