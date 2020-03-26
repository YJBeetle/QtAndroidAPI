#pragma once

#ifndef ANDROID_COMPANION_WIFIDEVICEFILTER_BUILDER
#define ANDROID_COMPANION_WIFIDEVICEFILTER_BUILDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::companion
{
	class WifiDeviceFilter;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}

namespace __jni_impl::android::companion
{
	class WifiDeviceFilter_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setNamePattern(__jni_impl::java::util::regex::Pattern arg0);
	};
} // namespace __jni_impl::android::companion

#include "WifiDeviceFilter.hpp"
#include "../../java/util/regex/Pattern.hpp"

namespace __jni_impl::android::companion
{
	// Fields
	
	// Constructors
	void WifiDeviceFilter_Builder::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.companion.WifiDeviceFilter$Builder",
			"()V");
	}
	
	// Methods
	QAndroidJniObject WifiDeviceFilter_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/companion/WifiDeviceFilter;"
		);
	}
	QAndroidJniObject WifiDeviceFilter_Builder::setNamePattern(__jni_impl::java::util::regex::Pattern arg0)
	{
		return __thiz.callObjectMethod(
			"setNamePattern",
			"(Ljava/util/regex/Pattern;)Landroid/companion/WifiDeviceFilter$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::companion

namespace android::companion
{
	class WifiDeviceFilter_Builder : public __jni_impl::android::companion::WifiDeviceFilter_Builder
	{
	public:
		WifiDeviceFilter_Builder(QAndroidJniObject obj) { __thiz = obj; }
		WifiDeviceFilter_Builder()
		{
			__constructor();
		}
	};
} // namespace android::companion

#endif // ANDROID_COMPANION_WIFIDEVICEFILTER_BUILDER

