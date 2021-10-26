#pragma once

#ifndef JAVA_TEXT_CHOICEFORMAT
#define JAVA_TEXT_CHOICEFORMAT

#include "../../__JniBaseClass.hpp"
#include "Format.hpp"
#include "NumberFormat.hpp"

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
namespace __jni_impl::java::lang
{
	class Number;
}
namespace __jni_impl::java::text
{
	class ParsePosition;
}

namespace __jni_impl::java::text
{
	class ChoiceFormat : public __jni_impl::java::text::NumberFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jdoubleArray arg0, jarray arg1);
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jobject clone();
		QAndroidJniObject format(jdouble arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jlong arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		static jdouble nextDouble(jdouble arg0, jboolean arg1);
		static jdouble nextDouble(jdouble arg0);
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		jobjectArray getFormats();
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		jstring toPattern();
		static jdouble previousDouble(jdouble arg0);
		jdoubleArray getLimits();
		void setChoices(jdoubleArray arg0, jarray arg1);
	};
} // namespace __jni_impl::java::text

#include "../lang/StringBuffer.hpp"
#include "FieldPosition.hpp"
#include "../io/ObjectInputStream.hpp"
#include "../lang/Number.hpp"
#include "ParsePosition.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
	void ChoiceFormat::__constructor(jdoubleArray arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.ChoiceFormat",
			"([D[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void ChoiceFormat::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.ChoiceFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ChoiceFormat::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.ChoiceFormat",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jboolean ChoiceFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint ChoiceFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jobject ChoiceFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	QAndroidJniObject ChoiceFormat::format(jdouble arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ChoiceFormat::format(jlong arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	jdouble ChoiceFormat::nextDouble(jdouble arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"nextDouble",
			"(DZ)D",
			arg0,
			arg1
		);
	}
	jdouble ChoiceFormat::nextDouble(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"nextDouble",
			"(D)D",
			arg0
		);
	}
	QAndroidJniObject ChoiceFormat::parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ChoiceFormat::parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	jobjectArray ChoiceFormat::getFormats()
	{
		return __thiz.callObjectMethod(
			"getFormats",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	void ChoiceFormat::applyPattern(jstring arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void ChoiceFormat::applyPattern(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jstring ChoiceFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jdouble ChoiceFormat::previousDouble(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"previousDouble",
			"(D)D",
			arg0
		);
	}
	jdoubleArray ChoiceFormat::getLimits()
	{
		return __thiz.callObjectMethod(
			"getLimits",
			"()[D"
		).object<jdoubleArray>();
	}
	void ChoiceFormat::setChoices(jdoubleArray arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"setChoices",
			"([D[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class ChoiceFormat : public __jni_impl::java::text::ChoiceFormat
	{
	public:
		ChoiceFormat(QAndroidJniObject obj) { __thiz = obj; }
		ChoiceFormat(jdoubleArray arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		ChoiceFormat(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace java::text

#endif // JAVA_TEXT_CHOICEFORMAT

