#pragma once

#include "../../net/Uri.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./UpdateSignalsRequest.def.hpp"

namespace android::adservices::signals
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean UpdateSignalsRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline android::net::Uri UpdateSignalsRequest::getUpdateUri() const
	{
		return callObjectMethod(
			"getUpdateUri",
			"()Landroid/net/Uri;"
		);
	}
	inline jint UpdateSignalsRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString UpdateSignalsRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::adservices::signals

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::signals;
#endif
