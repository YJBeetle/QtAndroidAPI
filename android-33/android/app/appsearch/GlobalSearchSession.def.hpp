#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class GetByDocumentIdRequest;
}
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
namespace android::app::appsearch::observer
{
	class ObserverSpec;
}
class JString;

namespace android::app::appsearch
{
	class GlobalSearchSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit GlobalSearchSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GlobalSearchSession(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		void getByDocumentId(JString arg0, JString arg1, android::app::appsearch::GetByDocumentIdRequest arg2, JObject arg3, JObject arg4) const;
		void getSchema(JString arg0, JString arg1, JObject arg2, JObject arg3) const;
		void registerObserverCallback(JString arg0, android::app::appsearch::observer::ObserverSpec arg1, JObject arg2, JObject arg3) const;
		void reportSystemUsage(android::app::appsearch::ReportSystemUsageRequest arg0, JObject arg1, JObject arg2) const;
		android::app::appsearch::SearchResults search(JString arg0, android::app::appsearch::SearchSpec arg1) const;
		void unregisterObserverCallback(JString arg0, JObject arg1) const;
	};
} // namespace android::app::appsearch

