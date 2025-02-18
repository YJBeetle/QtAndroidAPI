#pragma once

#include "./AccountsException.def.hpp"

class JString;
class JThrowable;

namespace android::accounts
{
	class NetworkErrorException : public android::accounts::AccountsException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit NetworkErrorException(const char *className, const char *sig, Ts...agv) : android::accounts::AccountsException(className, sig, std::forward<Ts>(agv)...) {}
		NetworkErrorException(QJniObject obj) : android::accounts::AccountsException(obj) {}
		
		// Constructors
		NetworkErrorException();
		NetworkErrorException(JString arg0);
		NetworkErrorException(JThrowable arg0);
		NetworkErrorException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::accounts

