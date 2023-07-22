#pragma once

#include "../../JString.hpp"
#include "../../JThrowable.hpp"
#include "./KeyChainException.def.hpp"

namespace android::security
{
	// Fields
	
	// Constructors
	inline KeyChainException::KeyChainException()
		: java::lang::Exception(
			"android.security.KeyChainException",
			"()V"
		) {}
	inline KeyChainException::KeyChainException(JString arg0)
		: java::lang::Exception(
			"android.security.KeyChainException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline KeyChainException::KeyChainException(JThrowable arg0)
		: java::lang::Exception(
			"android.security.KeyChainException",
			"(Ljava/lang/Throwable;)V",
			arg0.object<jthrowable>()
		) {}
	inline KeyChainException::KeyChainException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.security.KeyChainException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::security

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::security;
#endif
