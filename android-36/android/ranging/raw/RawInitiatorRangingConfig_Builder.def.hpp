#pragma once

#include "../../../JObject.hpp"

namespace android::ranging::raw
{
	class RawInitiatorRangingConfig;
}
namespace android::ranging::raw
{
	class RawRangingDevice;
}

namespace android::ranging::raw
{
	class RawInitiatorRangingConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RawInitiatorRangingConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RawInitiatorRangingConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RawInitiatorRangingConfig_Builder();
		
		// Methods
		android::ranging::raw::RawInitiatorRangingConfig_Builder addRawRangingDevice(android::ranging::raw::RawRangingDevice arg0) const;
		android::ranging::raw::RawInitiatorRangingConfig_Builder addRawRangingDevices(JObject arg0) const;
		android::ranging::raw::RawInitiatorRangingConfig build() const;
	};
} // namespace android::ranging::raw

