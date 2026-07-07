#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::os
{
	class Parcel;
}
namespace android::ranging::uwb
{
	class UwbAddress;
}
namespace android::ranging::uwb
{
	class UwbComplexChannel;
}
class JObject;
class JString;

namespace android::ranging::uwb
{
	class UwbRangingParams : public JObject
	{
	public:
		// Fields
		static jint CONFIG_MULTICAST_DS_TWR();
		static jint CONFIG_PROVISIONED_INDIVIDUAL_MULTICAST_DS_TWR();
		static jint CONFIG_PROVISIONED_MULTICAST_DS_TWR();
		static jint CONFIG_PROVISIONED_UNICAST_DS_TWR();
		static jint CONFIG_PROVISIONED_UNICAST_DS_TWR_VERY_FAST();
		static jint CONFIG_UNICAST_DS_TWR();
		static JObject CREATOR();
		static jint DURATION_1_MS();
		static jint DURATION_2_MS();
		static jint SUB_SESSION_UNDEFINED();
		
		// QJniObject forward
		template<typename ...Ts> explicit UwbRangingParams(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UwbRangingParams(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::ranging::uwb::UwbComplexChannel getComplexChannel() const;
		jint getConfigId() const;
		android::ranging::uwb::UwbAddress getDeviceAddress() const;
		android::ranging::uwb::UwbAddress getPeerAddress() const;
		jint getRangingUpdateRate() const;
		jint getSessionId() const;
		JByteArray getSessionKeyInfo() const;
		jint getSlotDuration() const;
		jint getSubSessionId() const;
		JByteArray getSubSessionKeyInfo() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::ranging::uwb

