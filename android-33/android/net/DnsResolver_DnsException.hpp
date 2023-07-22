#pragma once

#include "../../JThrowable.hpp"
#include "./DnsResolver_DnsException.def.hpp"

namespace android::net
{
	// Fields
	inline jint DnsResolver_DnsException::code()
	{
		return getField<jint>(
			"code"
		);
	}
	
	// Constructors
	inline DnsResolver_DnsException::DnsResolver_DnsException(jint arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.net.DnsResolver$DnsException",
			"(ILjava/lang/Throwable;)V",
			arg0,
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::net

// Base class headers
#include "../../java/lang/Exception.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::net;
#endif
