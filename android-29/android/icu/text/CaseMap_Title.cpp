#include "./BreakIterator.hpp"
#include "./CaseMap.hpp"
#include "./Edits.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.hpp"
#include "./CaseMap_Title.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	android::icu::text::CaseMap_Title CaseMap_Title::adjustToCased() const
	{
		return callObjectMethod(
			"adjustToCased",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	JObject CaseMap_Title::apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, JString arg2, JObject arg3, android::icu::text::Edits arg4) const
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>(),
			arg3.object(),
			arg4.object()
		);
	}
	JString CaseMap_Title::apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, JString arg2) const
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	android::icu::text::CaseMap_Title CaseMap_Title::noBreakAdjustment() const
	{
		return callObjectMethod(
			"noBreakAdjustment",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	android::icu::text::CaseMap_Title CaseMap_Title::noLowercase() const
	{
		return callObjectMethod(
			"noLowercase",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	android::icu::text::CaseMap_Title CaseMap_Title::omitUnchangedText() const
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	android::icu::text::CaseMap_Title CaseMap_Title::sentences() const
	{
		return callObjectMethod(
			"sentences",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	android::icu::text::CaseMap_Title CaseMap_Title::wholeString() const
	{
		return callObjectMethod(
			"wholeString",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
} // namespace android::icu::text

