#include "../../../JString.hpp"
#include "./ReportUsageRequest.hpp"

namespace android::app::appsearch
{
	// Fields
	
	// Constructors
	
	// Methods
	JString ReportUsageRequest::getDocumentId() const
	{
		return callObjectMethod(
			"getDocumentId",
			"()Ljava/lang/String;"
		);
	}
	JString ReportUsageRequest::getNamespace() const
	{
		return callObjectMethod(
			"getNamespace",
			"()Ljava/lang/String;"
		);
	}
	jlong ReportUsageRequest::getUsageTimestampMillis() const
	{
		return callMethod<jlong>(
			"getUsageTimestampMillis",
			"()J"
		);
	}
} // namespace android::app::appsearch

