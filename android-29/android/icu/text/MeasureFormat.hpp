#pragma once

#ifndef ANDROID_ICU_TEXT_MEASUREFORMAT
#define ANDROID_ICU_TEXT_MEASUREFORMAT

#include "../../../__JniBaseClass.hpp"
#include "../../../java/text/Format.hpp"
#include "UFormat.hpp"

namespace __jni_impl::android::icu::util
{
	class ULocale;
}
namespace __jni_impl::android::icu::text
{
	class MeasureFormat_FormatWidth;
}
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::util
{
	class Locale;
}
namespace __jni_impl::android::icu::text
{
	class NumberFormat;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::android::icu::util
{
	class Measure;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}
namespace __jni_impl::android::icu::util
{
	class MeasureUnit;
}

namespace __jni_impl::android::icu::text
{
	class MeasureFormat : public __jni_impl::android::icu::text::UFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::MeasureFormat_FormatWidth arg1);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::MeasureFormat_FormatWidth arg1);
		static QAndroidJniObject getInstance(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::MeasureFormat_FormatWidth arg1, __jni_impl::android::icu::text::NumberFormat arg2);
		static QAndroidJniObject getInstance(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::MeasureFormat_FormatWidth arg1, __jni_impl::android::icu::text::NumberFormat arg2);
		QAndroidJniObject getLocale();
		QAndroidJniObject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject getNumberFormat();
		QAndroidJniObject formatMeasures(__jni_impl::java::lang::StringBuilder arg0, __jni_impl::java::text::FieldPosition arg1, jarray arg2);
		jstring formatMeasures(jarray arg0);
		QAndroidJniObject formatMeasurePerUnit(__jni_impl::android::icu::util::Measure arg0, __jni_impl::android::icu::util::MeasureUnit arg1, __jni_impl::java::lang::StringBuilder arg2, __jni_impl::java::text::FieldPosition arg3);
		jstring getUnitDisplayName(__jni_impl::android::icu::util::MeasureUnit arg0);
		static QAndroidJniObject getCurrencyFormat();
		static QAndroidJniObject getCurrencyFormat(__jni_impl::java::util::Locale arg0);
		static QAndroidJniObject getCurrencyFormat(__jni_impl::android::icu::util::ULocale arg0);
		QAndroidJniObject getWidth();
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "MeasureFormat_FormatWidth.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/util/Locale.hpp"
#include "NumberFormat.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../util/Measure.hpp"
#include "../../../java/lang/StringBuilder.hpp"
#include "../util/MeasureUnit.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void MeasureFormat::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MeasureFormat",
			"(V)V");
	}
	
	// Methods
	jboolean MeasureFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MeasureFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	QAndroidJniObject MeasureFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MeasureFormat::getInstance(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::MeasureFormat_FormatWidth arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/MeasureFormat$FormatWidth;)Landroid/icu/text/MeasureFormat;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MeasureFormat::getInstance(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::MeasureFormat_FormatWidth arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/MeasureFormat$FormatWidth;)Landroid/icu/text/MeasureFormat;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MeasureFormat::getInstance(__jni_impl::java::util::Locale arg0, __jni_impl::android::icu::text::MeasureFormat_FormatWidth arg1, __jni_impl::android::icu::text::NumberFormat arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getInstance",
			"(Ljava/util/Locale;Landroid/icu/text/MeasureFormat$FormatWidth;Landroid/icu/text/NumberFormat;)Landroid/icu/text/MeasureFormat;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MeasureFormat::getInstance(__jni_impl::android::icu::util::ULocale arg0, __jni_impl::android::icu::text::MeasureFormat_FormatWidth arg1, __jni_impl::android::icu::text::NumberFormat arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getInstance",
			"(Landroid/icu/util/ULocale;Landroid/icu/text/MeasureFormat$FormatWidth;Landroid/icu/text/NumberFormat;)Landroid/icu/text/MeasureFormat;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MeasureFormat::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	QAndroidJniObject MeasureFormat::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Landroid/icu/util/Measure;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MeasureFormat::getNumberFormat()
	{
		return __thiz.callObjectMethod(
			"getNumberFormat",
			"()Landroid/icu/text/NumberFormat;"
		);
	}
	QAndroidJniObject MeasureFormat::formatMeasures(__jni_impl::java::lang::StringBuilder arg0, __jni_impl::java::text::FieldPosition arg1, jarray arg2)
	{
		return __thiz.callObjectMethod(
			"formatMeasures",
			"(Ljava/lang/StringBuilder;Ljava/text/FieldPosition;[Landroid/icu/util/Measure;)Ljava/lang/StringBuilder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	jstring MeasureFormat::formatMeasures(jarray arg0)
	{
		return __thiz.callObjectMethod(
			"formatMeasures",
			"([Landroid/icu/util/Measure;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	QAndroidJniObject MeasureFormat::formatMeasurePerUnit(__jni_impl::android::icu::util::Measure arg0, __jni_impl::android::icu::util::MeasureUnit arg1, __jni_impl::java::lang::StringBuilder arg2, __jni_impl::java::text::FieldPosition arg3)
	{
		return __thiz.callObjectMethod(
			"formatMeasurePerUnit",
			"(Landroid/icu/util/Measure;Landroid/icu/util/MeasureUnit;Ljava/lang/StringBuilder;Ljava/text/FieldPosition;)Ljava/lang/StringBuilder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object()
		);
	}
	jstring MeasureFormat::getUnitDisplayName(__jni_impl::android::icu::util::MeasureUnit arg0)
	{
		return __thiz.callObjectMethod(
			"getUnitDisplayName",
			"(Landroid/icu/util/MeasureUnit;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject MeasureFormat::getCurrencyFormat()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getCurrencyFormat",
			"()Landroid/icu/text/MeasureFormat;"
		);
	}
	QAndroidJniObject MeasureFormat::getCurrencyFormat(__jni_impl::java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getCurrencyFormat",
			"(Ljava/util/Locale;)Landroid/icu/text/MeasureFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MeasureFormat::getCurrencyFormat(__jni_impl::android::icu::util::ULocale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MeasureFormat",
			"getCurrencyFormat",
			"(Landroid/icu/util/ULocale;)Landroid/icu/text/MeasureFormat;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject MeasureFormat::getWidth()
	{
		return __thiz.callObjectMethod(
			"getWidth",
			"()Landroid/icu/text/MeasureFormat$FormatWidth;"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class MeasureFormat : public __jni_impl::android::icu::text::MeasureFormat
	{
	public:
		MeasureFormat(QAndroidJniObject obj) { __thiz = obj; }
		MeasureFormat()
		{
			__constructor();
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_MEASUREFORMAT

