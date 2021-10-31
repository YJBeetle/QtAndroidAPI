#include "./ReportUsageRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	ReportUsageRequest::ReportUsageRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring ReportUsageRequest::getDocumentId()
	{
		return callObjectMethod(
			"getDocumentId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ReportUsageRequest::getNamespace()
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ReportUsageRequest::getUsageTimestampMillis()
	{
		return callMethod<jlong>(
			"getUsageTimestampMillis",
			"()J"
		);
	}
} // namespace android::app::appsearch

