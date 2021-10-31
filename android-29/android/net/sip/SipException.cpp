#include "./SipException.hpp"

namespace android::net::sip
{
	// Fields
	
	// QAndroidJniObject forward
	SipException::SipException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
	
	// Constructors
	SipException::SipException()
		: java::lang::Exception(
			"android.net.sip.SipException",
			"()V"
		) {}
	SipException::SipException(jstring arg0)
		: java::lang::Exception(
			"android.net.sip.SipException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	SipException::SipException(jstring arg0, jthrowable arg1)
		: java::lang::Exception(
			"android.net.sip.SipException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		) {}
	
	// Methods
} // namespace android::net::sip

