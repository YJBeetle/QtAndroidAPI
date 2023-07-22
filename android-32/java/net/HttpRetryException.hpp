#pragma once

#include "../../JString.hpp"
#include "./HttpRetryException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline HttpRetryException::HttpRetryException(JString arg0, jint arg1)
		: java::io::IOException(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1
		) {}
	inline HttpRetryException::HttpRetryException(JString arg0, jint arg1, JString arg2)
		: java::io::IOException(
			"java.net.HttpRetryException",
			"(Ljava/lang/String;ILjava/lang/String;)V",
			arg0.object<jstring>(),
			arg1,
			arg2.object<jstring>()
		) {}
	
	// Methods
	inline JString HttpRetryException::getLocation() const
	{
		return callObjectMethod(
			"getLocation",
			"()Ljava/lang/String;"
		);
	}
	inline JString HttpRetryException::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
	inline jint HttpRetryException::responseCode() const
	{
		return callMethod<jint>(
			"responseCode",
			"()I"
		);
	}
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"
#include "../io/IOException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
