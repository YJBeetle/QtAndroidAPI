#include "./AlarmClock.hpp"

namespace android::provider
{
	// Fields
	jstring AlarmClock::ACTION_DISMISS_ALARM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_DISMISS_ALARM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::ACTION_DISMISS_TIMER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_DISMISS_TIMER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::ACTION_SET_ALARM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SET_ALARM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::ACTION_SET_TIMER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SET_TIMER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::ACTION_SHOW_ALARMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SHOW_ALARMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::ACTION_SHOW_TIMERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SHOW_TIMERS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::ACTION_SNOOZE_ALARM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SNOOZE_ALARM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::ALARM_SEARCH_MODE_ALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_ALL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::ALARM_SEARCH_MODE_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_LABEL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::ALARM_SEARCH_MODE_NEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_NEXT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::ALARM_SEARCH_MODE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_TIME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::EXTRA_ALARM_SEARCH_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_ALARM_SEARCH_MODE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::EXTRA_ALARM_SNOOZE_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_ALARM_SNOOZE_DURATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::EXTRA_DAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_DAYS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::EXTRA_HOUR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_HOUR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::EXTRA_IS_PM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_IS_PM",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::EXTRA_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_LENGTH",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::EXTRA_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_MESSAGE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::EXTRA_MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_MINUTES",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::EXTRA_RINGTONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_RINGTONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::EXTRA_SKIP_UI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_SKIP_UI",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::EXTRA_VIBRATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_VIBRATE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring AlarmClock::VALUE_RINGTONE_SILENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"VALUE_RINGTONE_SILENT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	AlarmClock::AlarmClock(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	AlarmClock::AlarmClock()
		: __JniBaseClass(
			"android.provider.AlarmClock",
			"()V"
		) {}
	
	// Methods
} // namespace android::provider

