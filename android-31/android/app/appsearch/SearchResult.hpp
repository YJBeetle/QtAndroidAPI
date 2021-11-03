#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GenericDocument;
}

namespace android::app::appsearch
{
	class SearchResult : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDatabaseName();
		android::app::appsearch::GenericDocument getGenericDocument();
		JObject getMatchInfos();
		jstring getPackageName();
		jdouble getRankingSignal();
	};
} // namespace android::app::appsearch

