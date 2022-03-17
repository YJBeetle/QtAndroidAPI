#pragma once

#include "./CaseMap.def.hpp"
#include "./Edits.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "./CaseMap_Fold.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject CaseMap_Fold::apply(JString arg0, JObject arg1, android::icu::text::Edits arg2) const
	{
		return callObjectMethod(
			"apply",
			"(Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2.object()
		);
	}
	inline JString CaseMap_Fold::apply(JString arg0) const
	{
		return callObjectMethod(
			"apply",
			"(Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	inline android::icu::text::CaseMap_Fold CaseMap_Fold::omitUnchangedText() const
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Fold;"
		);
	}
	inline android::icu::text::CaseMap_Fold CaseMap_Fold::turkic() const
	{
		return callObjectMethod(
			"turkic",
			"()Landroid/icu/text/CaseMap$Fold;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "./CaseMap.hpp"

