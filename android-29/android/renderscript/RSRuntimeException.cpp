#include "./RSRuntimeException.hpp"

namespace android::renderscript
{
	// Fields
	
	RSRuntimeException::RSRuntimeException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSRuntimeException::RSRuntimeException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSRuntimeException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	RSRuntimeException::RSRuntimeException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSRuntimeException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::renderscript

