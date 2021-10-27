#include "./RSInvalidStateException.hpp"

namespace android::renderscript
{
	// Fields
	
	RSInvalidStateException::RSInvalidStateException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSInvalidStateException::RSInvalidStateException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSInvalidStateException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	RSInvalidStateException::RSInvalidStateException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSInvalidStateException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::renderscript

