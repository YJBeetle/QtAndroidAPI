#pragma once

#ifndef JAVA_TEXT_MESSAGEFORMAT
#define JAVA_TEXT_MESSAGEFORMAT

#include "../../__JniBaseClass.hpp"
#include "Format.hpp"

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
namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}
namespace __jni_impl::java::text
{
	class Format;
}
namespace __jni_impl::java::lang
{
	class StringBuilder;
}

namespace __jni_impl::java::text
{
	class MessageFormat : public __jni_impl::java::text::Format
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jstring arg0, __jni_impl::java::util::Locale arg1);
		void __constructor(const QString &arg0, __jni_impl::java::util::Locale arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		QAndroidJniObject format(jobjectArray arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		static jstring format(jstring arg0, jobjectArray arg1);
		static jstring format(const QString &arg0, jobjectArray arg1);
		QAndroidJniObject format(jobject arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		jobjectArray parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		jobjectArray parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		jobjectArray parse(jstring arg0);
		jobjectArray parse(const QString &arg0);
		QAndroidJniObject getLocale();
		jarray getFormats();
		void setLocale(__jni_impl::java::util::Locale arg0);
		void setFormat(jint arg0, __jni_impl::java::text::Format arg1);
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		jstring toPattern();
		jobject parseObject(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		jobject parseObject(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject formatToCharacterIterator(jobject arg0);
		void setFormatsByArgumentIndex(jarray arg0);
		void setFormats(jarray arg0);
		void setFormatByArgumentIndex(jint arg0, __jni_impl::java::text::Format arg1);
		jarray getFormatsByArgumentIndex();
	};
} // namespace __jni_impl::java::text

#include "../util/Locale.hpp"
#include "../lang/StringBuffer.hpp"
#include "FieldPosition.hpp"
#include "../io/ObjectInputStream.hpp"
#include "ParsePosition.hpp"
#include "Format.hpp"
#include "../lang/StringBuilder.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void MessageFormat::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.MessageFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void MessageFormat::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.MessageFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void MessageFormat::__constructor(jstring arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.MessageFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void MessageFormat::__constructor(const QString &arg0, __jni_impl::java::util::Locale arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.MessageFormat",
			"(Ljava/lang/String;Ljava/util/Locale;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
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
	jstring MessageFormat::format(jstring arg0, jobjectArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.MessageFormat",
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring MessageFormat::format(const QString &arg0, jobjectArray arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.text.MessageFormat",
			"format",
			"(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
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
	void MessageFormat::setFormatsByArgumentIndex(jarray arg0)
	{
		__thiz.callMethod<void>(
			"setFormatsByArgumentIndex",
			"([Ljava/text/Format;)V",
			arg0
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
	jarray MessageFormat::getFormatsByArgumentIndex()
	{
		return __thiz.callObjectMethod(
			"getFormatsByArgumentIndex",
			"()[Ljava/text/Format;"
		).object<jarray>();
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class MessageFormat : public __jni_impl::java::text::MessageFormat
	{
	public:
		MessageFormat(QAndroidJniObject obj) { __thiz = obj; }
		MessageFormat(jstring arg0)
		{
			__constructor(
				arg0);
		}
		MessageFormat(jstring arg0, __jni_impl::java::util::Locale arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_MESSAGEFORMAT

