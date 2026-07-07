#pragma once

#include "../../JObject.hpp"

class JString;

namespace android::provider
{
	class AlarmClock : public JObject
	{
	public:
		// Fields
		static JString ACTION_DISMISS_ALARM();
		static JString ACTION_DISMISS_TIMER();
		static JString ACTION_SET_ALARM();
		static JString ACTION_SET_TIMER();
		static JString ACTION_SHOW_ALARMS();
		static JString ACTION_SHOW_TIMERS();
		static JString ACTION_SNOOZE_ALARM();
		static JString ALARM_SEARCH_MODE_ALL();
		static JString ALARM_SEARCH_MODE_LABEL();
		static JString ALARM_SEARCH_MODE_NEXT();
		static JString ALARM_SEARCH_MODE_TIME();
		static JString EXTRA_ALARM_SEARCH_MODE();
		static JString EXTRA_ALARM_SNOOZE_DURATION();
		static JString EXTRA_DAYS();
		static JString EXTRA_HOUR();
		static JString EXTRA_IS_PM();
		static JString EXTRA_LENGTH();
		static JString EXTRA_MESSAGE();
		static JString EXTRA_MINUTES();
		static JString EXTRA_RINGTONE();
		static JString EXTRA_SKIP_UI();
		static JString EXTRA_VIBRATE();
		static JString VALUE_RINGTONE_SILENT();
		
		// QJniObject forward
		template<typename ...Ts> explicit AlarmClock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		AlarmClock(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		AlarmClock();
		
		// Methods
	};
} // namespace android::provider

