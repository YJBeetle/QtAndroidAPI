#pragma once

#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SipException.def.hpp"

namespace android::net::sip
{
	// Fields
	
	// Constructors
	inline SipException::SipException()
		: java::lang::Exception(
			"android.net.sip.SipException",
			"()V"
		) {}
	inline SipException::SipException(JString arg0)
		: java::lang::Exception(
			"android.net.sip.SipException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline SipException::SipException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.net.sip.SipException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::net::sip

// Base class headers
#include "../../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net::sip;
#endif
