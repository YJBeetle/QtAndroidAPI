#pragma once

#include "../../JObject.hpp"
#include "../view/View.hpp"
#include "./TextView.hpp"

namespace android::content
{
	class Context;
}

namespace android::widget
{
	class TextClock : public android::widget::TextView
	{
	public:
		// Fields
		static jstring DEFAULT_FORMAT_12_HOUR();
		static jstring DEFAULT_FORMAT_24_HOUR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClock(const char *className, const char *sig, Ts...agv) : android::widget::TextView(className, sig, std::forward<Ts>(agv)...) {}
		TextClock(QJniObject obj);
		
		// Constructors
		TextClock(android::content::Context arg0);
		TextClock(android::content::Context arg0, JObject arg1);
		TextClock(android::content::Context arg0, JObject arg1, jint arg2);
		TextClock(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		jstring getFormat12Hour();
		jstring getFormat24Hour();
		jstring getTimeZone();
		jboolean is24HourModeEnabled();
		void onVisibilityAggregated(jboolean arg0);
		void refreshTime();
		void setFormat12Hour(jstring arg0);
		void setFormat24Hour(jstring arg0);
		void setTimeZone(jstring arg0);
	};
} // namespace android::widget

