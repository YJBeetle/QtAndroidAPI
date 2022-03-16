#pragma once

#include "./MediaCommunicationManager.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject MediaCommunicationManager::getSession2Tokens() const
	{
		return callObjectMethod(
			"getSession2Tokens",
			"()Ljava/util/List;"
		);
	}
	inline jint MediaCommunicationManager::getVersion() const
	{
		return callMethod<jint>(
			"getVersion",
			"()I"
		);
	}
} // namespace android::media

// Base class headers

