#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SearchResult_MatchRange;
}

namespace android::app::appsearch
{
	class SearchResult_MatchInfo : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchResult_MatchInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult_MatchInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getExactMatch();
		android::app::appsearch::SearchResult_MatchRange getExactMatchRange();
		jstring getFullText();
		jstring getPropertyPath();
		jstring getSnippet();
		android::app::appsearch::SearchResult_MatchRange getSnippetRange();
	};
} // namespace android::app::appsearch

