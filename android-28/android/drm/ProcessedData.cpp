#include "./ProcessedData.hpp"

namespace android::drm
{
	// Fields
	
	// QAndroidJniObject forward
	ProcessedData::ProcessedData(QAndroidJniObject obj) : JObject(obj) {}
	
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

