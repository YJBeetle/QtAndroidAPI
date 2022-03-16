#pragma once

#include "./WifiDeviceFilter.def.hpp"
#include "../net/MacAddress.def.hpp"
#include "../../java/util/regex/Pattern.def.hpp"
#include "./WifiDeviceFilter_Builder.def.hpp"

namespace android::companion
{
	// Fields
	
	// Constructors
	inline WifiDeviceFilter_Builder::WifiDeviceFilter_Builder()
		: JObject(
			"android.companion.WifiDeviceFilter$Builder",
			"()V"
		) {}
	
	// Methods
	inline android::companion::WifiDeviceFilter WifiDeviceFilter_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/WifiDeviceFilter;"
		);
	}
	inline android::companion::WifiDeviceFilter_Builder WifiDeviceFilter_Builder::setBssid(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"setBssid",
			"(Landroid/net/MacAddress;)Landroid/companion/WifiDeviceFilter$Builder;",
			arg0.object()
		);
	}
	inline android::companion::WifiDeviceFilter_Builder WifiDeviceFilter_Builder::setBssidMask(android::net::MacAddress arg0) const
	{
		return callObjectMethod(
			"setBssidMask",
			"(Landroid/net/MacAddress;)Landroid/companion/WifiDeviceFilter$Builder;",
			arg0.object()
		);
	}
	inline android::companion::WifiDeviceFilter_Builder WifiDeviceFilter_Builder::setNamePattern(java::util::regex::Pattern arg0) const
	{
		return callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/WifiDeviceFilter$Builder;",
			arg0.object()
		);
	}
} // namespace android::companion

// Base class headers

