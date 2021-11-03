#pragma once

#include "../../JObject.hpp"
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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PendingIntent_CanceledException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		PendingIntent_CanceledException(QAndroidJniObject obj);
		
		// Constructors
		PendingIntent_CanceledException();
		PendingIntent_CanceledException(java::lang::Exception arg0);
		PendingIntent_CanceledException(jstring arg0);
		
		// Methods
	};
} // namespace android::app

