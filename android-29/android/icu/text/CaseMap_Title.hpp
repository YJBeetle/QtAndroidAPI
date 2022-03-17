#pragma once

#include "./BreakIterator.def.hpp"
#include "./CaseMap.def.hpp"
#include "./Edits.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./CaseMap_Title.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::icu::text::CaseMap_Title CaseMap_Title::adjustToCased() const
	{
		return callObjectMethod(
			"adjustToCased",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	inline JObject CaseMap_Title::apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, JString arg2, JObject arg3, android::icu::text::Edits arg4) const
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
	inline JString CaseMap_Title::apply(java::util::Locale arg0, android::icu::text::BreakIterator arg1, JString arg2) const
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Landroid/icu/text/BreakIterator;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object(),
			arg1.object(),
			arg2.object<jstring>()
		);
	}
	inline android::icu::text::CaseMap_Title CaseMap_Title::noBreakAdjustment() const
	{
		return callObjectMethod(
			"noBreakAdjustment",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	inline android::icu::text::CaseMap_Title CaseMap_Title::noLowercase() const
	{
		return callObjectMethod(
			"noLowercase",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	inline android::icu::text::CaseMap_Title CaseMap_Title::omitUnchangedText() const
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	inline android::icu::text::CaseMap_Title CaseMap_Title::sentences() const
	{
		return callObjectMethod(
			"sentences",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
	inline android::icu::text::CaseMap_Title CaseMap_Title::wholeString() const
	{
		return callObjectMethod(
			"wholeString",
			"()Landroid/icu/text/CaseMap$Title;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "./CaseMap.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
