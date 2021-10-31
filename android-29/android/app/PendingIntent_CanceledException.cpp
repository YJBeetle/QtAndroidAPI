#include "../../java/lang/Exception.hpp"
#include "./PendingIntent_CanceledException.hpp"

namespace android::app
{
	// Fields
	
	PendingIntent_CanceledException::PendingIntent_CanceledException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PendingIntent_CanceledException::PendingIntent_CanceledException()
	{
		__thiz = QAndroidJniObject(
			"android.app.PendingIntent$CanceledException",
			"()V"
		);
	}
	PendingIntent_CanceledException::PendingIntent_CanceledException(java::lang::Exception arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.PendingIntent$CanceledException",
			"(Ljava/lang/Exception;)V",
			arg0.__jniObject().object()
		);
	}
	PendingIntent_CanceledException::PendingIntent_CanceledException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.PendingIntent$CanceledException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::app

