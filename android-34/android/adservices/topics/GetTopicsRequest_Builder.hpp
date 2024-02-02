#pragma once

#include "./GetTopicsRequest.def.hpp"
#include "../../../JString.hpp"
#include "./GetTopicsRequest_Builder.def.hpp"

namespace android::adservices::topics
{
	// Fields
	
	// Constructors
	inline GetTopicsRequest_Builder::GetTopicsRequest_Builder()
		: JObject(
			"android.adservices.topics.GetTopicsRequest$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::adservices::topics::GetTopicsRequest GetTopicsRequest_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/adservices/topics/GetTopicsRequest;"
		);
	}
	inline android::adservices::topics::GetTopicsRequest_Builder GetTopicsRequest_Builder::setAdsSdkName(JString arg0) const
	{
		return callObjectMethod(
			"setAdsSdkName",
			"(Ljava/lang/String;)Landroid/adservices/topics/GetTopicsRequest$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::adservices::topics::GetTopicsRequest_Builder GetTopicsRequest_Builder::setShouldRecordObservation(jboolean arg0) const
	{
		return callObjectMethod(
			"setShouldRecordObservation",
			"(Z)Landroid/adservices/topics/GetTopicsRequest$Builder;",
			arg0
		);
	}
} // namespace android::adservices::topics

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::topics;
#endif
