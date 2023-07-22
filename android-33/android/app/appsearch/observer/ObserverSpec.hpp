#pragma once

#include "./ObserverSpec.def.hpp"

namespace android::app::appsearch::observer
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JObject ObserverSpec::getFilterSchemas() const
	{
		return callObjectMethod(
			"getFilterSchemas",
			"()Ljava/util/Set;"
		);
	}
} // namespace android::app::appsearch::observer

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch::observer;
#endif
