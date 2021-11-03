#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::telephony::data
{
	class TrafficDescriptor;
}
class JString;

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
		android::telephony::data::TrafficDescriptor_Builder setDataNetworkName(JString arg0);
		android::telephony::data::TrafficDescriptor_Builder setOsAppId(JByteArray arg0);
	};
} // namespace android::telephony::data

