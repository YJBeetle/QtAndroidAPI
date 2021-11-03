#pragma once

#include "../../JObject.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"
#include "./RemoteException.hpp"


namespace android::os
{
	class DeadObjectException : public android::os::RemoteException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DeadObjectException(const char *className, const char *sig, Ts...agv) : android::os::RemoteException(className, sig, std::forward<Ts>(agv)...) {}
		DeadObjectException(QAndroidJniObject obj);
		
		// Constructors
		DeadObjectException();
		DeadObjectException(jstring arg0);
		
		// Methods
	};
} // namespace android::os

