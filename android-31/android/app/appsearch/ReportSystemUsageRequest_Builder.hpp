#pragma once

#include "../../../JObject.hpp"

namespace android::app::appsearch
{
	class ReportSystemUsageRequest;
}
class JString;

namespace android::app::appsearch
{
	class ReportSystemUsageRequest_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReportSystemUsageRequest_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ReportSystemUsageRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		ReportSystemUsageRequest_Builder(JString arg0, JString arg1, JString arg2, JString arg3);
		
		// Methods
		android::app::appsearch::ReportSystemUsageRequest build();
		android::app::appsearch::ReportSystemUsageRequest_Builder setUsageTimestampMillis(jlong arg0);
	};
} // namespace android::app::appsearch

