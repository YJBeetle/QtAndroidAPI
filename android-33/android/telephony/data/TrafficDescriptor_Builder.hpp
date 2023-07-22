#pragma once

#include "../../../JByteArray.hpp"
#include "./TrafficDescriptor.def.hpp"
#include "../../../JString.hpp"
#include "./TrafficDescriptor_Builder.def.hpp"

namespace android::telephony::data
{
	// Fields
	
	// Constructors
	inline TrafficDescriptor_Builder::TrafficDescriptor_Builder()
		: JObject(
			"android.telephony.data.TrafficDescriptor$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::telephony::data::TrafficDescriptor TrafficDescriptor_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/data/TrafficDescriptor;"
		);
	}
	inline android::telephony::data::TrafficDescriptor_Builder TrafficDescriptor_Builder::setDataNetworkName(JString arg0) const
	{
		return callObjectMethod(
			"setDataNetworkName",
			"(Ljava/lang/String;)Landroid/telephony/data/TrafficDescriptor$Builder;",
			arg0.object<jstring>()
		);
	}
	inline android::telephony::data::TrafficDescriptor_Builder TrafficDescriptor_Builder::setOsAppId(JByteArray arg0) const
	{
		return callObjectMethod(
			"setOsAppId",
			"([B)Landroid/telephony/data/TrafficDescriptor$Builder;",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::telephony::data

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony::data;
#endif
