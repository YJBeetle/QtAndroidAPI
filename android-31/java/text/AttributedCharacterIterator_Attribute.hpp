#pragma once

#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AttributedCharacterIterator_Attribute.def.hpp"

namespace java::text
{
	// Fields
	inline java::text::AttributedCharacterIterator_Attribute AttributedCharacterIterator_Attribute::INPUT_METHOD_SEGMENT()
	{
		return getStaticObjectField(
			"java.text.AttributedCharacterIterator$Attribute",
			"INPUT_METHOD_SEGMENT",
			"Ljava/text/AttributedCharacterIterator$Attribute;"
		);
	}
	inline java::text::AttributedCharacterIterator_Attribute AttributedCharacterIterator_Attribute::LANGUAGE()
	{
		return getStaticObjectField(
			"java.text.AttributedCharacterIterator$Attribute",
			"LANGUAGE",
			"Ljava/text/AttributedCharacterIterator$Attribute;"
		);
	}
	inline java::text::AttributedCharacterIterator_Attribute AttributedCharacterIterator_Attribute::READING()
	{
		return getStaticObjectField(
			"java.text.AttributedCharacterIterator$Attribute",
			"READING",
			"Ljava/text/AttributedCharacterIterator$Attribute;"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean AttributedCharacterIterator_Attribute::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint AttributedCharacterIterator_Attribute::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString AttributedCharacterIterator_Attribute::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

// Base class headers

