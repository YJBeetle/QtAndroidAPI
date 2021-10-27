#include "./RemoteException.hpp"

namespace android::os
{
	// Fields
	
	RemoteException::RemoteException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RemoteException::RemoteException()
	{
		__thiz = QAndroidJniObject(
			"android.os.RemoteException",
			"()V"
		);
	}
	RemoteException::RemoteException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.RemoteException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	RemoteException::RemoteException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.RemoteException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::os

