#pragma once

#ifndef ANDROID_ICU_TEXT_COMPACTDECIMALFORMAT
#define ANDROID_ICU_TEXT_COMPACTDECIMALFORMAT

#include "DecimalFormat.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::icu::text
{
	class CompactDecimalFormat_CompactStyle;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::java::lang
{
	class Number;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::android::icu::util
{
	class CurrencyAmount;
}

namespace __jni_impl::android::icu::text
{
	class CompactDecimalFormat : public __jni_impl::android::icu::text::DecimalFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::CompactDecimalFormat_CompactStyle arg1);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::CompactDecimalFormat_CompactStyle arg1);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parseCurrency(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "CompactDecimalFormat_CompactStyle.hpp"
#include "../../../java/util/Locale.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../util/CurrencyAmount.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void CompactDecimalFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.CompactDecimalFormat",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject CompactDecimalFormat::getInstance(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::CompactDecimalFormat_CompactStyle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/CompactDecimalFormat$CompactStyle;)Landroid/icu/text/CompactDecimalFormat;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject CompactDecimalFormat::getInstance(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::CompactDecimalFormat_CompactStyle arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.CompactDecimalFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/CompactDecimalFormat$CompactStyle;)Landroid/icu/text/CompactDecimalFormat;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject CompactDecimalFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
			arg1.__jniObject().object());
	}
	QAndroidJniObject CompactDecimalFormat::parseCurrency(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseCurrency",
			"(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Landroid/icu/util/CurrencyAmount;",
			arg0,
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class CompactDecimalFormat : public __jni_impl::android::icu::text::CompactDecimalFormat
	{
	public:
		CompactDecimalFormat(QAndroidJniObject obj) { __thiz = obj; }
		CompactDecimalFormat()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_COMPACTDECIMALFORMAT

