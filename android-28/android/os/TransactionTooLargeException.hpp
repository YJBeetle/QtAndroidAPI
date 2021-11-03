#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"
#include "./RemoteException.hpp"


namespace android::os
{
	class TransactionTooLargeException : public android::os::RemoteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit TransactionTooLargeException(const char *className, const char *sig, Ts...agv) : android::os::RemoteException(className, sig, std::forward<Ts>(agv)...) {}
		TransactionTooLargeException(QJniObject obj);
		
		// Constructors
		TransactionTooLargeException();
		TransactionTooLargeException(jstring arg0);
		
		// Methods
	};
} // namespace android::os

