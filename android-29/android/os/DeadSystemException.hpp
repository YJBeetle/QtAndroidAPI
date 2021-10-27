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
		
		DeadSystemException(QAndroidJniObject obj);
		// Constructors
		DeadSystemException();
		
		// Methods
	};
} // namespace android::os

