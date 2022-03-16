#include "../../../JByteArray.hpp"
#include "./TrafficDescriptor.hpp"
#include "../../../JString.hpp"
#include "./TrafficDescriptor_Builder.hpp"

namespace android::telephony::data
{
	// Fields
	
	// Constructors
	TrafficDescriptor_Builder::TrafficDescriptor_Builder()
		: JObject(
			"android.telephony.data.TrafficDescriptor$Builder",
			"()V"
		) {}
	
	// Methods
	android::telephony::data::TrafficDescriptor TrafficDescriptor_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/data/TrafficDescriptor;"
		);
	}
	android::telephony::data::TrafficDescriptor_Builder TrafficDescriptor_Builder::setDataNetworkName(JString arg0) const
	{
		return callObjectMethod(
			"setDataNetworkName",
			"(Ljava/lang/String;)Landroid/telephony/data/TrafficDescriptor$Builder;",
			arg0.object<jstring>()
		);
	}
	android::telephony::data::TrafficDescriptor_Builder TrafficDescriptor_Builder::setOsAppId(JByteArray arg0) const
	{
		return callObjectMethod(
			"setOsAppId",
			"([B)Landroid/telephony/data/TrafficDescriptor$Builder;",
			arg0.object<jbyteArray>()
		);
	}
} // namespace android::telephony::data

