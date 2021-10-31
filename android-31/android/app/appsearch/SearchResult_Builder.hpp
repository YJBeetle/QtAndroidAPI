#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class GenericDocument;
}
namespace android::app::appsearch
{
	class SearchResult;
}
namespace android::app::appsearch
{
	class SearchResult_MatchInfo;
}

namespace android::app::appsearch
{
	class SearchResult_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchResult_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult_Builder(QAndroidJniObject obj);
		
		// Constructors
		SearchResult_Builder(jstring arg0, jstring arg1);
		
		// Methods
		android::app::appsearch::SearchResult_Builder addMatchInfo(android::app::appsearch::SearchResult_MatchInfo arg0);
		android::app::appsearch::SearchResult build();
		android::app::appsearch::SearchResult_Builder setGenericDocument(android::app::appsearch::GenericDocument arg0);
		android::app::appsearch::SearchResult_Builder setRankingSignal(jdouble arg0);
	};
} // namespace android::app::appsearch

