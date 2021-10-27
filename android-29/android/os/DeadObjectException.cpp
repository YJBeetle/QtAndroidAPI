#include "./DeadObjectException.hpp"

namespace android::os
{
	// Fields
	
	DeadObjectException::DeadObjectException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DeadObjectException::DeadObjectException()
	{
		__thiz = QAndroidJniObject(
			"android.os.DeadObjectException",
			"()V"
		);
	}
	DeadObjectException::DeadObjectException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.DeadObjectException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	DeadObjectException::DeadObjectException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.DeadObjectException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::os

