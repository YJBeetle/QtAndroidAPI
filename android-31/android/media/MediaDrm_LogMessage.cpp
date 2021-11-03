#include "../../JString.hpp"
#include "./MediaDrm_LogMessage.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaDrm_LogMessage::MediaDrm_LogMessage(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	JString MediaDrm_LogMessage::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	jint MediaDrm_LogMessage::getPriority()
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	jlong MediaDrm_LogMessage::getTimestampMillis()
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	JString MediaDrm_LogMessage::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

