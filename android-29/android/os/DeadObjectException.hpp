#pragma once

#include "./RemoteException.hpp"

class JString;

namespace android::os
{
	class DeadObjectException : public android::os::RemoteException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeadObjectException(const char *className, const char *sig, Ts...agv) : android::os::RemoteException(className, sig, std::forward<Ts>(agv)...) {}
		DeadObjectException(QJniObject obj);
		
		// Constructors
		DeadObjectException();
		DeadObjectException(JString arg0);
		
		// Methods
	};
} // namespace android::os

