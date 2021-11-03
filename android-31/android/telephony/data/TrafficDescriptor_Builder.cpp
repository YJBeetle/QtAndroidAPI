#include "./TrafficDescriptor.hpp"
#include "./TrafficDescriptor_Builder.hpp"

namespace android::telephony::data
{
	// Fields
	
	// QAndroidJniObject forward
	TrafficDescriptor_Builder::TrafficDescriptor_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	TrafficDescriptor_Builder::TrafficDescriptor_Builder()
		: JObject(
			"android.telephony.data.TrafficDescriptor$Builder",
			"()V"
		) {}
	
	// Methods
	android::telephony::data::TrafficDescriptor TrafficDescriptor_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/telephony/data/TrafficDescriptor;"
		);
	}
	android::telephony::data::TrafficDescriptor_Builder TrafficDescriptor_Builder::setDataNetworkName(jstring arg0)
	{
		return callObjectMethod(
			"setDataNetworkName",
			"(Ljava/lang/String;)Landroid/telephony/data/TrafficDescriptor$Builder;",
			arg0
		);
	}
	android::telephony::data::TrafficDescriptor_Builder TrafficDescriptor_Builder::setOsAppId(jbyteArray arg0)
	{
		return callObjectMethod(
			"setOsAppId",
			"([B)Landroid/telephony/data/TrafficDescriptor$Builder;",
			arg0
		);
	}
} // namespace android::telephony::data

