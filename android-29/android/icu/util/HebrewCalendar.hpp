#pragma once

#ifndef ANDROID_ICU_UTIL_HEBREWCALENDAR
#define ANDROID_ICU_UTIL_HEBREWCALENDAR

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
	class HebrewCalendar : public __jni_impl::android::icu::util::Calendar
	{
	public:
		// Fields
		static jint ADAR();
		static jint ADAR_1();
		static jint AV();
		static jint ELUL();
		static jint HESHVAN();
		static jint IYAR();
		static jint KISLEV();
		static jint NISAN();
		static jint SHEVAT();
		static jint SIVAN();
		static jint TAMUZ();
		static jint TEVET();
		static jint TISHRI();
		
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
		void add(jint arg0, jint arg1);
		jstring getType();
		void roll(jint arg0, jint arg1);
	};
} // namespace __jni_impl::android::icu::util

#include "TimeZone.hpp"
#include "../../../java/util/Locale.hpp"
#include "ULocale.hpp"
#include "../../../java/util/Date.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint HebrewCalendar::ADAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"ADAR"
		);
	}
	jint HebrewCalendar::ADAR_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"ADAR_1"
		);
	}
	jint HebrewCalendar::AV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"AV"
		);
	}
	jint HebrewCalendar::ELUL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"ELUL"
		);
	}
	jint HebrewCalendar::HESHVAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"HESHVAN"
		);
	}
	jint HebrewCalendar::IYAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"IYAR"
		);
	}
	jint HebrewCalendar::KISLEV()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"KISLEV"
		);
	}
	jint HebrewCalendar::NISAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"NISAN"
		);
	}
	jint HebrewCalendar::SHEVAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"SHEVAT"
		);
	}
	jint HebrewCalendar::SIVAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"SIVAN"
		);
	}
	jint HebrewCalendar::TAMUZ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"TAMUZ"
		);
	}
	jint HebrewCalendar::TEVET()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"TEVET"
		);
	}
	jint HebrewCalendar::TISHRI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.HebrewCalendar",
			"TISHRI"
		);
	}
	
	// Constructors
	void HebrewCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void HebrewCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void HebrewCalendar::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.HebrewCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void HebrewCalendar::__constructor(__jni_impl::java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.HebrewCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void HebrewCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.HebrewCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void HebrewCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.HebrewCalendar",
			"()V"
		);
	}
	void HebrewCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	void HebrewCalendar::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.HebrewCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void HebrewCalendar::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.HebrewCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	void HebrewCalendar::add(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"add",
			"(II)V",
			arg0,
			arg1
		);
	}
	jstring HebrewCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void HebrewCalendar::roll(jint arg0, jint arg1)
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
	class HebrewCalendar : public __jni_impl::android::icu::util::HebrewCalendar
	{
	public:
		HebrewCalendar(QAndroidJniObject obj) { __thiz = obj; }
		HebrewCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		HebrewCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		HebrewCalendar(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		HebrewCalendar(__jni_impl::java::util::Date arg0)
		{
			__constructor(
				arg0);
		}
		HebrewCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
		HebrewCalendar()
		{
			__constructor();
		}
		HebrewCalendar(__jni_impl::android::icu::util::TimeZone arg0)
		{
			__constructor(
				arg0);
		}
		HebrewCalendar(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		HebrewCalendar(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::util

#endif // ANDROID_ICU_UTIL_HEBREWCALENDAR

