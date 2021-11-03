#include "../../java/lang/Exception.hpp"
#include "../../JString.hpp"
#include "./PendingIntent_CanceledException.hpp"

namespace android::app
{
	// Fields
	
	// QAndroidJniObject forward
	PendingIntent_CanceledException::PendingIntent_CanceledException(QAndroidJniObject obj) : android::util::AndroidException(obj) {}
	
	// Constructors
	PendingIntent_CanceledException::PendingIntent_CanceledException()
		: android::util::AndroidException(
			"android.app.PendingIntent$CanceledException",
			"()V"
		) {}
	PendingIntent_CanceledException::PendingIntent_CanceledException(java::lang::Exception arg0)
		: android::util::AndroidException(
			"android.app.PendingIntent$CanceledException",
			"(Ljava/lang/Exception;)V",
			arg0.object()
		) {}
	PendingIntent_CanceledException::PendingIntent_CanceledException(JString arg0)
		: android::util::AndroidException(
			"android.app.PendingIntent$CanceledException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::app

