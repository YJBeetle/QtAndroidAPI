#include "./ReportSystemUsageRequest.hpp"
#include "./ReportSystemUsageRequest_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	ReportSystemUsageRequest_Builder::ReportSystemUsageRequest_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ReportSystemUsageRequest_Builder::ReportSystemUsageRequest_Builder(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
		: __JniBaseClass(
			"android.app.appsearch.ReportSystemUsageRequest$Builder",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	android::app::appsearch::ReportSystemUsageRequest ReportSystemUsageRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/ReportSystemUsageRequest;"
		);
	}
	android::app::appsearch::ReportSystemUsageRequest_Builder ReportSystemUsageRequest_Builder::setUsageTimestampMillis(jlong arg0)
	{
		return callObjectMethod(
			"setUsageTimestampMillis",
			"(J)Landroid/app/appsearch/ReportSystemUsageRequest$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

