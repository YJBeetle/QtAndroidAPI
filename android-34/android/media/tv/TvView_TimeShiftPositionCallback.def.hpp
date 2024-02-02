#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::tv
{
	class TvView_TimeShiftPositionCallback : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TvView_TimeShiftPositionCallback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TvView_TimeShiftPositionCallback(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		TvView_TimeShiftPositionCallback();
		
		// Methods
		void onTimeShiftCurrentPositionChanged(JString arg0, jlong arg1) const;
		void onTimeShiftStartPositionChanged(JString arg0, jlong arg1) const;
	};
} // namespace android::media::tv

