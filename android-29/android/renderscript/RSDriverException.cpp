#include "./RSDriverException.hpp"

namespace android::renderscript
{
	// Fields
	
	RSDriverException::RSDriverException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSDriverException::RSDriverException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSDriverException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	RSDriverException::RSDriverException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSDriverException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::renderscript

