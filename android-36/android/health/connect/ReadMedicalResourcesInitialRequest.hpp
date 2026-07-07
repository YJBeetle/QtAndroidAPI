#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./ReadMedicalResourcesInitialRequest.def.hpp"

namespace android::health::connect
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean ReadMedicalResourcesInitialRequest::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject ReadMedicalResourcesInitialRequest::getDataSourceIds() const
	{
		return callObjectMethod(
			"getDataSourceIds",
			"()Ljava/util/Set;"
		);
	}
	inline jint ReadMedicalResourcesInitialRequest::getMedicalResourceType() const
	{
		return callMethod<jint>(
			"getMedicalResourceType",
			"()I"
		);
	}
	inline jint ReadMedicalResourcesInitialRequest::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString ReadMedicalResourcesInitialRequest::toString() const
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
