#pragma once

#include "../../../__JniBaseClass.hpp"
#include "Calendar.hpp"
#include "GregorianCalendar.hpp"

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
	class JapaneseCalendar : public __jni_impl::android::icu::util::GregorianCalendar
	{
	public:
		// Fields
		static jint CURRENT_ERA();
		static jint HEISEI();
		static jint MEIJI();
		static jint SHOWA();
		static jint TAISHO();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		void __constructor(__jni_impl::java::util::Date arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(jint arg0, jint arg1, jint arg2);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3);
		void __constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5);
		
		// Methods
		jint getActualMaximum(jint arg0);
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
	jint JapaneseCalendar::CURRENT_ERA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.JapaneseCalendar",
			"CURRENT_ERA"
		);
	}
	jint JapaneseCalendar::HEISEI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.JapaneseCalendar",
			"HEISEI"
		);
	}
	jint JapaneseCalendar::MEIJI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.JapaneseCalendar",
			"MEIJI"
		);
	}
	jint JapaneseCalendar::SHOWA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.JapaneseCalendar",
			"SHOWA"
		);
	}
	jint JapaneseCalendar::TAISHO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.icu.util.JapaneseCalendar",
			"TAISHO"
		);
	}
	
	// Constructors
	void JapaneseCalendar::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.JapaneseCalendar",
			"()V"
		);
	}
	void JapaneseCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.JapaneseCalendar",
			"(Landroid/icu/util/TimeZone;)V",
			arg0.__jniObject().object()
		);
	}
	void JapaneseCalendar::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.JapaneseCalendar",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	void JapaneseCalendar::__constructor(__jni_impl::java::util::Date arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.JapaneseCalendar",
			"(Ljava/util/Date;)V",
			arg0.__jniObject().object()
		);
	}
	void JapaneseCalendar::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.JapaneseCalendar",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void JapaneseCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.JapaneseCalendar",
			"(Landroid/icu/util/TimeZone;Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void JapaneseCalendar::__constructor(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.JapaneseCalendar",
			"(Landroid/icu/util/TimeZone;Ljava/util/Locale;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void JapaneseCalendar::__constructor(jint arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.JapaneseCalendar",
			"(III)V",
			arg0,
			arg1,
			arg2
		);
	}
	void JapaneseCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.JapaneseCalendar",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void JapaneseCalendar::__constructor(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		__thiz = QAndroidJniObject(
			"android.icu.util.JapaneseCalendar",
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
	jint JapaneseCalendar::getActualMaximum(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getActualMaximum",
			"(I)I",
			arg0
		);
	}
	jstring JapaneseCalendar::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::icu::util

namespace android::icu::util
{
	class JapaneseCalendar : public __jni_impl::android::icu::util::JapaneseCalendar
	{
	public:
		JapaneseCalendar(QAndroidJniObject obj) { __thiz = obj; }
		JapaneseCalendar()
		{
			__constructor();
		}
		JapaneseCalendar(__jni_impl::android::icu::util::TimeZone arg0)
		{
			__constructor(
				arg0);
		}
		JapaneseCalendar(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
		JapaneseCalendar(__jni_impl::java::util::Date arg0)
		{
			__constructor(
				arg0);
		}
		JapaneseCalendar(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		JapaneseCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		JapaneseCalendar(__jni_impl::android::icu::util::TimeZone arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		JapaneseCalendar(jint arg0, jint arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		JapaneseCalendar(jint arg0, jint arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		JapaneseCalendar(jint arg0, jint arg1, jint arg2, jint arg3, jint arg4, jint arg5)
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

