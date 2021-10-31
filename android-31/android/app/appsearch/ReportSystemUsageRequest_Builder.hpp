#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::app::appsearch
{
	class ReportSystemUsageRequest;
}

namespace android::app::appsearch
{
	class ReportSystemUsageRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ReportSystemUsageRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ReportSystemUsageRequest_Builder(QAndroidJniObject obj);
		
		// Constructors
		ReportSystemUsageRequest_Builder(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		
		// Methods
		android::app::appsearch::ReportSystemUsageRequest build();
		android::app::appsearch::ReportSystemUsageRequest_Builder setUsageTimestampMillis(jlong arg0);
	};
} // namespace android::app::appsearch

