#pragma once

#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./AdId.def.hpp"

namespace android::adservices::adid
{
	// Fields
	inline JString AdId::ZERO_OUT()
	{
		return getStaticObjectField(
			"android.adservices.adid.AdId",
			"ZERO_OUT",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	inline AdId::AdId(JString arg0, jboolean arg1)
		: JObject(
			"android.adservices.adid.AdId",
			"(Ljava/lang/String;Z)V",
			arg0.object<jstring>(),
			arg1
		) {}
	
	// Methods
	inline jboolean AdId::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JString AdId::getAdId() const
	{
		return callObjectMethod(
			"getAdId",
			"()Ljava/lang/String;"
		);
	}
	inline jint AdId::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean AdId::isLimitAdTrackingEnabled() const
	{
		return callMethod<jboolean>(
			"isLimitAdTrackingEnabled",
			"()Z"
		);
	}
} // namespace android::adservices::adid

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::adservices::adid;
#endif
