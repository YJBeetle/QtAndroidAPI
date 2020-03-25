#pragma once

#ifndef ANDROID_ICU_TEXT_PLURALFORMAT
#define ANDROID_ICU_TEXT_PLURALFORMAT

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "UFormat.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::text
{
	class PluralRules_PluralType;
}
namespace __jni_impl::android::icu::text
{
	class PluralRules;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::lang
{
	class Number;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::android::icu::text
{
	class NumberFormat;
}

namespace __jni_impl::android::icu::text
{
	class PluralFormat : public __jni_impl::android::icu::text::UFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::icu::util::ULocale arg0, jstring arg1);
		void __constructor(jstring arg0);
		void __constructor(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1);
		void __constructor(__jni_impl::android::icu::text::PluralRules arg0, jstring arg1);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules arg1, jstring arg2);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1, jstring arg2);
		void __constructor();
		void __constructor(__jni_impl::android::icu::util::ULocale arg0);
		void __constructor(__jni_impl::java::util::Locale arg0);
		void __constructor(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::PluralRules arg1);
		void __constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules arg1);
		void __constructor(__jni_impl::android::icu::text::PluralRules arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jboolean equals(__jni_impl::android::icu::text::PluralFormat arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject format(jdouble arg0);
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		void applyPattern(jstring arg0);
		QAndroidJniObject toPattern();
		QAndroidJniObject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		void setNumberFormat(__jni_impl::android::icu::text::NumberFormat arg0);
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "PluralRules_PluralType.hpp"
#include "PluralRules.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/lang/Number.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "NumberFormat.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void PluralFormat::__constructor(__jni_impl::android::icu::util::ULocale arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void PluralFormat::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Ljava/lang/String;)V",
			arg0);
	}
	void PluralFormat::__constructor(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules$PluralType;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void PluralFormat::__constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void PluralFormat::__constructor(__jni_impl::android::icu::text::PluralRules arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/text/PluralRules;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1);
	}
	void PluralFormat::__constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void PluralFormat::__constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules$PluralType;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2);
	}
	void PluralFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"()V");
	}
	void PluralFormat::__constructor(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object());
	}
	void PluralFormat::__constructor(__jni_impl::java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object());
	}
	void PluralFormat::__constructor(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::PluralRules arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Ljava/util/Locale;Landroid/icu/text/PluralRules;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void PluralFormat::__constructor(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/PluralRules;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	void PluralFormat::__constructor(__jni_impl::android::icu::text::PluralRules arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.PluralFormat",
			"(Landroid/icu/text/PluralRules;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean PluralFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jboolean PluralFormat::equals(__jni_impl::android::icu::text::PluralFormat arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Landroid/icu/text/PluralFormat;)Z",
			arg0.__jniObject().object());
	}
	QAndroidJniObject PluralFormat::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint PluralFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject PluralFormat::format(jdouble arg0)
	{
		return __thiz.callObjectMethod(
			"format",
			"(D)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject PluralFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject PluralFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
			arg1.__jniObject().object());
	}
	void PluralFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0);
	}
	QAndroidJniObject PluralFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PluralFormat::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object());
	}
	void PluralFormat::setNumberFormat(__jni_impl::android::icu::text::NumberFormat arg0)
	{
		__thiz.callMethod<void>(
			"setNumberFormat",
			"(Landroid/icu/text/NumberFormat;)V",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class PluralFormat : public __jni_impl::android::icu::text::PluralFormat
	{
	public:
		PluralFormat(QAndroidJniObject obj) { __thiz = obj; }
		PluralFormat(__jni_impl::android::icu::util::ULocale arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PluralFormat(jstring arg0)
		{
			__constructor(
				arg0);
		}
		PluralFormat(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PluralFormat(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PluralFormat(__jni_impl::android::icu::text::PluralRules arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PluralFormat(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		PluralFormat(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules_PluralType arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		PluralFormat()
		{
			__constructor();
		}
		PluralFormat(__jni_impl::android::icu::util::ULocale arg0)
		{
			__constructor(
				arg0);
		}
		PluralFormat(__jni_impl::java::util::Locale arg0)
		{
			__constructor(
				arg0);
		}
		PluralFormat(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::PluralRules arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PluralFormat(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::PluralRules arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		PluralFormat(__jni_impl::android::icu::text::PluralRules arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_PLURALFORMAT

