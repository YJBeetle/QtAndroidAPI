#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GenericDocument;
}
class JString;

namespace android::app::appsearch
{
	class SearchResult : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		JString getDatabaseName();
		android::app::appsearch::GenericDocument getGenericDocument();
		JObject getMatchInfos();
		JString getPackageName();
		jdouble getRankingSignal();
	};
} // namespace android::app::appsearch

