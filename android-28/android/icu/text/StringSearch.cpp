#include "./BreakIterator.hpp"
#include "./RuleBasedCollator.hpp"
#include "../util/ULocale.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./StringSearch.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	StringSearch::StringSearch(QJniObject obj) : android::icu::text::SearchIterator(obj) {}
	
	// Constructors
	StringSearch::StringSearch(JString arg0, JString arg1)
		: android::icu::text::SearchIterator(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	StringSearch::StringSearch(JString arg0, JObject arg1, android::icu::text::RuleBasedCollator arg2)
		: android::icu::text::SearchIterator(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	StringSearch::StringSearch(JString arg0, JObject arg1, android::icu::util::ULocale arg2)
		: android::icu::text::SearchIterator(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/util/ULocale;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	StringSearch::StringSearch(JString arg0, JObject arg1, java::util::Locale arg2)
		: android::icu::text::SearchIterator(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Ljava/util/Locale;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		) {}
	StringSearch::StringSearch(JString arg0, JObject arg1, android::icu::text::RuleBasedCollator arg2, android::icu::text::BreakIterator arg3)
		: android::icu::text::SearchIterator(
			"android.icu.text.StringSearch",
			"(Ljava/lang/String;Ljava/text/CharacterIterator;Landroid/icu/text/RuleBasedCollator;Landroid/icu/text/BreakIterator;)V",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object(),
			arg3.object()
		) {}
	
	// Methods
	android::icu::text::RuleBasedCollator StringSearch::getCollator() const
	{
		return callObjectMethod(
			"getCollator",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
	}
	jint StringSearch::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	JString StringSearch::getPattern() const
	{
		return callObjectMethod(
			"getPattern",
			"()Ljava/lang/String;"
		);
	}
	jboolean StringSearch::isCanonical() const
	{
		return callMethod<jboolean>(
			"isCanonical",
			"()Z"
		);
	}
	void StringSearch::reset() const
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void StringSearch::setCanonical(jboolean arg0) const
	{
		callMethod<void>(
			"setCanonical",
			"(Z)V",
			arg0
		);
	}
	void StringSearch::setCollator(android::icu::text::RuleBasedCollator arg0) const
	{
		callMethod<void>(
			"setCollator",
			"(Landroid/icu/text/RuleBasedCollator;)V",
			arg0.object()
		);
	}
	void StringSearch::setIndex(jint arg0) const
	{
		callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	void StringSearch::setPattern(JString arg0) const
	{
		callMethod<void>(
			"setPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void StringSearch::setTarget(JObject arg0) const
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

