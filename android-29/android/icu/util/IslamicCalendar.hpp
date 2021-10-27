#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Calendar.hpp"

namespace __jni_impl::android::icu::util
{
	class IslamicCalendar_CalculationType;
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
namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::android::icu::util
{
	class IslamicCalendar : public __jni_impl::android::icu::util::Calendar
	{
	public:
		// Fields
		static jint DHU_AL_HIJJAH();
		static jint DHU_AL_QIDAH();
		static jint JUMADA_1();
		static jint JUMADA_2();
		static jint MUHARRAM();
		static jint RABI_1();
		static jint RABI_2();
		static jint RAJAB();
		static jint RAMADAN();
		static jint SAFAR();
		static jint SHABAN();
		static jint SHAWWAL();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		void __constructor(__jni_impl::java::util::Date arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		QAndroidJniObject getCalculationType();
		jstring getType();
		void setCalculationType(__jni_impl::android::icu::util::IslamicCalendar_CalculationType arg0);
	};
} // namespace __jni_impl::android::icu::util

#include "IslamicCalendar_CalculationType.hpp"
#include "TimeZone.hpp"
#include "ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint IslamicCalendar::DHU_AL_HIJJAH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"DHU_AL_HIJJAH"
		);
	}
	jint IslamicCalendar::DHU_AL_QIDAH()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"DHU_AL_QIDAH"
		);
	}
	jint IslamicCalendar::JUMADA_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"JUMADA_1"
		);
	}
	jint IslamicCalendar::JUMADA_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"JUMADA_2"
		);
	}
	jint IslamicCalendar::MUHARRAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"MUHARRAM"
		);
	}
	jint IslamicCalendar::RABI_1()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RABI_1"
		);
	}
	jint IslamicCalendar::RABI_2()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RABI_2"
		);
	}
	jint IslamicCalendar::RAJAB()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RAJAB"
		);
	}
	jint IslamicCalendar::RAMADAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"RAMADAN"
		);
	}
	jint IslamicCalendar::SAFAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"SAFAR"
		);
	}
	jint IslamicCalendar::SHABAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"SHABAN"
		);
	}
	jint IslamicCalendar::SHAWWAL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.IslamicCalendar",
			"SHAWWAL"
		);
	}
	
	// Constructors
	void IslamicCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"()V"
		);
	}
	void IslamicCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	void IslamicCalendar::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	void IslamicCalendar::__constructor(__jni_impl::java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void IslamicCalendar::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void IslamicCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void IslamicCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void IslamicCalendar::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void IslamicCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.IslamicCalendar",
			"(IIIIII)V",
			arg0,
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	
	// Methods
	QAndroidJniObject IslamicCalendar::getCalculationType()
	{
		return __thiz.callObjectMethod(
			"getCalculationType",
			"()Landroid/icu/util/IslamicCalendar$CalculationType;"
		);
	}
	jstring IslamicCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void IslamicCalendar::setCalculationType(__jni_impl::android::icu::util::IslamicCalendar_CalculationType arg0)
	{
		__thiz.callMethod<void>(
			"setCalculationType",
			"(Landroid/icu/util/IslamicCalendar$CalculationType;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class IslamicCalendar : public __jni_impl::android::icu::util::IslamicCalendar
	{
	public:
		IslamicCalendar(QAndroidJniObject obj) { __thiz = obj; }
		IslamicCalendar()
		{
			__constructor();
		}
		IslamicCalendar(__jni_impl::android::icu::util::TimeZone arg0)
		{
			__constructor(
				arg0);
		}
		IslamicCalendar(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
		IslamicCalendar(__jni_impl::java::util::Date arg0)
		{
			__constructor(
				arg0);
		}
		IslamicCalendar(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		IslamicCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		IslamicCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		IslamicCalendar(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		IslamicCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3,
				arg4,
				arg5);
		}
	};
} // namespace android::icu::util

