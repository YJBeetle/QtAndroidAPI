#include "./MediaDrm_LogMessage.hpp"

namespace android::media
{
	// Fields
	
	// QAndroidJniObject forward
	MediaDrm_LogMessage::MediaDrm_LogMessage(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jstring MediaDrm_LogMessage::getMessage()
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		).object<jstring>();
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
	jstring MediaDrm_LogMessage::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media

