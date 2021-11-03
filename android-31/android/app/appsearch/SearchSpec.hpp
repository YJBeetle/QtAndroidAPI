#pragma once

#include "../../../JObject.hpp"


namespace android::app::appsearch
{
	class SearchSpec : public JObject
	{
	public:
		// Fields
		static jint GROUPING_TYPE_PER_NAMESPACE();
		static jint GROUPING_TYPE_PER_PACKAGE();
		static jint ORDER_ASCENDING();
		static jint ORDER_DESCENDING();
		static jstring PROJECTION_SCHEMA_TYPE_WILDCARD();
		static jint RANKING_STRATEGY_CREATION_TIMESTAMP();
		static jint RANKING_STRATEGY_DOCUMENT_SCORE();
		static jint RANKING_STRATEGY_NONE();
		static jint RANKING_STRATEGY_RELEVANCE_SCORE();
		static jint RANKING_STRATEGY_SYSTEM_USAGE_COUNT();
		static jint RANKING_STRATEGY_SYSTEM_USAGE_LAST_USED_TIMESTAMP();
		static jint RANKING_STRATEGY_USAGE_COUNT();
		static jint RANKING_STRATEGY_USAGE_LAST_USED_TIMESTAMP();
		static jint TERM_MATCH_EXACT_ONLY();
		static jint TERM_MATCH_PREFIX();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchSpec(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getFilterNamespaces();
		JObject getFilterPackageNames();
		JObject getFilterSchemas();
		jint getMaxSnippetSize();
		jint getOrder();
		JObject getProjections();
		jint getRankingStrategy();
		jint getResultCountPerPage();
		jint getResultGroupingLimit();
		jint getResultGroupingTypeFlags();
		jint getSnippetCount();
		jint getSnippetCountPerProperty();
		jint getTermMatch();
	};
} // namespace android::app::appsearch

