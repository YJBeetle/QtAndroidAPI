#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"
#include "./RemoteException.hpp"
#include "./DeadObjectException.hpp"


namespace android::os
{
	class DeadSystemException : public android::os::DeadObjectException
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DeadSystemException(const char *className, const char *sig, Ts...agv) : android::os::DeadObjectException(className, sig, std::forward<Ts>(agv)...) {}
		DeadSystemException(QAndroidJniObject obj);
		
		// Constructors
		DeadSystemException();
		
		// Methods
	};
} // namespace android::os

