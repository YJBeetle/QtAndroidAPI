#pragma once

#include "./GenericDocument.def.hpp"
#include "../../../JString.hpp"
#include "./SearchResult.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString SearchResult::getDatabaseName() const
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
	inline android::app::appsearch::GenericDocument SearchResult::getGenericDocument() const
	{
		return callObjectMethod(
			"getGenericDocument",
			"()Landroid/app/appsearch/GenericDocument;"
		);
	}
	inline JObject SearchResult::getMatchInfos() const
	{
		return callObjectMethod(
			"getMatchInfos",
			"()Ljava/util/List;"
		);
	}
	inline JString SearchResult::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jdouble SearchResult::getRankingSignal() const
	{
		return callMethod<jdouble>(
			"getRankingSignal",
			"()D"
		);
	}
} // namespace android::app::appsearch

// Base class headers

