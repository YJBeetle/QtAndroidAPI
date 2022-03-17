#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.def.hpp"
#include "./AttributedCharacterIterator_Attribute.def.hpp"
#include "./AttributedString.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	inline AttributedString::AttributedString(JString arg0)
		: JObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline AttributedString::AttributedString(JObject arg0)
		: JObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;)V",
			arg0.object()
		) {}
	inline AttributedString::AttributedString(JString arg0, JObject arg1)
		: JObject(
			"java.text.AttributedString",
			"(Ljava/lang/String;Ljava/util/Map;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	inline AttributedString::AttributedString(JObject arg0, jint arg1, jint arg2)
		: JObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline AttributedString::AttributedString(JObject arg0, jint arg1, jint arg2, JArray arg3)
		: JObject(
			"java.text.AttributedString",
			"(Ljava/text/AttributedCharacterIterator;II[Ljava/text/AttributedCharacterIterator$Attribute;)V",
			arg0.object(),
			arg1,
			arg2,
			arg3.object<jarray>()
		) {}
	
	// Methods
	inline void AttributedString::addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, JObject arg1) const
	{
		callMethod<void>(
			"addAttribute",
			"(Ljava/text/AttributedCharacterIterator$Attribute;Ljava/lang/Object;)V",
			arg0.object(),
			arg1.object<jobject>()
		);
	}
	inline void AttributedString::addAttribute(java::text::AttributedCharacterIterator_Attribute arg0, JObject arg1, jint arg2, jint arg3) const
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
	inline void AttributedString::addAttributes(JObject arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"addAttributes",
			"(Ljava/util/Map;II)V",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline JObject AttributedString::getIterator() const
	{
		return callObjectMethod(
			"getIterator",
			"()Ljava/text/AttributedCharacterIterator;"
		);
	}
	inline JObject AttributedString::getIterator(JArray arg0) const
	{
		return callObjectMethod(
			"getIterator",
			"([Ljava/text/AttributedCharacterIterator$Attribute;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jarray>()
		);
	}
	inline JObject AttributedString::getIterator(JArray arg0, jint arg1, jint arg2) const
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

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::text;
#endif
