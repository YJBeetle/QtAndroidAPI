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
class JString;

namespace android::app::appsearch
{
	class GlobalSearchSession : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit GlobalSearchSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		GlobalSearchSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
		void reportSystemUsage(android::app::appsearch::ReportSystemUsageRequest arg0, JObject arg1, JObject arg2) const;
		android::app::appsearch::SearchResults search(JString arg0, android::app::appsearch::SearchSpec arg1) const;
	};
} // namespace android::app::appsearch

