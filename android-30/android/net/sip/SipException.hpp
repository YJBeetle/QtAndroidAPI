#pragma once

#include "../../../java/lang/Exception.hpp"

class JString;
class JThrowable;

namespace android::net::sip
{
	class SipException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit SipException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		SipException(QAndroidJniObject obj);
		
		// Constructors
		SipException();
		SipException(JString arg0);
		SipException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::net::sip

