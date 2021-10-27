#include "./ProcessedData.hpp"

namespace android::drm
{
	// Fields
	
	ProcessedData::ProcessedData(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jstring ProcessedData::getAccountId()
	{
		return __thiz.callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray ProcessedData::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jstring ProcessedData::getSubscriptionId()
	{
		return __thiz.callObjectMethod(
			"getSubscriptionId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::drm

