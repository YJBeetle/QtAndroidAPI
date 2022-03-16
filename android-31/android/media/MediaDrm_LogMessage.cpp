#include "../../JString.hpp"
#include "./MediaDrm_LogMessage.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	JString MediaDrm_LogMessage::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	jint MediaDrm_LogMessage::getPriority() const
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	jlong MediaDrm_LogMessage::getTimestampMillis() const
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	JString MediaDrm_LogMessage::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

