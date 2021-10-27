#include "./WifiDeviceFilter.hpp"
#include "../../java/util/regex/Pattern.hpp"
#include "./WifiDeviceFilter_Builder.hpp"

namespace android::companion
{
	// Fields
	
	WifiDeviceFilter_Builder::WifiDeviceFilter_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	WifiDeviceFilter_Builder::WifiDeviceFilter_Builder()
	{
		__thiz = QAndroidJniObject(
			"android.companion.WifiDeviceFilter$Builder",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject WifiDeviceFilter_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/companion/WifiDeviceFilter;"
		);
	}
	QAndroidJniObject WifiDeviceFilter_Builder::setNamePattern(java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/WifiDeviceFilter$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace android::companion

