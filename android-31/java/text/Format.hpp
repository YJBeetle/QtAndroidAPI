#pragma once

#include "../../JArray.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "../lang/StringBuffer.def.hpp"
#include "./AttributedCharacterIterator_Attribute.def.hpp"
#include "./FieldPosition.def.hpp"
#include "./ParsePosition.def.hpp"
#include "./Format.def.hpp"

namespace java::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject Format::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline JString Format::format(JObject arg0) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;)Ljava/lang/String;",
			arg0.object<jobject>()
		);
	}
	inline java::lang::StringBuffer Format::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2) const
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JObject Format::formatToCharacterIterator(JObject arg0) const
	{
		return callObjectMethod(
			"formatToCharacterIterator",
			"(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;",
			arg0.object<jobject>()
		);
	}
	inline JObject Format::parseObject(JString arg0) const
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0.object<jstring>()
		);
	}
	inline JObject Format::parseObject(JString arg0, java::text::ParsePosition arg1) const
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
} // namespace java::text

// Base class headers

