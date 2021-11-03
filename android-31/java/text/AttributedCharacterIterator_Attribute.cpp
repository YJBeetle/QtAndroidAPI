#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./AttributedCharacterIterator_Attribute.hpp"

namespace java::text
{
	// Fields
	java::text::AttributedCharacterIterator_Attribute AttributedCharacterIterator_Attribute::INPUT_METHOD_SEGMENT()
	{
		return getStaticObjectField(
			"java.text.AttributedCharacterIterator$Attribute",
			"INPUT_METHOD_SEGMENT",
			"Ljava/text/AttributedCharacterIterator$Attribute;"
		);
	}
	java::text::AttributedCharacterIterator_Attribute AttributedCharacterIterator_Attribute::LANGUAGE()
	{
		return getStaticObjectField(
			"java.text.AttributedCharacterIterator$Attribute",
			"LANGUAGE",
			"Ljava/text/AttributedCharacterIterator$Attribute;"
		);
	}
	java::text::AttributedCharacterIterator_Attribute AttributedCharacterIterator_Attribute::READING()
	{
		return getStaticObjectField(
			"java.text.AttributedCharacterIterator$Attribute",
			"READING",
			"Ljava/text/AttributedCharacterIterator$Attribute;"
		);
	}
	
	// QJniObject forward
	AttributedCharacterIterator_Attribute::AttributedCharacterIterator_Attribute(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	jboolean AttributedCharacterIterator_Attribute::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint AttributedCharacterIterator_Attribute::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString AttributedCharacterIterator_Attribute::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::text

