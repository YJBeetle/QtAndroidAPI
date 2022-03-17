#pragma once

#include "./RemoteException.def.hpp"

class JString;

namespace android::os
{
	class TransactionTooLargeException : public android::os::RemoteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TransactionTooLargeException(const char *className, const char *sig, Ts...agv) : android::os::RemoteException(className, sig, std::forward<Ts>(agv)...) {}
		TransactionTooLargeException(QAndroidJniObject obj) : android::os::RemoteException(obj) {}
		
		// Constructors
		TransactionTooLargeException();
		TransactionTooLargeException(JString arg0);
		
		// Methods
	};
} // namespace android::os

