#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class GenericDocument;
}

namespace android::app::appsearch
{
	class SearchResult : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SearchResult(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		SearchResult(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getDatabaseName();
		android::app::appsearch::GenericDocument getGenericDocument();
		__JniBaseClass getMatchInfos();
		jstring getPackageName();
		jdouble getRankingSignal();
	};
} // namespace android::app::appsearch

