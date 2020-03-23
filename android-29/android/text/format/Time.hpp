#pragma once

#ifndef ANDROID_TEXT_FORMAT_TIME
#define ANDROID_TEXT_FORMAT_TIME

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::text::format
{
	class Time : public __JniBaseClass
	{
	public:
		// Fields
		static jint EPOCH_JULIAN_DAY();
		static jint FRIDAY();
		static jint HOUR();
		static jint MINUTE();
		static jint MONDAY();
		static jint MONDAY_BEFORE_JULIAN_EPOCH();
		static jint MONTH();
		static jint MONTH_DAY();
		static jint SATURDAY();
		static jint SECOND();
		static jint SUNDAY();
		static jint THURSDAY();
		static QAndroidJniObject TIMEZONE_UTC();
		static jint TUESDAY();
		static jint WEDNESDAY();
		static jint WEEK_DAY();
		static jint WEEK_NUM();
		static jint YEAR();
		static jint YEAR_DAY();
		jboolean allDay();
		jlong gmtoff();
		jint hour();
		jint isDst();
		jint minute();
		jint month();
		jint monthDay();
		jint second();
		QAndroidJniObject timezone();
		jint weekDay();
		jint year();
		jint yearDay();
		
		// Constructors
		void __constructor(__jni_impl::android::text::format::Time arg0);
		void __constructor();
		void __constructor(jstring arg0);
		
		// Methods
		QAndroidJniObject toString();
		void clear(jstring arg0);
		static jint compare(__jni_impl::android::text::format::Time arg0, __jni_impl::android::text::format::Time arg1);
		QAndroidJniObject format(jstring arg0);
		void set(jlong arg0);
		void set(jint arg0, jint arg1, jint arg2);
		void set(__jni_impl::android::text::format::Time arg0);
		void set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		jlong toMillis(jboolean arg0);
		jlong normalize(jboolean arg0);
		jboolean before(__jni_impl::android::text::format::Time arg0);
		jboolean after(__jni_impl::android::text::format::Time arg0);
		jboolean parse(jstring arg0);
		jint getActualMaximum(jint arg0);
		jint getWeekNumber();
		void switchTimezone(jstring arg0);
		jboolean parse3339(jstring arg0);
		static QAndroidJniObject getCurrentTimezone();
		void setToNow();
		QAndroidJniObject format2445();
		QAndroidJniObject format3339(jboolean arg0);
		static jboolean isEpoch(__jni_impl::android::text::format::Time arg0);
		static jint getJulianDay(jlong arg0, jlong arg1);
		jlong setJulianDay(jint arg0);
		static jint getWeeksSinceEpochFromJulianDay(jint arg0, jint arg1);
		static jint getJulianMondayFromWeeksSinceEpoch(jint arg0);
	};
} // namespace __jni_impl::android::text::format


