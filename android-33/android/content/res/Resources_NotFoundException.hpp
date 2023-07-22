#pragma once

#include "../../../java/lang/Exception.def.hpp"
#include "../../../JString.hpp"
#include "./Resources_NotFoundException.def.hpp"

namespace android::content::res
{
	// Fields
	
	// Constructors
	inline Resources_NotFoundException::Resources_NotFoundException()
		: java::lang::RuntimeException(
			"android.content.res.Resources$NotFoundException",
			"()V"
		) {}
	inline Resources_NotFoundException::Resources_NotFoundException(JString arg0)
		: java::lang::RuntimeException(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	inline Resources_NotFoundException::Resources_NotFoundException(JString arg0, java::lang::Exception arg1)
		: java::lang::RuntimeException(
			"android.content.res.Resources$NotFoundException",
			"(Ljava/lang/String;Ljava/lang/Exception;)V",
			arg0.object<jstring>(),
			arg1.object()
		) {}
	
	// Methods
} // namespace android::content::res

// Base class headers
#include "../../../java/lang/Exception.hpp"
#include "../../../java/lang/RuntimeException.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::content::res;
#endif
