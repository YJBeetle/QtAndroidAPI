#pragma once

#include "../../../JObject.hpp"

namespace android::telephony::data
{
	class TrafficDescriptor;
}

namespace android::telephony::data
{
	class TrafficDescriptor_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TrafficDescriptor_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrafficDescriptor_Builder(QAndroidJniObject obj);
		
		// Constructors
		TrafficDescriptor_Builder();
		
		// Methods
		android::telephony::data::TrafficDescriptor build();
		android::telephony::data::TrafficDescriptor_Builder setDataNetworkName(jstring arg0);
		android::telephony::data::TrafficDescriptor_Builder setOsAppId(jbyteArray arg0);
	};
} // namespace android::telephony::data

