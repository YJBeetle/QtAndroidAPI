#include "./BreakIterator.hpp"
#include "./RuleBasedCollator.hpp"
#include "../util/ULocale.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./StringSearch.hpp"

namespace android::icu::text
{
	// Fields
	
	// QAndroidJniObject forward
	StringSearch::StringSearch(QAndroidJniObject obj) : android::icu::text::SearchIterator(obj) {}
	
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
	android::icu::text::RuleBasedCollator StringSearch::getCollator()
	{
		return callObjectMethod(
			"getCollator",
			"()Landroid/icu/text/RuleBasedCollator;"
		);
	}
	jint StringSearch::getIndex()
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	JString StringSearch::getPattern()
	{
		return callObjectMethod(
			"getPattern",
			"()Ljava/lang/String;"
		);
	}
	jboolean StringSearch::isCanonical()
	{
		return callMethod<jboolean>(
			"isCanonical",
			"()Z"
		);
	}
	void StringSearch::reset()
	{
		callMethod<void>(
			"reset",
			"()V"
		);
	}
	void StringSearch::setCanonical(jboolean arg0)
	{
		callMethod<void>(
			"setCanonical",
			"(Z)V",
			arg0
		);
	}
	void StringSearch::setCollator(android::icu::text::RuleBasedCollator arg0)
	{
		callMethod<void>(
			"setCollator",
			"(Landroid/icu/text/RuleBasedCollator;)V",
			arg0.object()
		);
	}
	void StringSearch::setIndex(jint arg0)
	{
		callMethod<void>(
			"setIndex",
			"(I)V",
			arg0
		);
	}
	void StringSearch::setPattern(JString arg0)
	{
		callMethod<void>(
			"setPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	void StringSearch::setTarget(JObject arg0)
	{
		callMethod<void>(
			"setTarget",
			"(Ljava/text/CharacterIterator;)V",
			arg0.object()
		);
	}
} // namespace android::icu::text

