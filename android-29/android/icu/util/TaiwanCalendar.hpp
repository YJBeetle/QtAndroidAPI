#pragma once

#ifndef ANDROID_ICU_UTIL_TAIWANCALENDAR
#define ANDROID_ICU_UTIL_TAIWANCALENDAR

#include "../../../__JniBaseClass.hpp"
#include "Calendar.hpp"
#include "GregorianCalendar.hpp"

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
	class TaiwanCalendar : public __jni_impl::android::icu::util::GregorianCalendar
	{
	public:
		// Fields
		static jint BEFORE_MINGUO();
		static jint MINGUO();
		
		// Constructors
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor(__jni_impl::java::util::Date arg0);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void __constructor();
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		
		// Methods
		QAndroidJniObject getType();
	};
} // namespace __jni_impl::android::icu::util

#include "TimeZone.hpp"
#include "../../../java/util/Locale.hpp"
#include "ULocale.hpp"
#include "../../../java/util/Date.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint TaiwanCalendar::BEFORE_MINGUO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TaiwanCalendar",
			"BEFORE_MINGUO");
	}
	jint TaiwanCalendar::MINGUO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.TaiwanCalendar",
			"MINGUO");
	}
	
	// Constructors
	void TaiwanCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void TaiwanCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void TaiwanCalendar::__constructor(__jni_impl::java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object());
	}
	void TaiwanCalendar::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void TaiwanCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void TaiwanCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"()V");
	}
	void TaiwanCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object());
	}
	void TaiwanCalendar::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	void TaiwanCalendar::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.TaiwanCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject TaiwanCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class TaiwanCalendar : public __jni_impl::android::icu::util::TaiwanCalendar
	{
	public:
		TaiwanCalendar(QAndroidJniObject obj) { __thiz = obj; }
		TaiwanCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TaiwanCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		TaiwanCalendar(__jni_impl::java::util::Date arg0)
		{
			__constructor(
				arg0);
		}
		TaiwanCalendar(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		TaiwanCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		TaiwanCalendar()
		{
			__constructor();
		}
		TaiwanCalendar(__jni_impl::android::icu::util::TimeZone arg0)
		{
			__constructor(
				arg0);
		}
		TaiwanCalendar(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		TaiwanCalendar(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_TAIWANCALENDAR

