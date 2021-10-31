#include "./WifiDeviceFilter.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./WifiDeviceFilter_Builder.hpp"

namespace android::companion
{
	// Fields
	
	// QAndroidJniObject forward
	WifiDeviceFilter_Builder::WifiDeviceFilter_Builder(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	WifiDeviceFilter_Builder::WifiDeviceFilter_Builder()
		: __JniBaseClass(
			"android.companion.WifiDeviceFilter$Builder",
			"()V"
		) {}
	
	// Methods
	QAndroidJniObject WifiDeviceFilter_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/companion/WifiDeviceFilter;"
		);
	}
	QAndroidJniObject WifiDeviceFilter_Builder::setNamePattern(java::util::regex::Pattern arg0)
	{
		return callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/WifiDeviceFilter$Builder;",
			arg0.object()
		);
	}
} // namespace android::companion

