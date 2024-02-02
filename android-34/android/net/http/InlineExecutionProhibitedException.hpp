#pragma once

#include "./InlineExecutionProhibitedException.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline InlineExecutionProhibitedException::InlineExecutionProhibitedException()
		: java::util::concurrent::RejectedExecutionException(
			"android.net.http.InlineExecutionProhibitedException",
			"()V"
		) {}
	
	// Methods
} // namespace android::net::http

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"
#include "../../../java/util/concurrent/RejectedExecutionException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
