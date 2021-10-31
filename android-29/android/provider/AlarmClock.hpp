#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::provider
{
	class AlarmClock : public __JniBaseClass
	{
	public:
		// Fields
		static jstring ACTION_DISMISS_ALARM();
		static jstring ACTION_DISMISS_TIMER();
		static jstring ACTION_SET_ALARM();
		static jstring ACTION_SET_TIMER();
		static jstring ACTION_SHOW_ALARMS();
		static jstring ACTION_SHOW_TIMERS();
		static jstring ACTION_SNOOZE_ALARM();
		static jstring ALARM_SEARCH_MODE_ALL();
		static jstring ALARM_SEARCH_MODE_LABEL();
		static jstring ALARM_SEARCH_MODE_NEXT();
		static jstring ALARM_SEARCH_MODE_TIME();
		static jstring EXTRA_ALARM_SEARCH_MODE();
		static jstring EXTRA_ALARM_SNOOZE_DURATION();
		static jstring EXTRA_DAYS();
		static jstring EXTRA_HOUR();
		static jstring EXTRA_IS_PM();
		static jstring EXTRA_LENGTH();
		static jstring EXTRA_MESSAGE();
		static jstring EXTRA_MINUTES();
		static jstring EXTRA_RINGTONE();
		static jstring EXTRA_SKIP_UI();
		static jstring EXTRA_VIBRATE();
		static jstring VALUE_RINGTONE_SILENT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AlarmClock(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		AlarmClock(QAndroidJniObject obj);
		
		// Constructors
		AlarmClock();
		
		// Methods
	};
} // namespace android::provider

