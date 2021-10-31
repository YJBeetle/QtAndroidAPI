#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class SearchResult_MatchInfo;
}
namespace android::app::appsearch
{
	class SearchResult_MatchRange;
}

namespace android::app::appsearch
{
	class SearchResult_MatchInfo_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchResult_MatchInfo_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult_MatchInfo_Builder(QJniObject obj);
		
		// Constructors
		SearchResult_MatchInfo_Builder(jstring arg0);
		
		// Methods
		android::app::appsearch::SearchResult_MatchInfo build();
		android::app::appsearch::SearchResult_MatchInfo_Builder setExactMatchRange(android::app::appsearch::SearchResult_MatchRange arg0);
		android::app::appsearch::SearchResult_MatchInfo_Builder setSnippetRange(android::app::appsearch::SearchResult_MatchRange arg0);
	};
} // namespace android::app::appsearch

