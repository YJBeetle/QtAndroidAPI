#pragma once

#include "./HeaderBlock.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline HeaderBlock::HeaderBlock()
		: JObject(
			"android.net.http.HeaderBlock",
			"()V"
		) {}
	
	// Methods
	inline JObject HeaderBlock::getAsList() const
	{
		return callObjectMethod(
			"getAsList",
			"()Ljava/util/List;"
		);
	}
	inline JObject HeaderBlock::getAsMap() const
	{
		return callObjectMethod(
			"getAsMap",
			"()Ljava/util/Map;"
		);
	}
} // namespace android::net::http

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
