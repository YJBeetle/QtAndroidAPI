#include "../../../JString.hpp"
#include "./ReportSystemUsageRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	JString ReportSystemUsageRequest::getDatabaseName() const
	{
		return callObjectMethod(
			"getDatabaseName",
			"()Ljava/lang/String;"
		);
	}
	JString ReportSystemUsageRequest::getDocumentId() const
	{
		return callObjectMethod(
			"getDocumentId",
			"()Ljava/lang/String;"
		);
	}
	JString ReportSystemUsageRequest::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	JString ReportSystemUsageRequest::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	jlong ReportSystemUsageRequest::getUsageTimestampMillis() const
	{
		return callMethod<jlong>(
			"getUsageTimestampMillis",
			"()J"
		);
	}
} // namespace android::app::appsearch

