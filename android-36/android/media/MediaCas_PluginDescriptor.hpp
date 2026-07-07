#pragma once

#include "../../JString.hpp"
#include "./MediaCas_PluginDescriptor.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString MediaCas_PluginDescriptor::getName() const
	{
		return callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		);
	}
	inline jint MediaCas_PluginDescriptor::getSystemId() const
	{
		return callMethod<jint>(
			"getSystemId",
			"()I"
		);
	}
	inline JString MediaCas_PluginDescriptor::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
