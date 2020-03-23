#pragma once

#ifndef ANDROID_ICU_UTIL_ETHIOPICCALENDAR
#define ANDROID_ICU_UTIL_ETHIOPICCALENDAR

#include "Calendar.hpp"

namespace __jni_impl::android::icu::util
{
	class TimeZone;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Date;
}

namespace __jni_impl::android::icu::util
{
	class EthiopicCalendar : public __jni_impl::android::icu::util::Calendar
	{
	public:
		// Fields
		static jint GENBOT();
		static jint HAMLE();
		static jint HEDAR();
		static jint MEGABIT();
		static jint MESKEREM();
		static jint MIAZIA();
		static jint NEHASSE();
		static jint PAGUMEN();
		static jint SENE();
		static jint TAHSAS();
		static jint TEKEMT();
		static jint TER();
		static jint YEKATIT();
		
		// Constructors
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(__jni_impl::java::util::Date arg0);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void __constructor();
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		
		// Methods
		QAndroidJniObject getType();
		void setAmeteAlemEra(jboolean arg0);
		jboolean isAmeteAlemEra();
	};
} // namespace __jni_impl::android::icu::util

#include "TimeZone.hpp"
#include "../../../java/util/Locale.hpp"
#include "ULocale.hpp"
#include "../../../java/util/Date.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint EthiopicCalendar::GENBOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"GENBOT");
	}
	jint EthiopicCalendar::HAMLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"HAMLE");
	}
	jint EthiopicCalendar::HEDAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"HEDAR");
	}
	jint EthiopicCalendar::MEGABIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"MEGABIT");
	}
	jint EthiopicCalendar::MESKEREM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"MESKEREM");
	}
	jint EthiopicCalendar::MIAZIA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"MIAZIA");
	}
	jint EthiopicCalendar::NEHASSE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"NEHASSE");
	}
	jint EthiopicCalendar::PAGUMEN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"PAGUMEN");
	}
	jint EthiopicCalendar::SENE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"SENE");
	}
	jint EthiopicCalendar::TAHSAS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"TAHSAS");
	}
	jint EthiopicCalendar::TEKEMT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"TEKEMT");
	}
	jint EthiopicCalendar::TER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"TER");
	}
	jint EthiopicCalendar::YEKATIT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.EthiopicCalendar",
			"YEKATIT");
	}
	
	// Constructors
	void EthiopicCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void EthiopicCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void EthiopicCalendar::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void EthiopicCalendar::__constructor(__jni_impl::java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object());
	}
	void EthiopicCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void EthiopicCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"()V");
	}
	void EthiopicCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object());
	}
	void EthiopicCalendar::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	void EthiopicCalendar::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.EthiopicCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject EthiopicCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;");
	}
	void EthiopicCalendar::setAmeteAlemEra(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setAmeteAlemEra",
			"(Z)V",
			arg0);
	}
	jboolean EthiopicCalendar::isAmeteAlemEra()
	{
		return __thiz.callMethod<jboolean>(
			"isAmeteAlemEra",
			"()Z");
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class EthiopicCalendar : public __jni_impl::android::icu::util::EthiopicCalendar
	{
	public:
		EthiopicCalendar(QAndroidJniObject obj) { __thiz = obj; }
		EthiopicCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		EthiopicCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		EthiopicCalendar(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		EthiopicCalendar(__jni_impl::java::util::Date arg0)
		{
			__constructor(
				arg0);
		}
		EthiopicCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		EthiopicCalendar()
		{
			__constructor();
		}
		EthiopicCalendar(__jni_impl::android::icu::util::TimeZone arg0)
		{
			__constructor(
				arg0);
		}
		EthiopicCalendar(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		EthiopicCalendar(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_ETHIOPICCALENDAR

