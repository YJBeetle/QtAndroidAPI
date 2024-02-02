#pragma once

#include "./SearchSuggestionSpec.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline jint SearchSuggestionSpec::SUGGESTION_RANKING_STRATEGY_DOCUMENT_COUNT()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSuggestionSpec",
			"SUGGESTION_RANKING_STRATEGY_DOCUMENT_COUNT"
		);
	}
	inline jint SearchSuggestionSpec::SUGGESTION_RANKING_STRATEGY_NONE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSuggestionSpec",
			"SUGGESTION_RANKING_STRATEGY_NONE"
		);
	}
	inline jint SearchSuggestionSpec::SUGGESTION_RANKING_STRATEGY_TERM_FREQUENCY()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSuggestionSpec",
			"SUGGESTION_RANKING_STRATEGY_TERM_FREQUENCY"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject SearchSuggestionSpec::getFilterDocumentIds() const
	{
		return callObjectMethod(
			"getFilterDocumentIds",
			"()Ljava/util/Map;"
		);
	}
	inline JObject SearchSuggestionSpec::getFilterNamespaces() const
	{
		return callObjectMethod(
			"getFilterNamespaces",
			"()Ljava/util/List;"
		);
	}
	inline JObject SearchSuggestionSpec::getFilterSchemas() const
	{
		return callObjectMethod(
			"getFilterSchemas",
			"()Ljava/util/List;"
		);
	}
	inline jint SearchSuggestionSpec::getMaximumResultCount() const
	{
		return callMethod<jint>(
			"getMaximumResultCount",
			"()I"
		);
	}
	inline jint SearchSuggestionSpec::getRankingStrategy() const
	{
		return callMethod<jint>(
			"getRankingStrategy",
			"()I"
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
