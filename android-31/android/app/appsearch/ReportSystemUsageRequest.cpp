#include "./ReportSystemUsageRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	ReportSystemUsageRequest::ReportSystemUsageRequest(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring ReportSystemUsageRequest::getDatabaseName()
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ReportSystemUsageRequest::getDocumentId()
	{
		return callObjectMethod(
			"getDocumentId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ReportSystemUsageRequest::getNamespace()
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ReportSystemUsageRequest::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jlong ReportSystemUsageRequest::getUsageTimestampMillis()
	{
		return callMethod<jlong>(
			"getUsageTimestampMillis",
			"()J"
		);
	}
} // namespace android::app::appsearch

