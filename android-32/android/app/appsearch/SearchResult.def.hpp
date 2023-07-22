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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SearchResult(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JString getDatabaseName() const;
		android::app::appsearch::GenericDocument getGenericDocument() const;
		JObject getMatchInfos() const;
		JString getPackageName() const;
		jdouble getRankingSignal() const;
	};
} // namespace android::app::appsearch

