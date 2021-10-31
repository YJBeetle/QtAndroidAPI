#include "./ReportUsageRequest.hpp"
#include "./ReportUsageRequest_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	ReportUsageRequest_Builder::ReportUsageRequest_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	ReportUsageRequest_Builder::ReportUsageRequest_Builder(jstring arg0, jstring arg1)
		: __JniBaseClass(
			"android.app.appsearch.ReportUsageRequest$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	android::app::appsearch::ReportUsageRequest ReportUsageRequest_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/ReportUsageRequest;"
		);
	}
	android::app::appsearch::ReportUsageRequest_Builder ReportUsageRequest_Builder::setUsageTimestampMillis(jlong arg0)
	{
		return callObjectMethod(
			"setUsageTimestampMillis",
			"(J)Landroid/app/appsearch/ReportUsageRequest$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

