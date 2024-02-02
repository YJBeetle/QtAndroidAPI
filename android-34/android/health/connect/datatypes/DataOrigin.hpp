#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./DataOrigin.def.hpp"

namespace android::health::connect::datatypes
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean DataOrigin::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString DataOrigin::getPackageName() const
	{
		return callObjectMethod(
			"getPackageName",
			"()Ljava/lang/String;"
		);
	}
	inline jint DataOrigin::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::health::connect::datatypes

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::health::connect::datatypes;
#endif
