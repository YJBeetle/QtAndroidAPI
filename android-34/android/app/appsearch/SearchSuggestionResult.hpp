#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SearchSuggestionResult.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean SearchSuggestionResult::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString SearchSuggestionResult::getSuggestedResult() const
	{
		return callObjectMethod(
			"getSuggestedResult",
			"()Ljava/lang/String;"
		);
	}
	inline jint SearchSuggestionResult::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
