#pragma once

#include "../../../JObject.hpp"

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
	class GlobalSearchSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GlobalSearchSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GlobalSearchSession(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void reportSystemUsage(android::app::appsearch::ReportSystemUsageRequest arg0, JObject arg1, JObject arg2);
		android::app::appsearch::SearchResults search(jstring arg0, android::app::appsearch::SearchSpec arg1);
	};
} // namespace android::app::appsearch

