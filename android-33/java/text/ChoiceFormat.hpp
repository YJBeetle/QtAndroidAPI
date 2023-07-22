#pragma once

#include "../../JDoubleArray.hpp"
#include "../../JObjectArray.hpp"
#include "../../JArray.hpp"
#include "../io/ObjectInputStream.def.hpp"
#include "../lang/Number.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.def.hpp"
#include "./FieldPosition.def.hpp"
#include "./ParsePosition.def.hpp"
#include "./ChoiceFormat.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline ChoiceFormat::ChoiceFormat(JString arg0)
		: java::text::NumberFormat(
			"java.text.ChoiceFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline ChoiceFormat::ChoiceFormat(JDoubleArray arg0, JArray arg1)
		: java::text::NumberFormat(
			"java.text.ChoiceFormat",
			"([D[Ljava/lang/String;)V",
			arg0.object<jdoubleArray>(),
			arg1.object<jarray>()
		) {}
	
	// Methods
	inline jdouble ChoiceFormat::nextDouble(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"nextDouble",
			"(D)D",
			arg0
		);
	}
	inline jdouble ChoiceFormat::nextDouble(jdouble arg0, jboolean arg1)
	{
		return callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"nextDouble",
			"(DZ)D",
			arg0,
			arg1
		);
	}
	inline jdouble ChoiceFormat::previousDouble(jdouble arg0)
	{
		return callStaticMethod<jdouble>(
			"java.text.ChoiceFormat",
			"previousDouble",
			"(D)D",
			arg0
		);
	}
	inline void ChoiceFormat::applyPattern(JString arg0) const
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline JObject ChoiceFormat::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline jboolean ChoiceFormat::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline java::lang::StringBuffer ChoiceFormat::format(jdouble arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(DLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline java::lang::StringBuffer ChoiceFormat::format(jlong arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(JLjava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0,
			arg1.object(),
			arg2.object()
		);
	}
	inline JObjectArray ChoiceFormat::getFormats() const
	{
		return callObjectMethod(
			"getFormats",
			"()[Ljava/lang/Object;"
		);
	}
	inline JDoubleArray ChoiceFormat::getLimits() const
	{
		return callObjectMethod(
			"getLimits",
			"()[D"
		);
	}
	inline jint ChoiceFormat::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline java::lang::Number ChoiceFormat::parse(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Number;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline void ChoiceFormat::setChoices(JDoubleArray arg0, JArray arg1) const
	{
		callMethod<void>(
			"setChoices",
			"([D[Ljava/lang/String;)V",
			arg0.object<jdoubleArray>(),
			arg1.object<jarray>()
		);
	}
	inline JString ChoiceFormat::toPattern() const
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

// Base class headers
#include "./Format.hpp"
#include "./NumberFormat.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::text;
#endif
