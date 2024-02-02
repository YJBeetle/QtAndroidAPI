#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::app::appsearch
{
	class SearchSuggestionSpec;
}
class JString;

namespace android::app::appsearch
{
	class SearchSuggestionSpec_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchSuggestionSpec_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchSuggestionSpec_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SearchSuggestionSpec_Builder(jint arg0);
		
		// Methods
		android::app::appsearch::SearchSuggestionSpec_Builder addFilterDocumentIds(JString arg0, JArray arg1) const;
		android::app::appsearch::SearchSuggestionSpec_Builder addFilterDocumentIds(JString arg0, JObject arg1) const;
		android::app::appsearch::SearchSuggestionSpec_Builder addFilterNamespaces(JArray arg0) const;
		android::app::appsearch::SearchSuggestionSpec_Builder addFilterNamespaces(JObject arg0) const;
		android::app::appsearch::SearchSuggestionSpec_Builder addFilterSchemas(JArray arg0) const;
		android::app::appsearch::SearchSuggestionSpec_Builder addFilterSchemas(JObject arg0) const;
		android::app::appsearch::SearchSuggestionSpec build() const;
		android::app::appsearch::SearchSuggestionSpec_Builder setRankingStrategy(jint arg0) const;
	};
} // namespace android::app::appsearch

