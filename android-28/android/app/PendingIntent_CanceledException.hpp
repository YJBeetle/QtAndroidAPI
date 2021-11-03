#pragma once

#include "../util/AndroidException.hpp"

namespace java::lang
{
	class Exception;
}
class JString;

namespace android::app
{
	class PendingIntent_CanceledException : public android::util::AndroidException
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit PendingIntent_CanceledException(const char *className, const char *sig, Ts...agv) : android::util::AndroidException(className, sig, std::forward<Ts>(agv)...) {}
		PendingIntent_CanceledException(QJniObject obj);
		
		// Constructors
		PendingIntent_CanceledException();
		PendingIntent_CanceledException(java::lang::Exception arg0);
		PendingIntent_CanceledException(JString arg0);
		
		// Methods
	};
} // namespace android::app

