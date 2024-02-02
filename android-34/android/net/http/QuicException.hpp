#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./QuicException.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	
	// Methods
} // namespace android::net::http

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"
#include "./HttpException.hpp"
#include "./NetworkException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
