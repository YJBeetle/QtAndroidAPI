#pragma once

#include "../../JString.hpp"
#include "./URISyntaxException.def.hpp"

namespace java::net
{
	// Fields
	
	// Constructors
	inline URISyntaxException::URISyntaxException(JString arg0, JString arg1)
		: java::lang::Exception(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0.object<jstring>(),
			arg1.object<jstring>()
		) {}
	inline URISyntaxException::URISyntaxException(JString arg0, JString arg1, jint arg2)
		: java::lang::Exception(
			"java.net.URISyntaxException",
			"(Ljava/lang/String;Ljava/lang/String;I)V",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2
		) {}
	
	// Methods
	inline jint URISyntaxException::getIndex() const
	{
		return callMethod<jint>(
			"getIndex",
			"()I"
		);
	}
	inline JString URISyntaxException::getInput() const
	{
		return callObjectMethod(
			"getInput",
			"()Ljava/lang/String;"
		);
	}
	inline JString URISyntaxException::getMessage() const
	{
		return callObjectMethod(
			"getMessage",
			"()Ljava/lang/String;"
		);
	}
	inline JString URISyntaxException::getReason() const
	{
		return callObjectMethod(
			"getReason",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::net

// Base class headers
#include "../lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace java::net;
#endif
