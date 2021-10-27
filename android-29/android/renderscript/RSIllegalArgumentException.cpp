#include "./RSIllegalArgumentException.hpp"

namespace android::renderscript
{
	// Fields
	
	RSIllegalArgumentException::RSIllegalArgumentException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	RSIllegalArgumentException::RSIllegalArgumentException(jstring &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSIllegalArgumentException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	RSIllegalArgumentException::RSIllegalArgumentException(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RSIllegalArgumentException",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
} // namespace android::renderscript

