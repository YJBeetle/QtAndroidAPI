#pragma once

#include "../../../JString.hpp"
#include "./SearchSpec.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline jint SearchSpec::GROUPING_TYPE_PER_NAMESPACE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"GROUPING_TYPE_PER_NAMESPACE"
		);
	}
	inline jint SearchSpec::GROUPING_TYPE_PER_PACKAGE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"GROUPING_TYPE_PER_PACKAGE"
		);
	}
	inline jint SearchSpec::ORDER_ASCENDING()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"ORDER_ASCENDING"
		);
	}
	inline jint SearchSpec::ORDER_DESCENDING()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"ORDER_DESCENDING"
		);
	}
	inline JString SearchSpec::PROJECTION_SCHEMA_TYPE_WILDCARD()
	{
		return getStaticObjectField(
			"android.app.appsearch.SearchSpec",
			"PROJECTION_SCHEMA_TYPE_WILDCARD",
			"Ljava/lang/String;"
		);
	}
	inline jint SearchSpec::RANKING_STRATEGY_CREATION_TIMESTAMP()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_CREATION_TIMESTAMP"
		);
	}
	inline jint SearchSpec::RANKING_STRATEGY_DOCUMENT_SCORE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_DOCUMENT_SCORE"
		);
	}
	inline jint SearchSpec::RANKING_STRATEGY_NONE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_NONE"
		);
	}
	inline jint SearchSpec::RANKING_STRATEGY_RELEVANCE_SCORE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_RELEVANCE_SCORE"
		);
	}
	inline jint SearchSpec::RANKING_STRATEGY_SYSTEM_USAGE_COUNT()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_SYSTEM_USAGE_COUNT"
		);
	}
	inline jint SearchSpec::RANKING_STRATEGY_SYSTEM_USAGE_LAST_USED_TIMESTAMP()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_SYSTEM_USAGE_LAST_USED_TIMESTAMP"
		);
	}
	inline jint SearchSpec::RANKING_STRATEGY_USAGE_COUNT()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_USAGE_COUNT"
		);
	}
	inline jint SearchSpec::RANKING_STRATEGY_USAGE_LAST_USED_TIMESTAMP()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_USAGE_LAST_USED_TIMESTAMP"
		);
	}
	inline jint SearchSpec::TERM_MATCH_EXACT_ONLY()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"TERM_MATCH_EXACT_ONLY"
		);
	}
	inline jint SearchSpec::TERM_MATCH_PREFIX()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"TERM_MATCH_PREFIX"
		);
	}
	
	// Constructors
	
	// Methods
	inline JObject SearchSpec::getFilterNamespaces() const
	{
		return callObjectMethod(
			"getFilterNamespaces",
			"()Ljava/util/List;"
		);
	}
	inline JObject SearchSpec::getFilterPackageNames() const
	{
		return callObjectMethod(
			"getFilterPackageNames",
			"()Ljava/util/List;"
		);
	}
	inline JObject SearchSpec::getFilterSchemas() const
	{
		return callObjectMethod(
			"getFilterSchemas",
			"()Ljava/util/List;"
		);
	}
	inline jint SearchSpec::getMaxSnippetSize() const
	{
		return callMethod<jint>(
			"getMaxSnippetSize",
			"()I"
		);
	}
	inline jint SearchSpec::getOrder() const
	{
		return callMethod<jint>(
			"getOrder",
			"()I"
		);
	}
	inline JObject SearchSpec::getProjections() const
	{
		return callObjectMethod(
			"getProjections",
			"()Ljava/util/Map;"
		);
	}
	inline jint SearchSpec::getRankingStrategy() const
	{
		return callMethod<jint>(
			"getRankingStrategy",
			"()I"
		);
	}
	inline jint SearchSpec::getResultCountPerPage() const
	{
		return callMethod<jint>(
			"getResultCountPerPage",
			"()I"
		);
	}
	inline jint SearchSpec::getResultGroupingLimit() const
	{
		return callMethod<jint>(
			"getResultGroupingLimit",
			"()I"
		);
	}
	inline jint SearchSpec::getResultGroupingTypeFlags() const
	{
		return callMethod<jint>(
			"getResultGroupingTypeFlags",
			"()I"
		);
	}
	inline jint SearchSpec::getSnippetCount() const
	{
		return callMethod<jint>(
			"getSnippetCount",
			"()I"
		);
	}
	inline jint SearchSpec::getSnippetCountPerProperty() const
	{
		return callMethod<jint>(
			"getSnippetCountPerProperty",
			"()I"
		);
	}
	inline jint SearchSpec::getTermMatch() const
	{
		return callMethod<jint>(
			"getTermMatch",
			"()I"
		);
	}
} // namespace android::app::appsearch

// Base class headers

