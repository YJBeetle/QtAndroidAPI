#pragma once

#include "../../../JObject.hpp"

class JArray;
class JArray;
namespace android::app::appsearch
{
	class JoinSpec;
}
namespace android::app::appsearch
{
	class SearchSpec;
}
class JString;

namespace android::app::appsearch
{
	class SearchSpec_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchSpec_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchSpec_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SearchSpec_Builder();
		SearchSpec_Builder(android::app::appsearch::SearchSpec arg0);
		
		// Methods
		android::app::appsearch::SearchSpec_Builder addEmbeddingParameters(JArray arg0) const;
		android::app::appsearch::SearchSpec_Builder addEmbeddingParameters(JObject arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterDocumentIds(JArray arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterDocumentIds(JObject arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterNamespaces(JArray arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterNamespaces(JObject arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterPackageNames(JArray arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterPackageNames(JObject arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterProperties(JString arg0, JObject arg1) const;
		android::app::appsearch::SearchSpec_Builder addFilterPropertyPaths(JString arg0, JObject arg1) const;
		android::app::appsearch::SearchSpec_Builder addFilterSchemas(JArray arg0) const;
		android::app::appsearch::SearchSpec_Builder addFilterSchemas(JObject arg0) const;
		android::app::appsearch::SearchSpec_Builder addInformationalRankingExpressions(JArray arg0) const;
		android::app::appsearch::SearchSpec_Builder addInformationalRankingExpressions(JObject arg0) const;
		android::app::appsearch::SearchSpec_Builder addProjection(JString arg0, JObject arg1) const;
		android::app::appsearch::SearchSpec_Builder addProjectionPaths(JString arg0, JObject arg1) const;
		android::app::appsearch::SearchSpec_Builder addSearchStringParameters(JArray arg0) const;
		android::app::appsearch::SearchSpec_Builder addSearchStringParameters(JObject arg0) const;
		android::app::appsearch::SearchSpec build() const;
		android::app::appsearch::SearchSpec_Builder clearEmbeddingParameters() const;
		android::app::appsearch::SearchSpec_Builder clearFilterDocumentIds() const;
		android::app::appsearch::SearchSpec_Builder clearFilterNamespaces() const;
		android::app::appsearch::SearchSpec_Builder clearFilterPackageNames() const;
		android::app::appsearch::SearchSpec_Builder clearFilterProperties() const;
		android::app::appsearch::SearchSpec_Builder clearFilterSchemas() const;
		android::app::appsearch::SearchSpec_Builder clearInformationalRankingExpressions() const;
		android::app::appsearch::SearchSpec_Builder clearJoinSpec() const;
		android::app::appsearch::SearchSpec_Builder clearProjections() const;
		android::app::appsearch::SearchSpec_Builder clearPropertyWeights() const;
		android::app::appsearch::SearchSpec_Builder clearResultGrouping() const;
		android::app::appsearch::SearchSpec_Builder clearSearchSourceLogTag() const;
		android::app::appsearch::SearchSpec_Builder clearSearchStringParameters() const;
		android::app::appsearch::SearchSpec_Builder setDefaultEmbeddingSearchMetricType(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setJoinSpec(android::app::appsearch::JoinSpec arg0) const;
		android::app::appsearch::SearchSpec_Builder setListFilterHasPropertyFunctionEnabled(jboolean arg0) const;
		android::app::appsearch::SearchSpec_Builder setListFilterMatchScoreExpressionFunctionEnabled(jboolean arg0) const;
		android::app::appsearch::SearchSpec_Builder setListFilterQueryLanguageEnabled(jboolean arg0) const;
		android::app::appsearch::SearchSpec_Builder setMaxSnippetSize(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setNumericSearchEnabled(jboolean arg0) const;
		android::app::appsearch::SearchSpec_Builder setOrder(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setPropertyWeightPaths(JString arg0, JObject arg1) const;
		android::app::appsearch::SearchSpec_Builder setPropertyWeights(JString arg0, JObject arg1) const;
		android::app::appsearch::SearchSpec_Builder setRankingStrategy(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setRankingStrategy(JString arg0) const;
		android::app::appsearch::SearchSpec_Builder setResultCountPerPage(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setResultGrouping(jint arg0, jint arg1) const;
		android::app::appsearch::SearchSpec_Builder setScorablePropertyRankingEnabled(jboolean arg0) const;
		android::app::appsearch::SearchSpec_Builder setSearchSourceLogTag(JString arg0) const;
		android::app::appsearch::SearchSpec_Builder setSnippetCount(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setSnippetCountPerProperty(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setTermMatch(jint arg0) const;
		android::app::appsearch::SearchSpec_Builder setVerbatimSearchEnabled(jboolean arg0) const;
	};
} // namespace android::app::appsearch

