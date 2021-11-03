#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.hpp"
#include "./AttributedCharacterIterator_Attribute.hpp"
#include "./AttributedString.hpp"

namespace java::text
{
	// Fields
	
	// QAndroidJniObject forward
	AttributedString::AttributedString(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	AttributedString::AttributedString(JString arg0)
		: JObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	AttributedString::AttributedString(JObject arg0)
		: JObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.object()
		) {}
	AttributedString::AttributedString(JString arg0, JObject arg1)
		: JObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	AttributedString::AttributedString(JObject arg0, jint arg1, jint arg2)
		: JObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	AttributedString::AttributedString(JObject arg0, jint arg1, jint arg2, JArray arg3)
		: JObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;II[Ljava/text/AttributedCharacterIterator$Attribute;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jarray>()
		) {}
	
	// Methods
	void AttributedString::addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, JObject arg1)
	{
		callMethod<void>(
			"addAttribute",
			"(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	void AttributedString::addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, JObject arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"addAttribute",
			"(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;II)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2,
			arg3
		);
	}
	void AttributedString::addAttributes(JObject arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"addAttributes",
			"(Ljava/util/Map;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	JObject AttributedString::getIterator()
	{
		return callObjectMethod(
			"getIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	JObject AttributedString::getIterator(JArray arg0)
	{
		return callObjectMethod(
			"getIterator",
			"([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jarray>()
		);
	}
	JObject AttributedString::getIterator(JArray arg0, jint arg1, jint arg2)
	{
		return callObjectMethod(
			"getIterator",
			"([Ljava/text/AttributedCharacterIterator$Attribute;II)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
} // namespace java::text

