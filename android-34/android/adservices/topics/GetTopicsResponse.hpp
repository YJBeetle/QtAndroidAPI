#pragma once

#include "../../../JObject.hpp"
#include "./GetTopicsResponse.def.hpp"

namespace android::adservices::topics
{
	// Fields
	
	// Constructors
	
	// Methods
	inline jboolean GetTopicsResponse::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject GetTopicsResponse::getTopics() const
	{
		return callObjectMethod(
			"getTopics",
			"()Ljava/util/List;"
		);
	}
	inline jint GetTopicsResponse::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
} // namespace android::adservices::topics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::topics;
#endif
