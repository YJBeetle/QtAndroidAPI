#include "../../../JString.hpp"
#include "../../../JThrowable.hpp"
#include "./SipException.hpp"

namespace android::net::sip
{
	// Fields
	
	// Constructors
	SipException::SipException()
		: java::lang::Exception(
			"android.net.sip.SipException",
			"()V"
		) {}
	SipException::SipException(JString arg0)
		: java::lang::Exception(
			"android.net.sip.SipException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	SipException::SipException(JString arg0, JThrowable arg1)
		: java::lang::Exception(
			"android.net.sip.SipException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0.object<jstring>(),
			arg1.object<jthrowable>()
		) {}
	
	// Methods
} // namespace android::net::sip

