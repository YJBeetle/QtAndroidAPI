#include "./ProcessedData.hpp"

namespace android::drm
{
	// Fields
	
	// QJniObject forward
	ProcessedData::ProcessedData(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring ProcessedData::getAccountId()
	{
		return callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray ProcessedData::getData()
	{
		return callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jstring ProcessedData::getSubscriptionId()
	{
		return callObjectMethod(
			"getSubscriptionId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::drm

