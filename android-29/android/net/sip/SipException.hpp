#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../../java/lang/Exception.hpp"


namespace android::net::sip
{
	class SipException : public java::lang::Exception
	{
	public:
		// Fields
		
		SipException(QAndroidJniObject obj);
		// Constructors
		SipException();
		SipException(jstring &arg0);
		SipException(const QString &arg0);
		SipException(jstring &arg0, jthrowable &arg1);
		SipException(const QString &arg0, jthrowable &arg1);
		
		// Methods
	};
} // namespace android::net::sip

