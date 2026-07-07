#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SearchSuggestionResult;
}
class JString;

namespace android::app::appsearch
{
	class SearchSuggestionResult_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchSuggestionResult_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchSuggestionResult_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SearchSuggestionResult_Builder();
		
		// Methods
		android::app::appsearch::SearchSuggestionResult build() const;
		android::app::appsearch::SearchSuggestionResult_Builder setSuggestedResult(JString arg0) const;
	};
} // namespace android::app::appsearch

