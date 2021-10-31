#include "../../../java/lang/Exception.hpp"
#include "./Resources_NotFoundException.hpp"

namespace android::content::res
{
	// Fields
	
	Resources_NotFoundException::Resources_NotFoundException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Resources_NotFoundException::Resources_NotFoundException()
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Resources$NotFoundException",
			"()V"
		);
	}
	Resources_NotFoundException::Resources_NotFoundException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	Resources_NotFoundException::Resources_NotFoundException(jstring arg0, java::lang::Exception arg1)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::content::res

