#include "../../../JString.hpp"
#include "./ReportSystemUsageRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// QJniObject forward
	ReportSystemUsageRequest::ReportSystemUsageRequest(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString ReportSystemUsageRequest::getDatabaseName()
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
	JString ReportSystemUsageRequest::getDocumentId()
	{
		return callObjectMethod(
			"getDocumentId",
			"()Ljava/lang/String;"
		);
	}
	JString ReportSystemUsageRequest::getNamespace()
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	JString ReportSystemUsageRequest::getPackageName()
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jlong ReportSystemUsageRequest::getUsageTimestampMillis()
	{
		return callMethod<jlong>(
			"getUsageTimestampMillis",
			"()J"
		);
	}
} // namespace android::app::appsearch

