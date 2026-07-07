#pragma once

#include "../../../JObject.hpp"

class JByteArray;
namespace android::ranging::uwb
{
	class UwbAddress;
}
namespace android::ranging::uwb
{
	class UwbComplexChannel;
}
namespace android::ranging::uwb
{
	class UwbRangingParams;
}

namespace android::ranging::uwb
{
	class UwbRangingParams_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit UwbRangingParams_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UwbRangingParams_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		UwbRangingParams_Builder(jint arg0, jint arg1, android::ranging::uwb::UwbAddress arg2, android::ranging::uwb::UwbAddress arg3);
		
		// Methods
		android::ranging::uwb::UwbRangingParams build() const;
		android::ranging::uwb::UwbRangingParams_Builder setComplexChannel(android::ranging::uwb::UwbComplexChannel arg0) const;
		android::ranging::uwb::UwbRangingParams_Builder setRangingUpdateRate(jint arg0) const;
		android::ranging::uwb::UwbRangingParams_Builder setSessionKeyInfo(JByteArray arg0) const;
		android::ranging::uwb::UwbRangingParams_Builder setSlotDuration(jint arg0) const;
		android::ranging::uwb::UwbRangingParams_Builder setSubSessionId(jint arg0) const;
		android::ranging::uwb::UwbRangingParams_Builder setSubSessionKeyInfo(JByteArray arg0) const;
	};
} // namespace android::ranging::uwb

