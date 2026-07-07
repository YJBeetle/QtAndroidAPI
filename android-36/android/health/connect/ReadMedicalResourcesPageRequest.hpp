#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ReadMedicalResourcesPageRequest.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ReadMedicalResourcesPageRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString ReadMedicalResourcesPageRequest::getPageToken() const
	{
		return callObjectMethod(
			"getPageToken",
			"()Ljava/lang/String;"
		);
	}
	inline jint ReadMedicalResourcesPageRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ReadMedicalResourcesPageRequest::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::health::connect

// Base class headers
#include "./ReadMedicalResourcesRequest.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect;
#endif
