#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class JoinSpec;
}
namespace android::os
{
	class Parcel;
}
class JString;

namespace android::app::appsearch
{
	class SearchSpec : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint EMBEDDING_SEARCH_METRIC_TYPE_COSINE();
		static jint EMBEDDING_SEARCH_METRIC_TYPE_DEFAULT();
		static jint EMBEDDING_SEARCH_METRIC_TYPE_DOT_PRODUCT();
		static jint EMBEDDING_SEARCH_METRIC_TYPE_EUCLIDEAN();
		static jint GROUPING_TYPE_PER_NAMESPACE();
		static jint GROUPING_TYPE_PER_PACKAGE();
		static jint GROUPING_TYPE_PER_SCHEMA();
		static jint ORDER_ASCENDING();
		static jint ORDER_DESCENDING();
		static JString PROJECTION_SCHEMA_TYPE_WILDCARD();
		static jint RANKING_STRATEGY_ADVANCED_RANKING_EXPRESSION();
		static jint RANKING_STRATEGY_CREATION_TIMESTAMP();
		static jint RANKING_STRATEGY_DOCUMENT_SCORE();
		static jint RANKING_STRATEGY_JOIN_AGGREGATE_SCORE();
		static jint RANKING_STRATEGY_NONE();
		static jint RANKING_STRATEGY_RELEVANCE_SCORE();
		static jint RANKING_STRATEGY_SYSTEM_USAGE_COUNT();
		static jint RANKING_STRATEGY_SYSTEM_USAGE_LAST_USED_TIMESTAMP();
		static jint RANKING_STRATEGY_USAGE_COUNT();
		static jint RANKING_STRATEGY_USAGE_LAST_USED_TIMESTAMP();
		static JString SCHEMA_TYPE_WILDCARD();
		static jint TERM_MATCH_EXACT_ONLY();
		static jint TERM_MATCH_PREFIX();
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		JString getAdvancedRankingExpression() const;
		jint getDefaultEmbeddingSearchMetricType() const;
		JObject getEmbeddingParameters() const;
		JObject getFilterDocumentIds() const;
		JObject getFilterNamespaces() const;
		JObject getFilterPackageNames() const;
		JObject getFilterProperties() const;
		JObject getFilterSchemas() const;
		JObject getInformationalRankingExpressions() const;
		android::app::appsearch::JoinSpec getJoinSpec() const;
		jint getMaxSnippetSize() const;
		jint getOrder() const;
		JObject getProjectionPaths() const;
		JObject getProjections() const;
		JObject getPropertyWeightPaths() const;
		JObject getPropertyWeights() const;
		jint getRankingStrategy() const;
		jint getResultCountPerPage() const;
		jint getResultGroupingLimit() const;
		jint getResultGroupingTypeFlags() const;
		JString getSearchSourceLogTag() const;
		JObject getSearchStringParameters() const;
		jint getSnippetCount() const;
		jint getSnippetCountPerProperty() const;
		jint getTermMatch() const;
		jboolean isListFilterHasPropertyFunctionEnabled() const;
		jboolean isListFilterMatchScoreExpressionFunctionEnabled() const;
		jboolean isListFilterQueryLanguageEnabled() const;
		jboolean isNumericSearchEnabled() const;
		jboolean isScorablePropertyRankingEnabled() const;
		jboolean isVerbatimSearchEnabled() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::app::appsearch

