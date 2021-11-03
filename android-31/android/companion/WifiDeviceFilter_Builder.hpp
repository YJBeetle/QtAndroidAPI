#pragma once

#include "../../JObject.hpp"

namespace android::companion
{
	class WifiDeviceFilter;
}
namespace android::net
{
	class MacAddress;
}
namespace java::util::regex
{
	class Pattern;
}

namespace android::companion
{
	class WifiDeviceFilter_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit WifiDeviceFilter_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		WifiDeviceFilter_Builder(QAndroidJniObject obj);
		
		// Constructors
		WifiDeviceFilter_Builder();
		
		// Methods
		android::companion::WifiDeviceFilter build() const;
		android::companion::WifiDeviceFilter_Builder setBssid(android::net::MacAddress arg0) const;
		android::companion::WifiDeviceFilter_Builder setBssidMask(android::net::MacAddress arg0) const;
		android::companion::WifiDeviceFilter_Builder setNamePattern(java::util::regex::Pattern arg0) const;
	};
} // namespace android::companion

