#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Exception.hpp"
#include "../util/AndroidException.hpp"

namespace java::lang
{
	class Exception;
}

namespace android::content
{
	class IntentSender_SendIntentException : public android::util::AndroidException
	{
	public:
		// Fields
		
		IntentSender_SendIntentException(QAndroidJniObject obj);
		// Constructors
		IntentSender_SendIntentException();
		IntentSender_SendIntentException(java::lang::Exception &arg0);
		IntentSender_SendIntentException(jstring &arg0);
		IntentSender_SendIntentException(const QString &arg0);
		
		// Methods
	};
} // namespace android::content

