#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./HttpException.def.hpp"

namespace android::net::http
{
	// Fields
	
	// Constructors
	inline HttpException::HttpException(JString arg0, JThrowable arg1)
		: java::io::IOException(
			"android.net.http.HttpException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::net::http

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::http;
#endif
