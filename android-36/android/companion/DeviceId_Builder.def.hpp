#pragma once

#include "../../JObject.hpp"

namespace android::companion
{
	class DeviceId;
}
namespace android::net
{
	class MacAddress;
}
class JString;

namespace android::companion
{
	class DeviceId_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit DeviceId_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DeviceId_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		DeviceId_Builder();
		
		// Methods
		android::companion::DeviceId build() const;
		android::companion::DeviceId_Builder setCustomId(JString arg0) const;
		android::companion::DeviceId_Builder setMacAddress(android::net::MacAddress arg0) const;
	};
} // namespace android::companion