namespace __jni_impl::android::text::format
{
	// Fields
	jint Time::EPOCH_JULIAN_DAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"EPOCH_JULIAN_DAY");
	}
	jint Time::FRIDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"FRIDAY");
	}
	jint Time::HOUR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"HOUR");
	}
	jint Time::MINUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"MINUTE");
	}
	jint Time::MONDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"MONDAY");
	}
	jint Time::MONDAY_BEFORE_JULIAN_EPOCH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"MONDAY_BEFORE_JULIAN_EPOCH");
	}
	jint Time::MONTH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"MONTH");
	}
	jint Time::MONTH_DAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"MONTH_DAY");
	}
	jint Time::SATURDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"SATURDAY");
	}
	jint Time::SECOND()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"SECOND");
	}
	jint Time::SUNDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"SUNDAY");
	}
	jint Time::THURSDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"THURSDAY");
	}
	QAndroidJniObject Time::TIMEZONE_UTC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.format.Time",
			"TIMEZONE_UTC",
			"Ljava/lang/String;");
	}
	jint Time::TUESDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"TUESDAY");
	}
	jint Time::WEDNESDAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"WEDNESDAY");
	}
	jint Time::WEEK_DAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"WEEK_DAY");
	}
	jint Time::WEEK_NUM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"WEEK_NUM");
	}
	jint Time::YEAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"YEAR");
	}
	jint Time::YEAR_DAY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.text.format.Time",
			"YEAR_DAY");
	}
	jboolean Time::allDay()
	{
		return __thiz.getField<jboolean>(
			"allDay");
	}
	jlong Time::gmtoff()
	{
		return __thiz.getField<jlong>(
			"gmtoff");
	}
	jint Time::hour()
	{
		return __thiz.getField<jint>(
			"hour");
	}
	jint Time::isDst()
	{
		return __thiz.getField<jint>(
			"isDst");
	}
	jint Time::minute()
	{
		return __thiz.getField<jint>(
			"minute");
	}
	jint Time::month()
	{
		return __thiz.getField<jint>(
			"month");
	}
	jint Time::monthDay()
	{
		return __thiz.getField<jint>(
			"monthDay");
	}
	jint Time::second()
	{
		return __thiz.getField<jint>(
			"second");
	}
	QAndroidJniObject Time::timezone()
	{
		return __thiz.getObjectField(
			"timezone",
			"Ljava/lang/String;");
	}
	jint Time::weekDay()
	{
		return __thiz.getField<jint>(
			"weekDay");
	}
	jint Time::year()
	{
		return __thiz.getField<jint>(
			"year");
	}
	jint Time::yearDay()
	{
		return __thiz.getField<jint>(
			"yearDay");
	}
	
	// Constructors
	void Time::__constructor(__jni_impl::android::text::format::Time arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.format.Time",
			"(Landroid/text/format/Time;)V",
			arg0.__jniObject().object());
	}
	void Time::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.format.Time",
			"()V");
	}
	void Time::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.format.Time",
			"(Ljava/lang/String;)V",
			arg0);
	}
	
	// Methods
	QAndroidJniObject Time::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void Time::clear(jstring arg0)
	{
		__thiz.callMethod<void>(
			"clear",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jint Time::compare(__jni_impl::android::text::format::Time arg0, __jni_impl::android::text::format::Time arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.format.Time",
			"compare",
			"(Landroid/text/format/Time;Landroid/text/format/Time;)I",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject Time::format(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	void Time::set(jlong arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(J)V",
			arg0);
	}
	void Time::set(jint arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"set",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void Time::set(__jni_impl::android::text::format::Time arg0)
	{
		__thiz.callMethod<void>(
			"set",
			"(Landroid/text/format/Time;)V",
			arg0.__jniObject().object());
	}
	void Time::set(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz.callMethod<void>(
			"set",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	jlong Time::toMillis(jboolean arg0)
	{
		return __thiz.callMethod<jlong>(
			"toMillis",
			"(Z)J",
			arg0);
	}
	jlong Time::normalize(jboolean arg0)
	{
		return __thiz.callMethod<jlong>(
			"normalize",
			"(Z)J",
			arg0);
	}
	jboolean Time::before(__jni_impl::android::text::format::Time arg0)
	{
		return __thiz.callMethod<jboolean>(
			"before",
			"(Landroid/text/format/Time;)Z",
			arg0.__jniObject().object());
	}
	jboolean Time::after(__jni_impl::android::text::format::Time arg0)
	{
		return __thiz.callMethod<jboolean>(
			"after",
			"(Landroid/text/format/Time;)Z",
			arg0.__jniObject().object());
	}
	jboolean Time::parse(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"parse",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	jint Time::getActualMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0);
	}
	jint Time::getWeekNumber()
	{
		return __thiz.callMethod<jint>(
			"getWeekNumber",
			"()I");
	}
	void Time::switchTimezone(jstring arg0)
	{
		__thiz.callMethod<void>(
			"switchTimezone",
			"(Ljava/lang/String;)V",
			arg0);
	}
	jboolean Time::parse3339(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"parse3339",
			"(Ljava/lang/String;)Z",
			arg0);
	}
	QAndroidJniObject Time::getCurrentTimezone()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.format.Time",
			"getCurrentTimezone",
			"()Ljava/lang/String;");
	}
	void Time::setToNow()
	{
		__thiz.callMethod<void>(
			"setToNow",
			"()V");
	}
	QAndroidJniObject Time::format2445()
	{
		return __thiz.callObjectMethod(
			"format2445",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject Time::format3339(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"format3339",
			"(Z)Ljava/lang/String;",
			arg0);
	}
	jboolean Time::isEpoch(__jni_impl::android::text::format::Time arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.text.format.Time",
			"isEpoch",
			"(Landroid/text/format/Time;)Z",
			arg0.__jniObject().object());
	}
	jint Time::getJulianDay(jlong arg0, jlong arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.format.Time",
			"getJulianDay",
			"(JJ)I",
			arg0,
			arg1);
	}
	jlong Time::setJulianDay(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"setJulianDay",
			"(I)J",
			arg0);
	}
	jint Time::getWeeksSinceEpochFromJulianDay(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.format.Time",
			"getWeeksSinceEpochFromJulianDay",
			"(II)I",
			arg0,
			arg1);
	}
	jint Time::getJulianMondayFromWeeksSinceEpoch(jint arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.format.Time",
			"getJulianMondayFromWeeksSinceEpoch",
			"(I)I",
			arg0);
	}
} // namespace __jni_impl::android::text::format

namespace android::text::format
{
	class Time : public __jni_impl::android::text::format::Time
	{
	public:
		Time(QAndroidJniObject obj) { __thiz = obj; }
		Time(__jni_impl::android::text::format::Time arg0)
		{
			__constructor(
				arg0);
		}
		Time()
		{
			__constructor();
		}
		Time(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::text::format

#endif // ANDROID_TEXT_FORMAT_TIME

