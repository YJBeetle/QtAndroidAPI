#pragma once

#include "./ZenDeviceEffects.def.hpp"
#include "./ZenDeviceEffects_Builder.def.hpp"

namespace android::service::notification
{
	// Fields
	
	// Constructors
	inline ZenDeviceEffects_Builder::ZenDeviceEffects_Builder()
		: JObject(
			"android.service.notification.ZenDeviceEffects$Builder",
			"()V"
		) {}
	inline ZenDeviceEffects_Builder::ZenDeviceEffects_Builder(android::service::notification::ZenDeviceEffects arg0)
		: JObject(
			"android.service.notification.ZenDeviceEffects$Builder",
			"(Landroid/service/notification/ZenDeviceEffects;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::service::notification::ZenDeviceEffects ZenDeviceEffects_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/service/notification/ZenDeviceEffects;"
		);
	}
	inline android::service::notification::ZenDeviceEffects_Builder ZenDeviceEffects_Builder::setShouldDimWallpaper(jboolean arg0) const
	{
		return callObjectMethod(
			"setShouldDimWallpaper",
			"(Z)Landroid/service/notification/ZenDeviceEffects$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenDeviceEffects_Builder ZenDeviceEffects_Builder::setShouldDisplayGrayscale(jboolean arg0) const
	{
		return callObjectMethod(
			"setShouldDisplayGrayscale",
			"(Z)Landroid/service/notification/ZenDeviceEffects$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenDeviceEffects_Builder ZenDeviceEffects_Builder::setShouldSuppressAmbientDisplay(jboolean arg0) const
	{
		return callObjectMethod(
			"setShouldSuppressAmbientDisplay",
			"(Z)Landroid/service/notification/ZenDeviceEffects$Builder;",
			arg0
		);
	}
	inline android::service::notification::ZenDeviceEffects_Builder ZenDeviceEffects_Builder::setShouldUseNightMode(jboolean arg0) const
	{
		return callObjectMethod(
			"setShouldUseNightMode",
			"(Z)Landroid/service/notification/ZenDeviceEffects$Builder;",
			arg0
		);
	}
} // namespace android::service::notification

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::notification;
#endif
