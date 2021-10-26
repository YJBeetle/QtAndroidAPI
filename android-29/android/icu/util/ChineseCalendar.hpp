#pragma once

#ifndef ANDROID_ICU_UTIL_CHINESECALENDAR
#define ANDROID_ICU_UTIL_CHINESECALENDAR

#include "../../../__JniBaseClass.hpp"
#include "Calendar.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::util
{
	class TimeZone;
}
namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Date;
}
namespace __jni_impl::android::icu::text
{
	class DateFormat;
}

namespace __jni_impl::android::icu::util
{
	class ChineseCalendar : public __jni_impl::android::icu::util::Calendar
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0);
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor();
		void __constructor(__jni_impl::java::util::Date arg0);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4);
		
		// Methods
		void add(jint arg0, jint arg1);
		jstring getType();
		void roll(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::icu::util

#include "../../../java/util/Locale.hpp"
#include "TimeZone.hpp"
#include "ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../text/DateFormat.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	
	// Constructors
	void ChineseCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(IIIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6,
			arg7
		);
	}
	void ChineseCalendar::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void ChineseCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	void ChineseCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ChineseCalendar::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	void ChineseCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ChineseCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"()V"
		);
	}
	void ChineseCalendar::__constructor(__jni_impl::java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void ChineseCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ChineseCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(IIIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5,
			arg6
		);
	}
	void ChineseCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.ChineseCalendar",
			"(IIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	void ChineseCalendar::add(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	jstring ChineseCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ChineseCalendar::roll(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"roll",
			"(II)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class ChineseCalendar : public __jni_impl::android::icu::util::ChineseCalendar
	{
	public:
		ChineseCalendar(QAndroidJniObject obj) { __thiz = obj; }
		ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6, jint arg7)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6,
				arg7);
		}
		ChineseCalendar(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		ChineseCalendar(__jni_impl::android::icu::util::TimeZone arg0)
		{
			__constructor(
				arg0);
		}
		ChineseCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ChineseCalendar(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
		ChineseCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ChineseCalendar()
		{
			__constructor();
		}
		ChineseCalendar(__jni_impl::java::util::Date arg0)
		{
			__constructor(
				arg0);
		}
		ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5, jint arg6)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5,
				arg6);
		}
		ChineseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_CHINESECALENDAR

