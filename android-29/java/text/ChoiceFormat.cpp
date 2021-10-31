#include "../io/ObjectInputStream.hpp"
#include "../lang/Number.hpp"
#include "../lang/StringBuffer.hpp"
#include "./FieldPosition.hpp"
#include "./ParsePosition.hpp"
#include "./ChoiceFormat.hpp"

namespace java::text
{
	// Fields
	
	ChoiceFormat::ChoiceFormat(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ChoiceFormat::ChoiceFormat(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"java.text.ChoiceFormat",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ChoiceFormat::ChoiceFormat(jdoubleArray arg0, jarray arg1)
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
	QAndroidJniObject ChoiceFormat::format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return __thiz.callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ChoiceFormat::format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
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
	QAndroidJniObject ChoiceFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return __thiz.callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
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
} // namespace java::text

