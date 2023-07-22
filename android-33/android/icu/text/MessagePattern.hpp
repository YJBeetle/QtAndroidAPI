#pragma once

#include "./MessagePattern_ApostropheMode.def.hpp"
#include "./MessagePattern_Part.def.hpp"
#include "./MessagePattern_Part_Type.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./MessagePattern.def.hpp"

namespace android::icu::text
{
	// Fields
	inline jint MessagePattern::ARG_NAME_NOT_NUMBER()
	{
		return getStaticField<jint>(
			"android.icu.text.MessagePattern",
			"ARG_NAME_NOT_NUMBER"
		);
	}
	inline jint MessagePattern::ARG_NAME_NOT_VALID()
	{
		return getStaticField<jint>(
			"android.icu.text.MessagePattern",
			"ARG_NAME_NOT_VALID"
		);
	}
	inline jdouble MessagePattern::NO_NUMERIC_VALUE()
	{
		return getStaticField<jdouble>(
			"android.icu.text.MessagePattern",
			"NO_NUMERIC_VALUE"
		);
	}
	
	// Constructors
	inline MessagePattern::MessagePattern()
		: JObject(
			"android.icu.text.MessagePattern",
			"()V"
		) {}
	inline MessagePattern::MessagePattern(android::icu::text::MessagePattern_ApostropheMode arg0)
		: JObject(
			"android.icu.text.MessagePattern",
			"(Landroid/icu/text/MessagePattern$ApostropheMode;)V",
			arg0.object()
		) {}
	inline MessagePattern::MessagePattern(JString arg0)
		: JObject(
			"android.icu.text.MessagePattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	inline jint MessagePattern::validateArgumentName(JString arg0)
	{
		return callStaticMethod<jint>(
			"android.icu.text.MessagePattern",
			"validateArgumentName",
			"(Ljava/lang/String;)I",
			arg0.object<jstring>()
		);
	}
	inline JString MessagePattern::autoQuoteApostropheDeep() const
	{
		return callObjectMethod(
			"autoQuoteApostropheDeep",
			"()Ljava/lang/String;"
		);
	}
	inline void MessagePattern::clear() const
	{
		callMethod<void>(
			"clear",
			"()V"
		);
	}
	inline void MessagePattern::clearPatternAndSetApostropheMode(android::icu::text::MessagePattern_ApostropheMode arg0) const
	{
		callMethod<void>(
			"clearPatternAndSetApostropheMode",
			"(Landroid/icu/text/MessagePattern$ApostropheMode;)V",
			arg0.object()
		);
	}
	inline JObject MessagePattern::clone() const
	{
		return callObjectMethod(
			"clone",
			"()Ljava/lang/Object;"
		);
	}
	inline android::icu::text::MessagePattern MessagePattern::cloneAsThawed() const
	{
		return callObjectMethod(
			"cloneAsThawed",
			"()Landroid/icu/text/MessagePattern;"
		);
	}
	inline jint MessagePattern::countParts() const
	{
		return callMethod<jint>(
			"countParts",
			"()I"
		);
	}
	inline jboolean MessagePattern::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::icu::text::MessagePattern MessagePattern::freeze() const
	{
		return callObjectMethod(
			"freeze",
			"()Landroid/icu/text/MessagePattern;"
		);
	}
	inline android::icu::text::MessagePattern_ApostropheMode MessagePattern::getApostropheMode() const
	{
		return callObjectMethod(
			"getApostropheMode",
			"()Landroid/icu/text/MessagePattern$ApostropheMode;"
		);
	}
	inline jint MessagePattern::getLimitPartIndex(jint arg0) const
	{
		return callMethod<jint>(
			"getLimitPartIndex",
			"(I)I",
			arg0
		);
	}
	inline jdouble MessagePattern::getNumericValue(android::icu::text::MessagePattern_Part arg0) const
	{
		return callMethod<jdouble>(
			"getNumericValue",
			"(Landroid/icu/text/MessagePattern$Part;)D",
			arg0.object()
		);
	}
	inline android::icu::text::MessagePattern_Part MessagePattern::getPart(jint arg0) const
	{
		return callObjectMethod(
			"getPart",
			"(I)Landroid/icu/text/MessagePattern$Part;",
			arg0
		);
	}
	inline android::icu::text::MessagePattern_Part_Type MessagePattern::getPartType(jint arg0) const
	{
		return callObjectMethod(
			"getPartType",
			"(I)Landroid/icu/text/MessagePattern$Part$Type;",
			arg0
		);
	}
	inline jint MessagePattern::getPatternIndex(jint arg0) const
	{
		return callMethod<jint>(
			"getPatternIndex",
			"(I)I",
			arg0
		);
	}
	inline JString MessagePattern::getPatternString() const
	{
		return callObjectMethod(
			"getPatternString",
			"()Ljava/lang/String;"
		);
	}
	inline jdouble MessagePattern::getPluralOffset(jint arg0) const
	{
		return callMethod<jdouble>(
			"getPluralOffset",
			"(I)D",
			arg0
		);
	}
	inline JString MessagePattern::getSubstring(android::icu::text::MessagePattern_Part arg0) const
	{
		return callObjectMethod(
			"getSubstring",
			"(Landroid/icu/text/MessagePattern$Part;)Ljava/lang/String;",
			arg0.object()
		);
	}
	inline jboolean MessagePattern::hasNamedArguments() const
	{
		return callMethod<jboolean>(
			"hasNamedArguments",
			"()Z"
		);
	}
	inline jboolean MessagePattern::hasNumberedArguments() const
	{
		return callMethod<jboolean>(
			"hasNumberedArguments",
			"()Z"
		);
	}
	inline jint MessagePattern::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean MessagePattern::isFrozen() const
	{
		return callMethod<jboolean>(
			"isFrozen",
			"()Z"
		);
	}
	inline android::icu::text::MessagePattern MessagePattern::parse(JString arg0) const
	{
		return callObjectMethod(
			"parse",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::MessagePattern MessagePattern::parseChoiceStyle(JString arg0) const
	{
		return callObjectMethod(
			"parseChoiceStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::MessagePattern MessagePattern::parsePluralStyle(JString arg0) const
	{
		return callObjectMethod(
			"parsePluralStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::MessagePattern MessagePattern::parseSelectStyle(JString arg0) const
	{
		return callObjectMethod(
			"parseSelectStyle",
			"(Ljava/lang/String;)Landroid/icu/text/MessagePattern;",
			arg0.object<jstring>()
		);
	}
	inline jboolean MessagePattern::partSubstringMatches(android::icu::text::MessagePattern_Part arg0, JString arg1) const
	{
		return callMethod<jboolean>(
			"partSubstringMatches",
			"(Landroid/icu/text/MessagePattern$Part;Ljava/lang/String;)Z",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline JString MessagePattern::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
