#pragma once

#include "./TextView.hpp"

namespace android::content
{
	class Context;
}
class JString;
class JString;

namespace android::widget
{
	class TextClock : public android::widget::TextView
	{
	public:
		// Fields
		static JString DEFAULT_FORMAT_12_HOUR();
		static JString DEFAULT_FORMAT_24_HOUR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClock(const char *className, const char *sig, Ts...agv) : android::widget::TextView(className, sig, std::forward<Ts>(agv)...) {}
		TextClock(QAndroidJniObject obj) : android::widget::TextView(obj) {}
		
		// Constructors
		TextClock(android::content::Context arg0);
		TextClock(android::content::Context arg0, JObject arg1);
		TextClock(android::content::Context arg0, JObject arg1, jint arg2);
		TextClock(android::content::Context arg0, JObject arg1, jint arg2, jint arg3);
		
		// Methods
		JString getFormat12Hour() const;
		JString getFormat24Hour() const;
		JString getTimeZone() const;
		jboolean is24HourModeEnabled() const;
		void onVisibilityAggregated(jboolean arg0) const;
		void setFormat12Hour(JString arg0) const;
		void setFormat24Hour(JString arg0) const;
		void setTimeZone(JString arg0) const;
	};
} // namespace android::widget

