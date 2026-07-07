#pragma once

#include "./JoinSpec.def.hpp"
#include "../../os/Parcel.def.hpp"
#include "../../../JString.hpp"
#include "./SearchSpec.def.hpp"

namespace android::app::appsearch
{
	// Fields
	inline JObject SearchSpec::CREATOR()
	{
		return getStaticObjectField(
			"android.app.appsearch.SearchSpec",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	inline jint SearchSpec::EMBEDDING_SEARCH_METRIC_TYPE_COSINE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"EMBEDDING_SEARCH_METRIC_TYPE_COSINE"
		);
	}
	inline jint SearchSpec::EMBEDDING_SEARCH_METRIC_TYPE_DEFAULT()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"EMBEDDING_SEARCH_METRIC_TYPE_DEFAULT"
		);
	}
	inline jint SearchSpec::EMBEDDING_SEARCH_METRIC_TYPE_DOT_PRODUCT()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"EMBEDDING_SEARCH_METRIC_TYPE_DOT_PRODUCT"
		);
	}
	inline jint SearchSpec::EMBEDDING_SEARCH_METRIC_TYPE_EUCLIDEAN()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"EMBEDDING_SEARCH_METRIC_TYPE_EUCLIDEAN"
		);
	}
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
	inline jint SearchSpec::GROUPING_TYPE_PER_SCHEMA()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"GROUPING_TYPE_PER_SCHEMA"
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
	inline jint SearchSpec::RANKING_STRATEGY_ADVANCED_RANKING_EXPRESSION()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_ADVANCED_RANKING_EXPRESSION"
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
	inline jint SearchSpec::RANKING_STRATEGY_JOIN_AGGREGATE_SCORE()
	{
		return getStaticField<jint>(
			"android.app.appsearch.SearchSpec",
			"RANKING_STRATEGY_JOIN_AGGREGATE_SCORE"
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
	inline JString SearchSpec::SCHEMA_TYPE_WILDCARD()
	{
		return getStaticObjectField(
			"android.app.appsearch.SearchSpec",
			"SCHEMA_TYPE_WILDCARD",
			"Ljava/lang/String;"
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
	inline jint SearchSpec::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	inline JString SearchSpec::getAdvancedRankingExpression() const
	{
		return callObjectMethod(
			"getAdvancedRankingExpression",
			"()Ljava/lang/String;"
		);
	}
	inline jint SearchSpec::getDefaultEmbeddingSearchMetricType() const
	{
		return callMethod<jint>(
			"getDefaultEmbeddingSearchMetricType",
			"()I"
		);
	}
	inline JObject SearchSpec::getEmbeddingParameters() const
	{
		return callObjectMethod(
			"getEmbeddingParameters",
			"()Ljava/util/List;"
		);
	}
	inline JObject SearchSpec::getFilterDocumentIds() const
	{
		return callObjectMethod(
			"getFilterDocumentIds",
			"()Ljava/util/List;"
		);
	}
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
	inline JObject SearchSpec::getFilterProperties() const
	{
		return callObjectMethod(
			"getFilterProperties",
			"()Ljava/util/Map;"
		);
	}
	inline JObject SearchSpec::getFilterSchemas() const
	{
		return callObjectMethod(
			"getFilterSchemas",
			"()Ljava/util/List;"
		);
	}
	inline JObject SearchSpec::getInformationalRankingExpressions() const
	{
		return callObjectMethod(
			"getInformationalRankingExpressions",
			"()Ljava/util/List;"
		);
	}
	inline android::app::appsearch::JoinSpec SearchSpec::getJoinSpec() const
	{
		return callObjectMethod(
			"getJoinSpec",
			"()Landroid/app/appsearch/JoinSpec;"
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
	inline JObject SearchSpec::getProjectionPaths() const
	{
		return callObjectMethod(
			"getProjectionPaths",
			"()Ljava/util/Map;"
		);
	}
	inline JObject SearchSpec::getProjections() const
	{
		return callObjectMethod(
			"getProjections",
			"()Ljava/util/Map;"
		);
	}
	inline JObject SearchSpec::getPropertyWeightPaths() const
	{
		return callObjectMethod(
			"getPropertyWeightPaths",
			"()Ljava/util/Map;"
		);
	}
	inline JObject SearchSpec::getPropertyWeights() const
	{
		return callObjectMethod(
			"getPropertyWeights",
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
	inline JString SearchSpec::getSearchSourceLogTag() const
	{
		return callObjectMethod(
			"getSearchSourceLogTag",
			"()Ljava/lang/String;"
		);
	}
	inline JObject SearchSpec::getSearchStringParameters() const
	{
		return callObjectMethod(
			"getSearchStringParameters",
			"()Ljava/util/List;"
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
	inline jboolean SearchSpec::isListFilterHasPropertyFunctionEnabled() const
	{
		return callMethod<jboolean>(
			"isListFilterHasPropertyFunctionEnabled",
			"()Z"
		);
	}
	inline jboolean SearchSpec::isListFilterMatchScoreExpressionFunctionEnabled() const
	{
		return callMethod<jboolean>(
			"isListFilterMatchScoreExpressionFunctionEnabled",
			"()Z"
		);
	}
	inline jboolean SearchSpec::isListFilterQueryLanguageEnabled() const
	{
		return callMethod<jboolean>(
			"isListFilterQueryLanguageEnabled",
			"()Z"
		);
	}
	inline jboolean SearchSpec::isNumericSearchEnabled() const
	{
		return callMethod<jboolean>(
			"isNumericSearchEnabled",
			"()Z"
		);
	}
	inline jboolean SearchSpec::isScorablePropertyRankingEnabled() const
	{
		return callMethod<jboolean>(
			"isScorablePropertyRankingEnabled",
			"()Z"
		);
	}
	inline jboolean SearchSpec::isVerbatimSearchEnabled() const
	{
		return callMethod<jboolean>(
			"isVerbatimSearchEnabled",
			"()Z"
		);
	}
	inline void SearchSpec::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
