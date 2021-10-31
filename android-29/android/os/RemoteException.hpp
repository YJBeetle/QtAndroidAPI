#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"


namespace android::os
{
	class RemoteException : public android::util::AndroidException
	{
	public:
		// Fields
		
		RemoteException(QAndroidJniObject obj);
		// Constructors
		RemoteException();
		RemoteException(jstring arg0);
		
		// Methods
	};
} // namespace android::os

