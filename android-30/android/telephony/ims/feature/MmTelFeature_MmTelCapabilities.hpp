#pragma once

#include "../../../../JObject.hpp"
#include "../../../../JString.hpp"
#include "./MmTelFeature_MmTelCapabilities.def.hpp"

namespace android::telephony::ims::feature
{
	// Fields
	inline jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_SMS()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_SMS"
		);
	}
	inline jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_UT()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_UT"
		);
	}
	inline jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_VIDEO()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_VIDEO"
		);
	}
	inline jint MmTelFeature_MmTelCapabilities::CAPABILITY_TYPE_VOICE()
	{
		return getStaticField<jint>(
			"android.telephony.ims.feature.MmTelFeature$MmTelCapabilities",
			"CAPABILITY_TYPE_VOICE"
		);
	}
	
	// Constructors
	
	// Methods
	inline jboolean MmTelFeature_MmTelCapabilities::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline jint MmTelFeature_MmTelCapabilities::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline JString MmTelFeature_MmTelCapabilities::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::telephony::ims::feature

// Base class headers

