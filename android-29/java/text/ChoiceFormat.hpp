#pragma once

#include "../../__JniBaseClass.hpp"
#include "./Format.hpp"
#include "./NumberFormat.hpp"

namespace __jni_impl::java::io
{
	class ObjectInputStream;
}
namespace __jni_impl::java::lang
{
	class Number;
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
	class ChoiceFormat : public __jni_impl::java::text::NumberFormat
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		void __constructor(jdoubleArray arg0, jarray arg1);
		
		// Methods
		static jdouble nextDouble(jdouble arg0);
		static jdouble nextDouble(jdouble arg0, jboolean arg1);
		static jdouble previousDouble(jdouble arg0);
		void applyPattern(jstring arg0);
		void applyPattern(const QString &arg0);
		jobject clone();
		jboolean equals(jobject arg0);
		QAndroidJniObject format(jdouble arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		QAndroidJniObject format(jlong arg0, __jni_impl::java::lang::StringBuffer arg1, __jni_impl::java::text::FieldPosition arg2);
		jobjectArray getFormats();
		jdoubleArray getLimits();
		jint hashCode();
		QAndroidJniObject parse(jstring arg0, __jni_impl::java::text::ParsePosition arg1);
		QAndroidJniObject parse(const QString &arg0, __jni_impl::java::text::ParsePosition arg1);
		void setChoices(jdoubleArray arg0, jarray arg1);
		jstring toPattern();
	};
} // namespace __jni_impl::java::text

#include "../io/ObjectInputStream.hpp"
#include "../lang/Number.hpp"
#include "../lang/StringBuffer.hpp"
#include "./FieldPosition.hpp"
#include "./ParsePosition.hpp"

namespace __jni_impl::java::text
{
	// Fields
	
	// Constructors
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
	void ChoiceFormat::__constructor(jdoubleArray arg0, jarray arg1)
	{
		__thiz = QAndroidJniObject(
			"java.text.ChoiceFormat",
			"([D[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jdouble ChoiceFormat::nextDouble(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"nextDouble",
			"(D)D",
			arg0
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
	jdouble ChoiceFormat::previousDouble(jdouble arg0)
	{
		return QAndroidJniObject::callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"previousDouble",
			"(D)D",
			arg0
		);
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
	jobject ChoiceFormat::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ChoiceFormat::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
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
	jobjectArray ChoiceFormat::getFormats()
	{
		return __thiz.callObjectMethod(
			"getFormats",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jdoubleArray ChoiceFormat::getLimits()
	{
		return __thiz.callObjectMethod(
			"getLimits",
			"()[D"
		).object<jdoubleArray>();
	}
	jint ChoiceFormat::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
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
	void ChoiceFormat::setChoices(jdoubleArray arg0, jarray arg1)
	{
		__thiz.callMethod<void>(
			"setChoices",
			"([D[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jstring ChoiceFormat::toPattern()
	{
		return __thiz.callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::text

namespace java::text
{
	class ChoiceFormat : public __jni_impl::java::text::ChoiceFormat
	{
	public:
		ChoiceFormat(QAndroidJniObject obj) { __thiz = obj; }
		ChoiceFormat(jstring arg0)
		{
			__constructor(
				arg0);
		}
		ChoiceFormat(jdoubleArray arg0, jarray arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace java::text

