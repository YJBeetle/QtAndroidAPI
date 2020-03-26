#pragma once

#ifndef ANDROID_ICU_UTIL_GREGORIANCALENDAR
#define ANDROID_ICU_UTIL_GREGORIANCALENDAR

#include "../../../__JniBaseClass.hpp"
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
	class Calendar;
}

namespace __jni_impl::android::icu::util
{
	class GregorianCalendar : public __jni_impl::android::icu::util::Calendar
	{
	public:
		// Fields
		static jint AD();
		static jint BC();
		
		// Constructors
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		void __constructor();
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		
		// Methods
		jint hashCode();
		jstring getType();
		void roll(jint arg0, jint arg1);
		jint getActualMinimum(jint arg0);
		jint getActualMaximum(jint arg0);
		void setGregorianChange(__jni_impl::java::util::Date arg0);
		QAndroidJniObject getGregorianChange();
		jboolean isLeapYear(jint arg0);
		jboolean isEquivalentTo(__jni_impl::android::icu::util::Calendar arg0);
	};
} // namespace __jni_impl::android::icu::util

#include "TimeZone.hpp"
#include "../../../java/util/Locale.hpp"
#include "ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "Calendar.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint GregorianCalendar::AD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.GregorianCalendar",
			"AD"
		);
	}
	jint GregorianCalendar::BC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.GregorianCalendar",
			"BC"
		);
	}
	
	// Constructors
	void GregorianCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void GregorianCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void GregorianCalendar::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void GregorianCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4);
	}
	void GregorianCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void GregorianCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"()V");
	}
	void GregorianCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object());
	}
	void GregorianCalendar::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	void GregorianCalendar::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.GregorianCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jint GregorianCalendar::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring GregorianCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void GregorianCalendar::roll(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
	jint GregorianCalendar::getActualMinimum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMinimum",
			"(I)I",
			arg0
		);
	}
	jint GregorianCalendar::getActualMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	void GregorianCalendar::setGregorianChange(__jni_impl::java::util::Date arg0)
	{
		__thiz.callMethod<void>(
			"setGregorianChange",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject GregorianCalendar::getGregorianChange()
	{
		return __thiz.callObjectMethod(
			"getGregorianChange",
			"()Ljava/util/Date;"
		);
	}
	jboolean GregorianCalendar::isLeapYear(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isLeapYear",
			"(I)Z",
			arg0
		);
	}
	jboolean GregorianCalendar::isEquivalentTo(__jni_impl::android::icu::util::Calendar arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isEquivalentTo",
			"(Landroid/icu/util/Calendar;)Z",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class GregorianCalendar : public __jni_impl::android::icu::util::GregorianCalendar
	{
	public:
		GregorianCalendar(QAndroidJniObject obj) { __thiz = obj; }
		GregorianCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GregorianCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		GregorianCalendar(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
		GregorianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		GregorianCalendar()
		{
			__constructor();
		}
		GregorianCalendar(__jni_impl::android::icu::util::TimeZone arg0)
		{
			__constructor(
				arg0);
		}
		GregorianCalendar(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		GregorianCalendar(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_GREGORIANCALENDAR

