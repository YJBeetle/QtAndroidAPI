#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "./AccountsException.hpp"


namespace android::accounts
{
	class OperationCanceledException : public android::accounts::AccountsException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OperationCanceledException(const char *className, const char *sig, Ts...agv) : android::accounts::AccountsException(className, sig, std::forward<Ts>(agv)...) {}
		OperationCanceledException(QJniObject obj);
		
		// Constructors
		OperationCanceledException();
		OperationCanceledException(jstring arg0);
		OperationCanceledException(jthrowable arg0);
		OperationCanceledException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::accounts

