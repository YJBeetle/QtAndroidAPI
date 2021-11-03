#include "./WifiDeviceFilter.hpp"
#include "../net/MacAddress.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./WifiDeviceFilter_Builder.hpp"

namespace android::companion
{
	// Fields
	
	// QAndroidJniObject forward
	WifiDeviceFilter_Builder::WifiDeviceFilter_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	WifiDeviceFilter_Builder::WifiDeviceFilter_Builder()
		: JObject(
			"android.companion.WifiDeviceFilter$Builder",
			"()V"
		) {}
	
	// Methods
	android::companion::WifiDeviceFilter WifiDeviceFilter_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/WifiDeviceFilter;"
		);
	}
	android::companion::WifiDeviceFilter_Builder WifiDeviceFilter_Builder::setBssid(android::net::MacAddress arg0)
	{
		return callObjectMethod(
			"setBssid",
			"(Landroid/net/MacAddress;)Landroid/companion/WifiDeviceFilter$Builder;",
			arg0.object()
		);
	}
	android::companion::WifiDeviceFilter_Builder WifiDeviceFilter_Builder::setBssidMask(android::net::MacAddress arg0)
	{
		return callObjectMethod(
			"setBssidMask",
			"(Landroid/net/MacAddress;)Landroid/companion/WifiDeviceFilter$Builder;",
			arg0.object()
		);
	}
	android::companion::WifiDeviceFilter_Builder WifiDeviceFilter_Builder::setNamePattern(java::util::regex::Pattern arg0)
	{
		return callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/WifiDeviceFilter$Builder;",
			arg0.object()
		);
	}
} // namespace android::companion

