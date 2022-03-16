#pragma once

#include "./AccountsException.def.hpp"

class JString;
class JThrowable;

namespace android::accounts
{
	class OperationCanceledException : public android::accounts::AccountsException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OperationCanceledException(const char *className, const char *sig, Ts...agv) : android::accounts::AccountsException(className, sig, std::forward<Ts>(agv)...) {}
		OperationCanceledException(QJniObject obj) : android::accounts::AccountsException(obj) {}
		
		// Constructors
		OperationCanceledException();
		OperationCanceledException(JString arg0);
		OperationCanceledException(JThrowable arg0);
		OperationCanceledException(JString arg0, JThrowable arg1);
		
		// Methods
	};
} // namespace android::accounts

