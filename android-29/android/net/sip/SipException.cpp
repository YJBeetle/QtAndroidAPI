#include "./SipException.hpp"

namespace android::net::sip
{
	// Fields
	
	SipException::SipException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SipException::SipException()
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipException",
			"()V"
		);
	}
	SipException::SipException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	SipException::SipException(jstring arg0, jthrowable arg1)
	{
		__thiz = QAndroidJniObject(
			"android.net.sip.SipException",
			"(Ljava/lang/String;Ljava/lang/Throwable;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
} // namespace android::net::sip

