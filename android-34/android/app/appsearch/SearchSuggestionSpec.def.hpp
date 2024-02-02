#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SearchSuggestionSpec : public JObject
	{
	public:
		// Fields
		static jint SUGGESTION_RANKING_STRATEGY_DOCUMENT_COUNT();
		static jint SUGGESTION_RANKING_STRATEGY_NONE();
		static jint SUGGESTION_RANKING_STRATEGY_TERM_FREQUENCY();
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchSuggestionSpec(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchSuggestionSpec(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getFilterDocumentIds() const;
		JObject getFilterNamespaces() const;
		JObject getFilterSchemas() const;
		jint getMaximumResultCount() const;
		jint getRankingStrategy() const;
	};
} // namespace android::app::appsearch

