#include "./ReportUsageRequest.hpp"
#include "../../../JString.hpp"
#include "./ReportUsageRequest_Builder.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	ReportUsageRequest_Builder::ReportUsageRequest_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	ReportUsageRequest_Builder::ReportUsageRequest_Builder(JString arg0, JString arg1)
		: JObject(
			"android.app.appsearch.ReportUsageRequest$Builder",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	
	// Methods
	android::app::appsearch::ReportUsageRequest ReportUsageRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/app/appsearch/ReportUsageRequest;"
		);
	}
	android::app::appsearch::ReportUsageRequest_Builder ReportUsageRequest_Builder::setUsageTimestampMillis(jlong arg0) const
	{
		return callObjectMethod(
			"setUsageTimestampMillis",
			"(J)Landroid/app/appsearch/ReportUsageRequest$Builder;",
			arg0
		);
	}
} // namespace android::app::appsearch

