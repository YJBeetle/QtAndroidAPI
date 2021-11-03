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
		
		// QJniObject forward
		template<typename ...Ts> explicit TrafficDescriptor_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TrafficDescriptor_Builder(QJniObject obj);
		
		// Constructors
		TrafficDescriptor_Builder();
		
		// Methods
		android::telephony::data::TrafficDescriptor build() const;
		android::telephony::data::TrafficDescriptor_Builder setDataNetworkName(JString arg0) const;
		android::telephony::data::TrafficDescriptor_Builder setOsAppId(JByteArray arg0) const;
	};
} // namespace android::telephony::data

