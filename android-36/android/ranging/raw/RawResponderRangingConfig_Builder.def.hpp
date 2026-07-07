#pragma once

#include "../../../JObject.hpp"

namespace android::ranging::raw
{
	class RawRangingDevice;
}
namespace android::ranging::raw
{
	class RawResponderRangingConfig;
}

namespace android::ranging::raw
{
	class RawResponderRangingConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RawResponderRangingConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RawResponderRangingConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RawResponderRangingConfig_Builder();
		
		// Methods
		android::ranging::raw::RawResponderRangingConfig build() const;
		android::ranging::raw::RawResponderRangingConfig_Builder setRawRangingDevice(android::ranging::raw::RawRangingDevice arg0) const;
	};
} // namespace android::ranging::raw

