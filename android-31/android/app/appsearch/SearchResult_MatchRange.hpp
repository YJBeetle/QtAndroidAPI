#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./SearchResult_MatchRange.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline SearchResult_MatchRange::SearchResult_MatchRange(jint arg0, jint arg1)
		: JObject(
			"android.app.appsearch.SearchResult$MatchRange",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline jboolean SearchResult_MatchRange::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint SearchResult_MatchRange::getEnd() const
	{
		return callMethod<jint>(
			"getEnd",
			"()I"
		);
	}
	inline jint SearchResult_MatchRange::getStart() const
	{
		return callMethod<jint>(
			"getStart",
			"()I"
		);
	}
	inline jint SearchResult_MatchRange::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString SearchResult_MatchRange::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::app::appsearch

// Base class headers

