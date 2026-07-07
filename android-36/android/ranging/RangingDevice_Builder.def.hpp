#pragma once

#include "../../JObject.hpp"

namespace android::ranging
{
	class RangingDevice;
}
namespace java::util
{
	class UUID;
}

namespace android::ranging
{
	class RangingDevice_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit RangingDevice_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RangingDevice_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		RangingDevice_Builder();
		
		// Methods
		android::ranging::RangingDevice build() const;
		android::ranging::RangingDevice_Builder setUuid(java::util::UUID arg0) const;
	};
} // namespace android::ranging

