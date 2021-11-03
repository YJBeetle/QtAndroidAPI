#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "./AccountsException.hpp"


namespace android::accounts
{
	class NetworkErrorException : public android::accounts::AccountsException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit NetworkErrorException(const char *className, const char *sig, Ts...agv) : android::accounts::AccountsException(className, sig, std::forward<Ts>(agv)...) {}
		NetworkErrorException(QAndroidJniObject obj);
		
		// Constructors
		NetworkErrorException();
		NetworkErrorException(jstring arg0);
		NetworkErrorException(jthrowable arg0);
		NetworkErrorException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::accounts

