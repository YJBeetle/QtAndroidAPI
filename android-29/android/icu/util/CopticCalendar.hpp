#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Calendar.hpp"

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
	class CopticCalendar : public __jni_impl::android::icu::util::Calendar
	{
	public:
		// Fields
		static jint AMSHIR();
		static jint BABA();
		static jint BARAMHAT();
		static jint BARAMOUDA();
		static jint BASHANS();
		static jint EPEP();
		static jint HATOR();
		static jint KIAHK();
		static jint MESRA();
		static jint NASIE();
		static jint PAONA();
		static jint TOBA();
		static jint TOUT();
		
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
		jstring getType();
	};
} // namespace __jni_impl::android::icu::util

#include "TimeZone.hpp"
#include "ULocale.hpp"
#include "../../../java/util/Date.hpp"
#include "../../../java/util/Locale.hpp"

namespace __jni_impl::android::icu::util
{
	// Fields
	jint CopticCalendar::AMSHIR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"AMSHIR"
		);
	}
	jint CopticCalendar::BABA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BABA"
		);
	}
	jint CopticCalendar::BARAMHAT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BARAMHAT"
		);
	}
	jint CopticCalendar::BARAMOUDA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BARAMOUDA"
		);
	}
	jint CopticCalendar::BASHANS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"BASHANS"
		);
	}
	jint CopticCalendar::EPEP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"EPEP"
		);
	}
	jint CopticCalendar::HATOR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"HATOR"
		);
	}
	jint CopticCalendar::KIAHK()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"KIAHK"
		);
	}
	jint CopticCalendar::MESRA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"MESRA"
		);
	}
	jint CopticCalendar::NASIE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"NASIE"
		);
	}
	jint CopticCalendar::PAONA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"PAONA"
		);
	}
	jint CopticCalendar::TOBA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"TOBA"
		);
	}
	jint CopticCalendar::TOUT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.CopticCalendar",
			"TOUT"
		);
	}
	
	// Constructors
	void CopticCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CopticCalendar",
			"()V"
		);
	}
	void CopticCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	void CopticCalendar::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	void CopticCalendar::__constructor(__jni_impl::java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CopticCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void CopticCalendar::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CopticCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void CopticCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CopticCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CopticCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void CopticCalendar::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CopticCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void CopticCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.CopticCalendar",
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
	jstring CopticCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class CopticCalendar : public __jni_impl::android::icu::util::CopticCalendar
	{
	public:
		CopticCalendar(QAndroidJniObject obj) { __thiz = obj; }
		CopticCalendar()
		{
			__constructor();
		}
		CopticCalendar(__jni_impl::android::icu::util::TimeZone arg0)
		{
			__constructor(
				arg0);
		}
		CopticCalendar(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
		CopticCalendar(__jni_impl::java::util::Date arg0)
		{
			__constructor(
				arg0);
		}
		CopticCalendar(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		CopticCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CopticCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		CopticCalendar(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		CopticCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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

