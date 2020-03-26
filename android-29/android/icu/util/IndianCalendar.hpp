#pragma once

#ifndef ANDROID_ICU_UTIL_INDIANCALENDAR
#define ANDROID_ICU_UTIL_INDIANCALENDAR

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
	class IndianCalendar : public __jni_impl::android::icu::util::Calendar
	{
	public:
		// Fields
		static jint AGRAHAYANA();
		static jint ASADHA();
		static jint ASVINA();
		static jint BHADRA();
		static jint CHAITRA();
		static jint IE();
		static jint JYAISTHA();
		static jint KARTIKA();
		static jint MAGHA();
		static jint PAUSA();
		static jint PHALGUNA();
		static jint SRAVANA();
		static jint VAISAKHA();
		
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
		jstring getType();
	};
} // namespace __jni_impl::android::icu::util

#include "TimeZone.hpp"
#include "../../../java/util/Locale.hpp"
#include "ULocale.hpp"
#include "../../../java/util/Date.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint IndianCalendar::AGRAHAYANA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"AGRAHAYANA"
		);
	}
	jint IndianCalendar::ASADHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"ASADHA"
		);
	}
	jint IndianCalendar::ASVINA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"ASVINA"
		);
	}
	jint IndianCalendar::BHADRA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"BHADRA"
		);
	}
	jint IndianCalendar::CHAITRA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"CHAITRA"
		);
	}
	jint IndianCalendar::IE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"IE"
		);
	}
	jint IndianCalendar::JYAISTHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"JYAISTHA"
		);
	}
	jint IndianCalendar::KARTIKA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"KARTIKA"
		);
	}
	jint IndianCalendar::MAGHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"MAGHA"
		);
	}
	jint IndianCalendar::PAUSA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"PAUSA"
		);
	}
	jint IndianCalendar::PHALGUNA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"PHALGUNA"
		);
	}
	jint IndianCalendar::SRAVANA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"SRAVANA"
		);
	}
	jint IndianCalendar::VAISAKHA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IndianCalendar",
			"VAISAKHA"
		);
	}
	
	// Constructors
	void IndianCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void IndianCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void IndianCalendar::__constructor(__jni_impl::java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object());
	}
	void IndianCalendar::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2);
	}
	void IndianCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5);
	}
	void IndianCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"()V");
	}
	void IndianCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object());
	}
	void IndianCalendar::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	void IndianCalendar::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IndianCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring IndianCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class IndianCalendar : public __jni_impl::android::icu::util::IndianCalendar
	{
	public:
		IndianCalendar(QAndroidJniObject obj) { __thiz = obj; }
		IndianCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		IndianCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		IndianCalendar(__jni_impl::java::util::Date arg0)
		{
			__constructor(
				arg0);
		}
		IndianCalendar(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		IndianCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		IndianCalendar()
		{
			__constructor();
		}
		IndianCalendar(__jni_impl::android::icu::util::TimeZone arg0)
		{
			__constructor(
				arg0);
		}
		IndianCalendar(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		IndianCalendar(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_INDIANCALENDAR

