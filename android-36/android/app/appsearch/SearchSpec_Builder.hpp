#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "./JoinSpec.def.hpp"
#include "./SearchSpec.def.hpp"
#include "../../../JString.hpp"
#include "./SearchSpec_Builder.def.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	inline SearchSpec_Builder::SearchSpec_Builder()
		: JObject(
			"android.app.appsearch.SearchSpec$Builder",
			"()V"
		) {}
	inline SearchSpec_Builder::SearchSpec_Builder(android::app::appsearch::SearchSpec arg0)
		: JObject(
			"android.app.appsearch.SearchSpec$Builder",
			"(Landroid/app/appsearch/SearchSpec;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addEmbeddingParameters(JArray arg0) const
	{
		return callObjectMethod(
			"addEmbeddingParameters",
			"([Landroid/app/appsearch/EmbeddingVector;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addEmbeddingParameters(JObject arg0) const
	{
		return callObjectMethod(
			"addEmbeddingParameters",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterDocumentIds(JArray arg0) const
	{
		return callObjectMethod(
			"addFilterDocumentIds",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterDocumentIds(JObject arg0) const
	{
		return callObjectMethod(
			"addFilterDocumentIds",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterNamespaces(JArray arg0) const
	{
		return callObjectMethod(
			"addFilterNamespaces",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterNamespaces(JObject arg0) const
	{
		return callObjectMethod(
			"addFilterNamespaces",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterPackageNames(JArray arg0) const
	{
		return callObjectMethod(
			"addFilterPackageNames",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterPackageNames(JObject arg0) const
	{
		return callObjectMethod(
			"addFilterPackageNames",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterProperties(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addFilterProperties",
			"(Ljava/lang/String;Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterPropertyPaths(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addFilterPropertyPaths",
			"(Ljava/lang/String;Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterSchemas(JArray arg0) const
	{
		return callObjectMethod(
			"addFilterSchemas",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addFilterSchemas(JObject arg0) const
	{
		return callObjectMethod(
			"addFilterSchemas",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addInformationalRankingExpressions(JArray arg0) const
	{
		return callObjectMethod(
			"addInformationalRankingExpressions",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addInformationalRankingExpressions(JObject arg0) const
	{
		return callObjectMethod(
			"addInformationalRankingExpressions",
			"(Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addProjection(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addProjection",
			"(Ljava/lang/String;Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addProjectionPaths(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"addProjectionPaths",
			"(Ljava/lang/String;Ljava/util/Collection;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addSearchStringParameters(JArray arg0) const
	{
		return callObjectMethod(
			"addSearchStringParameters",
			"([Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jarray>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::addSearchStringParameters(JObject arg0) const
	{
		return callObjectMethod(
			"addSearchStringParameters",
			"(Ljava/util/List;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSpec SearchSpec_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/SearchSpec;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearEmbeddingParameters() const
	{
		return callObjectMethod(
			"clearEmbeddingParameters",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearFilterDocumentIds() const
	{
		return callObjectMethod(
			"clearFilterDocumentIds",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearFilterNamespaces() const
	{
		return callObjectMethod(
			"clearFilterNamespaces",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearFilterPackageNames() const
	{
		return callObjectMethod(
			"clearFilterPackageNames",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearFilterProperties() const
	{
		return callObjectMethod(
			"clearFilterProperties",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearFilterSchemas() const
	{
		return callObjectMethod(
			"clearFilterSchemas",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearInformationalRankingExpressions() const
	{
		return callObjectMethod(
			"clearInformationalRankingExpressions",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearJoinSpec() const
	{
		return callObjectMethod(
			"clearJoinSpec",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearProjections() const
	{
		return callObjectMethod(
			"clearProjections",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearPropertyWeights() const
	{
		return callObjectMethod(
			"clearPropertyWeights",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearResultGrouping() const
	{
		return callObjectMethod(
			"clearResultGrouping",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearSearchSourceLogTag() const
	{
		return callObjectMethod(
			"clearSearchSourceLogTag",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::clearSearchStringParameters() const
	{
		return callObjectMethod(
			"clearSearchStringParameters",
			"()Landroid/app/appsearch/SearchSpec$Builder;"
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setDefaultEmbeddingSearchMetricType(jint arg0) const
	{
		return callObjectMethod(
			"setDefaultEmbeddingSearchMetricType",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setJoinSpec(android::app::appsearch::JoinSpec arg0) const
	{
		return callObjectMethod(
			"setJoinSpec",
			"(Landroid/app/appsearch/JoinSpec;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setListFilterHasPropertyFunctionEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setListFilterHasPropertyFunctionEnabled",
			"(Z)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setListFilterMatchScoreExpressionFunctionEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setListFilterMatchScoreExpressionFunctionEnabled",
			"(Z)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setListFilterQueryLanguageEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setListFilterQueryLanguageEnabled",
			"(Z)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setMaxSnippetSize(jint arg0) const
	{
		return callObjectMethod(
			"setMaxSnippetSize",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setNumericSearchEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setNumericSearchEnabled",
			"(Z)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setOrder(jint arg0) const
	{
		return callObjectMethod(
			"setOrder",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setPropertyWeightPaths(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setPropertyWeightPaths",
			"(Ljava/lang/String;Ljava/util/Map;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setPropertyWeights(JString arg0, JObject arg1) const
	{
		return callObjectMethod(
			"setPropertyWeights",
			"(Ljava/lang/String;Ljava/util/Map;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setRankingStrategy(jint arg0) const
	{
		return callObjectMethod(
			"setRankingStrategy",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setRankingStrategy(JString arg0) const
	{
		return callObjectMethod(
			"setRankingStrategy",
			"(Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setResultCountPerPage(jint arg0) const
	{
		return callObjectMethod(
			"setResultCountPerPage",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setResultGrouping(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setResultGrouping",
			"(II)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0,
			arg1
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setScorablePropertyRankingEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setScorablePropertyRankingEnabled",
			"(Z)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setSearchSourceLogTag(JString arg0) const
	{
		return callObjectMethod(
			"setSearchSourceLogTag",
			"(Ljava/lang/String;)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setSnippetCount(jint arg0) const
	{
		return callObjectMethod(
			"setSnippetCount",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setSnippetCountPerProperty(jint arg0) const
	{
		return callObjectMethod(
			"setSnippetCountPerProperty",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setTermMatch(jint arg0) const
	{
		return callObjectMethod(
			"setTermMatch",
			"(I)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
	inline android::app::appsearch::SearchSpec_Builder SearchSpec_Builder::setVerbatimSearchEnabled(jboolean arg0) const
	{
		return callObjectMethod(
			"setVerbatimSearchEnabled",
			"(Z)Landroid/app/appsearch/SearchSpec$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch;
#endif
