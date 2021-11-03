#include "./NetworkSliceInfo.hpp"
#include "./NetworkSliceInfo_Builder.hpp"

namespace android::telephony::data
{
	// Fields
	
	// QAndroidJniObject forward
	NetworkSliceInfo_Builder::NetworkSliceInfo_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	NetworkSliceInfo_Builder::NetworkSliceInfo_Builder()
		: JObject(
			"android.telephony.data.NetworkSliceInfo$Builder",
			"()V"
		) {}
	
	// Methods
	android::telephony::data::NetworkSliceInfo NetworkSliceInfo_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/data/NetworkSliceInfo;"
		);
	}
	android::telephony::data::NetworkSliceInfo_Builder NetworkSliceInfo_Builder::setMappedHplmnSliceDifferentiator(jint arg0)
	{
		return callObjectMethod(
			"setMappedHplmnSliceDifferentiator",
			"(I)Landroid/telephony/data/NetworkSliceInfo$Builder;",
			arg0
		);
	}
	android::telephony::data::NetworkSliceInfo_Builder NetworkSliceInfo_Builder::setMappedHplmnSliceServiceType(jint arg0)
	{
		return callObjectMethod(
			"setMappedHplmnSliceServiceType",
			"(I)Landroid/telephony/data/NetworkSliceInfo$Builder;",
			arg0
		);
	}
	android::telephony::data::NetworkSliceInfo_Builder NetworkSliceInfo_Builder::setSliceDifferentiator(jint arg0)
	{
		return callObjectMethod(
			"setSliceDifferentiator",
			"(I)Landroid/telephony/data/NetworkSliceInfo$Builder;",
			arg0
		);
	}
	android::telephony::data::NetworkSliceInfo_Builder NetworkSliceInfo_Builder::setSliceServiceType(jint arg0)
	{
		return callObjectMethod(
			"setSliceServiceType",
			"(I)Landroid/telephony/data/NetworkSliceInfo$Builder;",
			arg0
		);
	}
	android::telephony::data::NetworkSliceInfo_Builder NetworkSliceInfo_Builder::setStatus(jint arg0)
	{
		return callObjectMethod(
			"setStatus",
			"(I)Landroid/telephony/data/NetworkSliceInfo$Builder;",
			arg0
		);
	}
} // namespace android::telephony::data

