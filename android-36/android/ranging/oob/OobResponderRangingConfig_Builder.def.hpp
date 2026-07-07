#pragma once

#include "../../../JObject.hpp"

namespace android::ranging::oob
{
	class DeviceHandle;
}
namespace android::ranging::oob
{
	class OobResponderRangingConfig;
}

namespace android::ranging::oob
{
	class OobResponderRangingConfig_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit OobResponderRangingConfig_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		OobResponderRangingConfig_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		OobResponderRangingConfig_Builder(android::ranging::oob::DeviceHandle arg0);
		
		// Methods
		android::ranging::oob::OobResponderRangingConfig build() const;
	};
} // namespace android::ranging::oob

