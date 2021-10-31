#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class SearchResult_MatchRange;
}

namespace android::app::appsearch
{
	class SearchResult_MatchInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchResult_MatchInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult_MatchInfo(QJniObject obj);
		
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

