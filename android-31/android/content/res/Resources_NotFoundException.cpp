#include "../../../java/lang/Exception.hpp"
#include "../../../JString.hpp"
#include "./Resources_NotFoundException.hpp"

namespace android::content::res
{
	// Fields
	
	// Constructors
	Resources_NotFoundException::Resources_NotFoundException()
		: java::lang::RuntimeException(
			"android.content.res.Resources$NotFoundException",
			"()V"
		) {}
	Resources_NotFoundException::Resources_NotFoundException(JString arg0)
		: java::lang::RuntimeException(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	Resources_NotFoundException::Resources_NotFoundException(JString arg0, java::lang::Exception arg1)
		: java::lang::RuntimeException(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
} // namespace android::content::res

