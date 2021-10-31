#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class ReportSystemUsageRequest;
}
namespace android::app::appsearch
{
	class SearchResults;
}
namespace android::app::appsearch
{
	class SearchSpec;
}

namespace android::app::appsearch
{
	class GlobalSearchSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GlobalSearchSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		GlobalSearchSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void reportSystemUsage(android::app::appsearch::ReportSystemUsageRequest arg0, __JniBaseClass arg1, __JniBaseClass arg2);
		android::app::appsearch::SearchResults search(jstring arg0, android::app::appsearch::SearchSpec arg1);
	};
} // namespace android::app::appsearch

