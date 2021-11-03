#pragma once

#include "./AccountsException.hpp"

class JString;
class JThrowable;

namespace android::accounts
{
	class OperationCanceledException : public android::accounts::AccountsException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit OperationCanceledException(const char *className, const char *sig, Ts...agv) : android::accounts::AccountsException(className, sig, std::forward<Ts>(agv)...) {}
		OperationCanceledException(QAndroidJniObject obj);
		
		// Constructors
		OperationCanceledException();
		OperationCanceledException(JString arg0);
		OperationCanceledException(JThrowable arg0);
		OperationCanceledException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::accounts

