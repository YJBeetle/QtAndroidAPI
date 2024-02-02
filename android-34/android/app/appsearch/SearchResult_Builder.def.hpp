#pragma once

#include "../../../JObject.hpp"

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
class JString;

namespace android::app::appsearch
{
	class SearchResult_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchResult_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		SearchResult_Builder(JString arg0, JString arg1);
		
		// Methods
		android::app::appsearch::SearchResult_Builder addJoinedResult(android::app::appsearch::SearchResult arg0) const;
		android::app::appsearch::SearchResult_Builder addMatchInfo(android::app::appsearch::SearchResult_MatchInfo arg0) const;
		android::app::appsearch::SearchResult build() const;
		android::app::appsearch::SearchResult_Builder setGenericDocument(android::app::appsearch::GenericDocument arg0) const;
		android::app::appsearch::SearchResult_Builder setRankingSignal(jdouble arg0) const;
	};
} // namespace android::app::appsearch

