#pragma once

#include "../net/Uri.def.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./ComponentCaller.def.hpp"

namespace android::app
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jint ComponentCaller::checkContentUriPermission(android::net::Uri arg0, jint arg1) const
	{
		return callMethod<jint>(
			"checkContentUriPermission",
			"(Landroid/net/Uri;I)I",
			arg0.object(),
			arg1
		);
	}
	inline jboolean ComponentCaller::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString ComponentCaller::getPackage() const
	{
		return callObjectMethod(
			"getPackage",
			"()Ljava/lang/String;"
		);
	}
	inline jint ComponentCaller::getUid() const
	{
		return callMethod<jint>(
			"getUid",
			"()I"
		);
	}
	inline jint ComponentCaller::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::app

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::app;
#endif
