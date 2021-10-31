#include "../../../java/lang/Exception.hpp"
#include "./Resources_NotFoundException.hpp"

namespace android::content::res
{
	// Fields
	
	// QAndroidJniObject forward
	Resources_NotFoundException::Resources_NotFoundException(QAndroidJniObject obj) : java::lang::RuntimeException(obj) {}
	
	// Constructors
	Resources_NotFoundException::Resources_NotFoundException()
		: java::lang::RuntimeException(
			"android.content.res.Resources$NotFoundException",
			"()V"
		) {}
	Resources_NotFoundException::Resources_NotFoundException(jstring arg0)
		: java::lang::RuntimeException(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	Resources_NotFoundException::Resources_NotFoundException(jstring arg0, java::lang::Exception arg1)
		: java::lang::RuntimeException(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0,
			arg1.object()
		) {}
	
	// Methods
} // namespace android::content::res

