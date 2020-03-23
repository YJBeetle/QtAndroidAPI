#pragma once

#ifndef ANDROID_PROVIDER_ALARMCLOCK
#define ANDROID_PROVIDER_ALARMCLOCK

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class AlarmClock : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ACTION_DISMISS_ALARM();
		static QAndroidJniObject ACTION_DISMISS_TIMER();
		static QAndroidJniObject ACTION_SET_ALARM();
		static QAndroidJniObject ACTION_SET_TIMER();
		static QAndroidJniObject ACTION_SHOW_ALARMS();
		static QAndroidJniObject ACTION_SHOW_TIMERS();
		static QAndroidJniObject ACTION_SNOOZE_ALARM();
		static QAndroidJniObject ALARM_SEARCH_MODE_ALL();
		static QAndroidJniObject ALARM_SEARCH_MODE_LABEL();
		static QAndroidJniObject ALARM_SEARCH_MODE_NEXT();
		static QAndroidJniObject ALARM_SEARCH_MODE_TIME();
		static QAndroidJniObject EXTRA_ALARM_SEARCH_MODE();
		static QAndroidJniObject EXTRA_ALARM_SNOOZE_DURATION();
		static QAndroidJniObject EXTRA_DAYS();
		static QAndroidJniObject EXTRA_HOUR();
		static QAndroidJniObject EXTRA_IS_PM();
		static QAndroidJniObject EXTRA_LENGTH();
		static QAndroidJniObject EXTRA_MESSAGE();
		static QAndroidJniObject EXTRA_MINUTES();
		static QAndroidJniObject EXTRA_RINGTONE();
		static QAndroidJniObject EXTRA_SKIP_UI();
		static QAndroidJniObject EXTRA_VIBRATE();
		static QAndroidJniObject VALUE_RINGTONE_SILENT();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	QAndroidJniObject AlarmClock::ACTION_DISMISS_ALARM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_DISMISS_ALARM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::ACTION_DISMISS_TIMER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_DISMISS_TIMER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::ACTION_SET_ALARM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SET_ALARM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::ACTION_SET_TIMER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SET_TIMER",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::ACTION_SHOW_ALARMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SHOW_ALARMS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::ACTION_SHOW_TIMERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SHOW_TIMERS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::ACTION_SNOOZE_ALARM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ACTION_SNOOZE_ALARM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::ALARM_SEARCH_MODE_ALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_ALL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::ALARM_SEARCH_MODE_LABEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_LABEL",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::ALARM_SEARCH_MODE_NEXT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_NEXT",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::ALARM_SEARCH_MODE_TIME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"ALARM_SEARCH_MODE_TIME",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::EXTRA_ALARM_SEARCH_MODE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_ALARM_SEARCH_MODE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::EXTRA_ALARM_SNOOZE_DURATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_ALARM_SNOOZE_DURATION",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::EXTRA_DAYS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_DAYS",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::EXTRA_HOUR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_HOUR",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::EXTRA_IS_PM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_IS_PM",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::EXTRA_LENGTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_LENGTH",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::EXTRA_MESSAGE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_MESSAGE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::EXTRA_MINUTES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_MINUTES",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::EXTRA_RINGTONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_RINGTONE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::EXTRA_SKIP_UI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_SKIP_UI",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::EXTRA_VIBRATE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"EXTRA_VIBRATE",
			"Ljava/lang/String;");
	}
	QAndroidJniObject AlarmClock::VALUE_RINGTONE_SILENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.AlarmClock",
			"VALUE_RINGTONE_SILENT",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void AlarmClock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.AlarmClock",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class AlarmClock : public __jni_impl::android::provider::AlarmClock
	{
	public:
		AlarmClock(QAndroidJniObject obj) { __thiz = obj; }
		AlarmClock()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_ALARMCLOCK

