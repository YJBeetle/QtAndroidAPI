#include "../../../JString.hpp"
#include "./ReportUsageRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QAndroidJniObject forward
	ReportUsageRequest::ReportUsageRequest(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString ReportUsageRequest::getDocumentId()
	{
		return callObjectMethod(
			"getDocumentId",
			"()Ljava/lang/String;"
		);
	}
	JString ReportUsageRequest::getNamespace()
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	jlong ReportUsageRequest::getUsageTimestampMillis()
	{
		return callMethod<jlong>(
			"getUsageTimestampMillis",
			"()J"
		);
	}
} // namespace android::app::appsearch

