#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"


namespace android::accounts
{
	class AccountsException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccountsException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		AccountsException(QAndroidJniObject obj);
		
		// Constructors
		AccountsException();
		AccountsException(jstring arg0);
		AccountsException(jthrowable arg0);
		AccountsException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::accounts

