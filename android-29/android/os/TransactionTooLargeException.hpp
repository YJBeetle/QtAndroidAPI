#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"
#include "./RemoteException.hpp"


namespace android::os
{
	class TransactionTooLargeException : public android::os::RemoteException
	{
	public:
		// Fields
		
		TransactionTooLargeException(QAndroidJniObject obj);
		// Constructors
		TransactionTooLargeException();
		TransactionTooLargeException(jstring &arg0);
		TransactionTooLargeException(const QString &arg0);
		
		// Methods
	};
} // namespace android::os

