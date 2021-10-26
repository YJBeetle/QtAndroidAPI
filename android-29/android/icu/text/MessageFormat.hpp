#pragma once

#ifndef ANDROID_ICU_TEXT_MESSAGEFORMAT
#define ANDROID_ICU_TEXT_MESSAGEFORMAT

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
namespace __jni_impl::java::lang
{
	class StringBuffer;
}
namespace __jni_impl::java::text
{
	class FieldPosition;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::java::text
{
	class Format;
}
namespace __jni_impl::android::icu::text
{
	class MessagePattern_ApostropheMode;
}

namespace __jni_impl::android::icu::text
{
	class MessageFormat : public __jni_impl::android::icu::text::UFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1);
		void __constructor(jstring arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(const QString &arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		static jstring format(jstring arg0, __jni_impl::__JniBaseClass arg1);
		static jstring format(const QString &arg0, __jni_impl::__JniBaseClass arg1);
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		static jstring format(jstring arg0, jobjectArray arg1);
		static jstring format(const QString &arg0, jobjectArray arg1);
		QAndroidJniObject format(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jobjectArray arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		jobjectArray parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		jobjectArray parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		jobjectArray parse(jstring arg0);
		jobjectArray parse(const QString &arg0);
		QAndroidJniObject getLocale();
		jarray getFormats();
		void setLocale(__jni_impl::java::util::Locale arg0);
		void setLocale(__jni_impl::android::icu::util::ULocale arg0);
		void setFormat(jint arg0, __jni_impl::java::text::Format arg1);
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		void applyPattern(jstring arg0, __jni_impl::android::icu::text::MessagePattern_ApostropheMode arg1);
		void applyPattern(const QString &arg0, __jni_impl::android::icu::text::MessagePattern_ApostropheMode arg1);
		jstring toPattern();
		jobject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		jobject parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		QAndroidJniObject getULocale();
		void setFormatsByArgumentIndex(jarray arg0);
		void setFormatsByArgumentName(__jni_impl::__JniBaseClass arg0);
		void setFormats(jarray arg0);
		void setFormatByArgumentIndex(jint arg0, __jni_impl::java::text::Format arg1);
		void setFormatByArgumentName(jstring arg0, __jni_impl::java::text::Format arg1);
		void setFormatByArgumentName(const QString &arg0, __jni_impl::java::text::Format arg1);
		jarray getFormatsByArgumentIndex();
		QAndroidJniObject getArgumentNames();
		QAndroidJniObject getFormatByArgumentName(jstring arg0);
		QAndroidJniObject getFormatByArgumentName(const QString &arg0);
		jboolean usesNamedArguments();
		QAndroidJniObject parseToMap(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parseToMap(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parseToMap(jstring arg0);
		QAndroidJniObject parseToMap(const QString &arg0);
		static jstring autoQuoteApostrophe(jstring arg0);
		static jstring autoQuoteApostrophe(const QString &arg0);
		QAndroidJniObject getApostropheMode();
	};
} // namespace __jni_impl::android::icu::text

#include "../util/ULocale.hpp"
#include "../../../java/util/Locale.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "../../../java/text/Format.hpp"
#include "MessagePattern_ApostropheMode.hpp"

namespace __jni_impl::android::icu::text
{
	// Fields
	
	// Constructors
	void MessageFormat::__constructor(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MessageFormat::__constructor(const QString &arg0, __jni_impl::android::icu::util::ULocale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;Landroid/icu/util/ULocale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MessageFormat::__constructor(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MessageFormat::__constructor(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	void MessageFormat::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MessageFormat::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.icu.text.MessageFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jboolean MessageFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint MessageFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject MessageFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jstring MessageFormat::format(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"format",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring MessageFormat::format(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"format",
			"(Ljava/lang/String;Ljava/util/Map;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	QAndroidJniObject MessageFormat::format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jstring MessageFormat::format(jstring arg0, jobjectArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring MessageFormat::format(const QString &arg0, jobjectArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		).object<jstring>();
	}
	QAndroidJniObject MessageFormat::format(__jni_impl::__JniBaseClass arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(Ljava/util/Map;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject MessageFormat::format(jobjectArray arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"([Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jobjectArray MessageFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)[Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobjectArray>();
	}
	jobjectArray MessageFormat::parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)[Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jobjectArray>();
	}
	jobjectArray MessageFormat::parse(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)[Ljava/lang/Object;",
			arg0
		).object<jobjectArray>();
	}
	jobjectArray MessageFormat::parse(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;)[Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobjectArray>();
	}
	QAndroidJniObject MessageFormat::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/util/Locale;"
		);
	}
	jarray MessageFormat::getFormats()
	{
		return __thiz.callObjectMethod(
			"getFormats",
			"()[Ljava/text/Format;"
		).object<jarray>();
	}
	void MessageFormat::setLocale(__jni_impl::java::util::Locale arg0)
	{
		__thiz.callMethod<void>(
			"setLocale",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	void MessageFormat::setLocale(__jni_impl::android::icu::util::ULocale arg0)
	{
		__thiz.callMethod<void>(
			"setLocale",
			"(Landroid/icu/util/ULocale;)V",
			arg0.__jniObject().object()
		);
	}
	void MessageFormat::setFormat(jint arg0, __jni_impl::java::text::Format arg1)
	{
		__thiz.callMethod<void>(
			"setFormat",
			"(ILjava/text/Format;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MessageFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MessageFormat::applyPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MessageFormat::applyPattern(jstring arg0, __jni_impl::android::icu::text::MessagePattern_ApostropheMode arg1)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;Landroid/icu/text/MessagePattern$ApostropheMode;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MessageFormat::applyPattern(const QString &arg0, __jni_impl::android::icu::text::MessagePattern_ApostropheMode arg1)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;Landroid/icu/text/MessagePattern$ApostropheMode;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jstring MessageFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jobject MessageFormat::parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0,
			arg1.__jniObject().object()
		).object<jobject>();
	}
	jobject MessageFormat::parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		).object<jobject>();
	}
	QAndroidJniObject MessageFormat::formatToCharacterIterator(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0
		);
	}
	QAndroidJniObject MessageFormat::getULocale()
	{
		return __thiz.callObjectMethod(
			"getULocale",
			"()Landroid/icu/util/ULocale;"
		);
	}
	void MessageFormat::setFormatsByArgumentIndex(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setFormatsByArgumentIndex",
			"([Ljava/text/Format;)V",
			arg0
		);
	}
	void MessageFormat::setFormatsByArgumentName(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setFormatsByArgumentName",
			"(Ljava/util/Map;)V",
			arg0.__jniObject().object()
		);
	}
	void MessageFormat::setFormats(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setFormats",
			"([Ljava/text/Format;)V",
			arg0
		);
	}
	void MessageFormat::setFormatByArgumentIndex(jint arg0, __jni_impl::java::text::Format arg1)
	{
		__thiz.callMethod<void>(
			"setFormatByArgumentIndex",
			"(ILjava/text/Format;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MessageFormat::setFormatByArgumentName(jstring arg0, __jni_impl::java::text::Format arg1)
	{
		__thiz.callMethod<void>(
			"setFormatByArgumentName",
			"(Ljava/lang/String;Ljava/text/Format;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MessageFormat::setFormatByArgumentName(const QString &arg0, __jni_impl::java::text::Format arg1)
	{
		__thiz.callMethod<void>(
			"setFormatByArgumentName",
			"(Ljava/lang/String;Ljava/text/Format;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jarray MessageFormat::getFormatsByArgumentIndex()
	{
		return __thiz.callObjectMethod(
			"getFormatsByArgumentIndex",
			"()[Ljava/text/Format;"
		).object<jarray>();
	}
	QAndroidJniObject MessageFormat::getArgumentNames()
	{
		return __thiz.callObjectMethod(
			"getArgumentNames",
			"()Ljava/util/Set;"
		);
	}
	QAndroidJniObject MessageFormat::getFormatByArgumentName(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getFormatByArgumentName",
			"(Ljava/lang/String;)Ljava/text/Format;",
			arg0
		);
	}
	QAndroidJniObject MessageFormat::getFormatByArgumentName(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getFormatByArgumentName",
			"(Ljava/lang/String;)Ljava/text/Format;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean MessageFormat::usesNamedArguments()
	{
		return __thiz.callMethod<jboolean>(
			"usesNamedArguments",
			"()Z"
		);
	}
	QAndroidJniObject MessageFormat::parseToMap(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseToMap",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Map;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MessageFormat::parseToMap(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parseToMap",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/util/Map;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject MessageFormat::parseToMap(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"parseToMap",
			"(Ljava/lang/String;)Ljava/util/Map;",
			arg0
		);
	}
	QAndroidJniObject MessageFormat::parseToMap(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"parseToMap",
			"(Ljava/lang/String;)Ljava/util/Map;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring MessageFormat::autoQuoteApostrophe(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"autoQuoteApostrophe",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring MessageFormat::autoQuoteApostrophe(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.MessageFormat",
			"autoQuoteApostrophe",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	QAndroidJniObject MessageFormat::getApostropheMode()
	{
		return __thiz.callObjectMethod(
			"getApostropheMode",
			"()Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
} // namespace __jni_impl::android::icu::text

namespace android::icu::text
{
	class MessageFormat : public __jni_impl::android::icu::text::MessageFormat
	{
	public:
		MessageFormat(QAndroidJniObject obj) { __thiz = obj; }
		MessageFormat(jstring arg0, __jni_impl::android::icu::util::ULocale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		MessageFormat(jstring arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		MessageFormat(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::icu::text

#endif // ANDROID_ICU_TEXT_MESSAGEFORMAT

