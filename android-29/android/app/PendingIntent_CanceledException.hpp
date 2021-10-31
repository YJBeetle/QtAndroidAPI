#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::app
{
	class PendingIntent_CanceledException : public android::util::AndroidException
	{
	public:
		// Fields
		
		PendingIntent_CanceledException(QAndroidJniObject obj);
		// Constructors
		PendingIntent_CanceledException();
		PendingIntent_CanceledException(java::lang::Exception arg0);
		PendingIntent_CanceledException(jstring arg0);
		
		// Methods
	};
} // namespace android::app

