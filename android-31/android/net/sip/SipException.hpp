#pragma once

#include "../../../JObject.hpp"
#include "../../../java/lang/Exception.hpp"


namespace android::net::sip
{
	class SipException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit SipException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		SipException(QJniObject obj);
		
		// Constructors
		SipException();
		SipException(jstring arg0);
		SipException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::net::sip

