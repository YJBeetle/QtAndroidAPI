#include "./ParcelFormatException.hpp"

namespace android::os
{
	// Fields
	
	ParcelFormatException::ParcelFormatException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ParcelFormatException::ParcelFormatException()
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFormatException",
			"()V"
		);
	}
	ParcelFormatException::ParcelFormatException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFormatException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	ParcelFormatException::ParcelFormatException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelFormatException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::os

