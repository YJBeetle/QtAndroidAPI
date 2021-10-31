#include "../io/ObjectInputStream.hpp"
#include "../lang/Number.hpp"
#include "../lang/StringBuffer.hpp"
#include "./FieldPosition.hpp"
#include "./ParsePosition.hpp"
#include "./ChoiceFormat.hpp"

namespace java::text
{
	// Fields
	
	// QJniObject forward
	ChoiceFormat::ChoiceFormat(QJniObject obj) : java::text::NumberFormat(obj) {}
	
	// Constructors
	ChoiceFormat::ChoiceFormat(jstring arg0)
		: java::text::NumberFormat(
			"java.text.ChoiceFormat",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	ChoiceFormat::ChoiceFormat(jdoubleArray arg0, jarray arg1)
		: java::text::NumberFormat(
			"java.text.ChoiceFormat",
			"([D[Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jdouble ChoiceFormat::nextDouble(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"nextDouble",
			"(D)D",
			arg0
		);
	}
	jdouble ChoiceFormat::nextDouble(jdouble arg0, jboolean arg1)
	{
		return callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"nextDouble",
			"(DZ)D",
			arg0,
			arg1
		);
	}
	jdouble ChoiceFormat::previousDouble(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"previousDouble",
			"(D)D",
			arg0
		);
	}
	void ChoiceFormat::applyPattern(jstring arg0)
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	jobject ChoiceFormat::clone()
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		).object<jobject>();
	}
	jboolean ChoiceFormat::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	java::lang::StringBuffer ChoiceFormat::format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	java::lang::StringBuffer ChoiceFormat::format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	jobjectArray ChoiceFormat::getFormats()
	{
		return callObjectMethod(
			"getFormats",
			"()[Ljava/lang/Object;"
		).object<jobjectArray>();
	}
	jdoubleArray ChoiceFormat::getLimits()
	{
		return callObjectMethod(
			"getLimits",
			"()[D"
		).object<jdoubleArray>();
	}
	jint ChoiceFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	java::lang::Number ChoiceFormat::parse(jstring arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0,
			arg1.object()
		);
	}
	void ChoiceFormat::setChoices(jdoubleArray arg0, jarray arg1)
	{
		callMethod<void>(
			"setChoices",
			"([D[Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	jstring ChoiceFormat::toPattern()
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::text

