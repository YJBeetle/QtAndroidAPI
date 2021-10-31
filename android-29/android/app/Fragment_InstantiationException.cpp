#include "../../java/lang/Exception.hpp"
#include "./Fragment_InstantiationException.hpp"

namespace android::app
{
	// Fields
	
	Fragment_InstantiationException::Fragment_InstantiationException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Fragment_InstantiationException::Fragment_InstantiationException(jstring arg0, java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.Fragment$InstantiationException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::app

