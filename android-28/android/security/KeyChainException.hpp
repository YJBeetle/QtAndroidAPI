#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::security
{
	class KeyChainException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit KeyChainException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		KeyChainException(QAndroidJniObject obj);
		
		// Constructors
		KeyChainException();
		KeyChainException(jstring arg0);
		KeyChainException(jthrowable arg0);
		KeyChainException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::security

