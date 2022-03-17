#pragma once

#include "../../java/lang/Exception.def.hpp"

class JString;
class JThrowable;

namespace android::accounts
{
	class AccountsException : public java::lang::Exception
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit AccountsException(const char *className, const char *sig, Ts...agv) : java::lang::Exception(className, sig, std::forward<Ts>(agv)...) {}
		AccountsException(QAndroidJniObject obj) : java::lang::Exception(obj) {}
		
		// Constructors
		AccountsException();
		AccountsException(JString arg0);
		AccountsException(JThrowable arg0);
		AccountsException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::accounts

