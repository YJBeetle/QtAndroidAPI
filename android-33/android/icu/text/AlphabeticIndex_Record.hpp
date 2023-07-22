#pragma once

#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AlphabeticIndex_Record.def.hpp"

namespace android::icu::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject AlphabeticIndex_Record::getData() const
	{
		return callObjectMethod(
			"getData",
			"()Ljava/lang/Object;"
		);
	}
	inline JString AlphabeticIndex_Record::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/CharSequence;"
		);
	}
	inline JString AlphabeticIndex_Record::toString() const
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
