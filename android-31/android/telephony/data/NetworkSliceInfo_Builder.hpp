#pragma once

#include "./NetworkSliceInfo.def.hpp"
#include "./NetworkSliceInfo_Builder.def.hpp"

namespace android::telephony::data
{
	// Fields
	
	// Constructors
	inline NetworkSliceInfo_Builder::NetworkSliceInfo_Builder()
		: JObject(
			"android.telephony.data.NetworkSliceInfo$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::telephony::data::NetworkSliceInfo NetworkSliceInfo_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/data/NetworkSliceInfo;"
		);
	}
	inline android::telephony::data::NetworkSliceInfo_Builder NetworkSliceInfo_Builder::setMappedHplmnSliceDifferentiator(jint arg0) const
	{
		return callObjectMethod(
			"setMappedHplmnSliceDifferentiator",
			"(I)Landroid/telephony/data/NetworkSliceInfo$Builder;",
			arg0
		);
	}
	inline android::telephony::data::NetworkSliceInfo_Builder NetworkSliceInfo_Builder::setMappedHplmnSliceServiceType(jint arg0) const
	{
		return callObjectMethod(
			"setMappedHplmnSliceServiceType",
			"(I)Landroid/telephony/data/NetworkSliceInfo$Builder;",
			arg0
		);
	}
	inline android::telephony::data::NetworkSliceInfo_Builder NetworkSliceInfo_Builder::setSliceDifferentiator(jint arg0) const
	{
		return callObjectMethod(
			"setSliceDifferentiator",
			"(I)Landroid/telephony/data/NetworkSliceInfo$Builder;",
			arg0
		);
	}
	inline android::telephony::data::NetworkSliceInfo_Builder NetworkSliceInfo_Builder::setSliceServiceType(jint arg0) const
	{
		return callObjectMethod(
			"setSliceServiceType",
			"(I)Landroid/telephony/data/NetworkSliceInfo$Builder;",
			arg0
		);
	}
	inline android::telephony::data::NetworkSliceInfo_Builder NetworkSliceInfo_Builder::setStatus(jint arg0) const
	{
		return callObjectMethod(
			"setStatus",
			"(I)Landroid/telephony/data/NetworkSliceInfo$Builder;",
			arg0
		);
	}
} // namespace android::telephony::data

// Base class headers

