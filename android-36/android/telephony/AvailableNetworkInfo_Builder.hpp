#pragma once

#include "./AvailableNetworkInfo.def.hpp"
#include "./AvailableNetworkInfo_Builder.def.hpp"

namespace android::telephony
{
	// Fields
	
	// Constructors
	inline AvailableNetworkInfo_Builder::AvailableNetworkInfo_Builder(jint arg0)
		: JObject(
			"android.telephony.AvailableNetworkInfo$Builder",
			"(I)V",
			arg0
		) {}
	
	// Methods
	inline android::telephony::AvailableNetworkInfo AvailableNetworkInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/AvailableNetworkInfo;"
		);
	}
	inline android::telephony::AvailableNetworkInfo_Builder AvailableNetworkInfo_Builder::setMccMncs(JObject arg0) const
	{
		return callObjectMethod(
			"setMccMncs",
			"(Ljava/util/List;)Landroid/telephony/AvailableNetworkInfo$Builder;",
			arg0.object()
		);
	}
	inline android::telephony::AvailableNetworkInfo_Builder AvailableNetworkInfo_Builder::setPriority(jint arg0) const
	{
		return callObjectMethod(
			"setPriority",
			"(I)Landroid/telephony/AvailableNetworkInfo$Builder;",
			arg0
		);
	}
	inline android::telephony::AvailableNetworkInfo_Builder AvailableNetworkInfo_Builder::setRadioAccessSpecifiers(JObject arg0) const
	{
		return callObjectMethod(
			"setRadioAccessSpecifiers",
			"(Ljava/util/List;)Landroid/telephony/AvailableNetworkInfo$Builder;",
			arg0.object()
		);
	}
} // namespace android::telephony

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::telephony;
#endif
