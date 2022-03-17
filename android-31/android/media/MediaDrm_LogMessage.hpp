#pragma once

#include "../../JString.hpp"
#include "./MediaDrm_LogMessage.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString MediaDrm_LogMessage::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline jint MediaDrm_LogMessage::getPriority() const
	{
		return callMethod<jint>(
			"getPriority",
			"()I"
		);
	}
	inline jlong MediaDrm_LogMessage::getTimestampMillis() const
	{
		return callMethod<jlong>(
			"getTimestampMillis",
			"()J"
		);
	}
	inline JString MediaDrm_LogMessage::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

