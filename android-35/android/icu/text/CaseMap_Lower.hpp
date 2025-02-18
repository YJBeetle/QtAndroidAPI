#pragma once

#include "./CaseMap.def.hpp"
#include "./Edits.def.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./CaseMap_Lower.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject CaseMap_Lower::apply(java::util::Locale arg0, JString arg1, JObject arg2, android::icu::text::Edits arg3) const
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;Ljava/lang/Appendable;Landroid/icu/text/Edits;)Ljava/lang/Appendable;",
			arg0.object(),
			arg1.object<jstring>(),
			arg2.object(),
			arg3.object()
		);
	}
	inline JString CaseMap_Lower::apply(java::util::Locale arg0, JString arg1) const
	{
		return callObjectMethod(
			"apply",
			"(Ljava/util/Locale;Ljava/lang/CharSequence;)Ljava/lang/String;",
			arg0.object(),
			arg1.object<jstring>()
		);
	}
	inline android::icu::text::CaseMap_Lower CaseMap_Lower::omitUnchangedText() const
	{
		return callObjectMethod(
			"omitUnchangedText",
			"()Landroid/icu/text/CaseMap$Lower;"
		);
	}
} // namespace android::icu::text

// Base class headers
#include "./CaseMap.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::icu::text;
#endif
