#pragma once

#include "../GenericDocument.def.hpp"
#include "../../../../JString.hpp"
#include "./DocumentIdUtil.def.hpp"

namespace android::app::appsearch::util
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString DocumentIdUtil::createQualifiedId(JString arg0, JString arg1, android::app::appsearch::GenericDocument arg2)
	{
		return callStaticObjectMethod(
			"android.app.appsearch.util.DocumentIdUtil",
			"createQualifiedId",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/app/appsearch/GenericDocument;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object()
		);
	}
	inline JString DocumentIdUtil::createQualifiedId(JString arg0, JString arg1, JString arg2, JString arg3)
	{
		return callStaticObjectMethod(
			"android.app.appsearch.util.DocumentIdUtil",
			"createQualifiedId",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1.object<jstring>(),
			arg2.object<jstring>(),
			arg3.object<jstring>()
		);
	}
} // namespace android::app::appsearch::util

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app::appsearch::util;
#endif
