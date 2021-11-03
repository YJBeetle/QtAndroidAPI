#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class SearchResult_MatchInfo;
}
namespace android::app::appsearch
{
	class SearchResult_MatchRange;
}
class JString;

namespace android::app::appsearch
{
	class SearchResult_MatchInfo_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchResult_MatchInfo_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult_MatchInfo_Builder(QAndroidJniObject obj);
		
		// Constructors
		SearchResult_MatchInfo_Builder(JString arg0);
		
		// Methods
		android::app::appsearch::SearchResult_MatchInfo build() const;
		android::app::appsearch::SearchResult_MatchInfo_Builder setExactMatchRange(android::app::appsearch::SearchResult_MatchRange arg0) const;
		android::app::appsearch::SearchResult_MatchInfo_Builder setSnippetRange(android::app::appsearch::SearchResult_MatchRange arg0) const;
	};
} // namespace android::app::appsearch

