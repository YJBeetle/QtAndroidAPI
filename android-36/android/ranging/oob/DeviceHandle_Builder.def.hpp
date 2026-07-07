#pragma once

#include "../../../JObject.hpp"

namespace android::ranging
{
	class RangingDevice;
}
namespace android::ranging::oob
{
	class DeviceHandle;
}

namespace android::ranging::oob
{
	class DeviceHandle_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceHandle_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceHandle_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DeviceHandle_Builder(android::ranging::RangingDevice arg0, JObject arg1);
		
		// Methods
		android::ranging::oob::DeviceHandle build() const;
	};
} // namespace android::ranging::oob

