#pragma once

#include "./GetTopicsResponse.def.hpp"
#include "./GetTopicsResponse_Builder.def.hpp"

namespace android::adservices::topics
{
	// Fields
	
	// Constructors
	inline GetTopicsResponse_Builder::GetTopicsResponse_Builder(JObject arg0)
		: JObject(
			"android.adservices.topics.GetTopicsResponse$Builder",
			"(Ljava/util/List;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::adservices::topics::GetTopicsResponse GetTopicsResponse_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/topics/GetTopicsResponse;"
		);
	}
} // namespace android::adservices::topics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::topics;
#endif
