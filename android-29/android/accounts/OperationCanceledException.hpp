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
		
		OperationCanceledException(QAndroidJniObject obj);
		// Constructors
		OperationCanceledException();
		OperationCanceledException(jstring arg0);
		OperationCanceledException(jthrowable arg0);
		OperationCanceledException(jstring arg0, jthrowable arg1);
		
		// Methods
	};
} // namespace android::accounts

