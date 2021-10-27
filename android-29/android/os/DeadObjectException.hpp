#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"
#include "./RemoteException.hpp"


namespace android::os
{
	class DeadObjectException : public android::os::RemoteException
	{
	public:
		// Fields
		
		DeadObjectException(QAndroidJniObject obj);
		// Constructors
		DeadObjectException();
		DeadObjectException(jstring &arg0);
		DeadObjectException(const QString &arg0);
		
		// Methods
	};
} // namespace android::os

