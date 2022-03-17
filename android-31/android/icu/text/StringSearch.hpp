#pragma once

#include "./BreakIterator.def.hpp"
#include "./RuleBasedCollator.def.hpp"
#include "../util/ULocale.def.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./StringSearch.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	inline StringSearch::StringSearch(JString arg0, JString arg1)
		: android::icu::text::SearchIterator(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline StringSearch::StringSearch(JString arg0, JObject arg1, android::icu::text::RuleBasedCollator arg2)
		: android::icu::text::SearchIterator(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	inline StringSearch::StringSearch(JString arg0, JObject arg1, android::icu::util::ULocale arg2)
		: android::icu::text::SearchIterator(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/util/ULocale;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	inline StringSearch::StringSearch(JString arg0, JObject arg1, java::util::Locale arg2)
		: android::icu::text::SearchIterator(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Ljava/util/Locale;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	inline StringSearch::StringSearch(JString arg0, JObject arg1, android::icu::text::RuleBasedCollator arg2, android::icu::text::BreakIterator arg3)
		: android::icu::text::SearchIterator(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;Landroid/icu/text/BreakIterator;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	inline android::icu::text::RuleBasedCollator StringSearch::getCollator() const
	{
		return callObjectMethod(
			"getCollator",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
	}
	inline jint StringSearch::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline JString StringSearch::getPattern() const
	{
		return callObjectMethod(
			"getPattern",
			"()Ljava/lang/String;"
		);
	}
	inline jboolean StringSearch::isCanonical() const
	{
		return callMethod<jboolean>(
			"isCanonical",
			"()Z"
		);
	}
	inline void StringSearch::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	inline void StringSearch::setCanonical(jboolean arg0) const
	{
		callMethod<void>(
			"setCanonical",
			"(Z)V",
			arg0
		);
	}
	inline void StringSearch::setCollator(android::icu::text::RuleBasedCollator arg0) const
	{
		callMethod<void>(
			"setCollator",
			"(Landroid/icu/text/RuleBasedCollator;)V",
			arg0.object()
		);
	}
	inline void StringSearch::setIndex(jint arg0) const
	{
		callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	inline void StringSearch::setPattern(JString arg0) const
	{
		callMethod<void>(
			"setPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void StringSearch::setTarget(JObject arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

// Base class headers
#include "./SearchIterator.hpp"

