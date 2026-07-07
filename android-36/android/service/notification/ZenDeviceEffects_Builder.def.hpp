#pragma once

#include "../../../JObject.hpp"

namespace android::service::notification
{
	class ZenDeviceEffects;
}

namespace android::service::notification
{
	class ZenDeviceEffects_Builder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ZenDeviceEffects_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ZenDeviceEffects_Builder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ZenDeviceEffects_Builder();
		ZenDeviceEffects_Builder(android::service::notification::ZenDeviceEffects arg0);
		
		// Methods
		android::service::notification::ZenDeviceEffects build() const;
		android::service::notification::ZenDeviceEffects_Builder setShouldDimWallpaper(jboolean arg0) const;
		android::service::notification::ZenDeviceEffects_Builder setShouldDisplayGrayscale(jboolean arg0) const;
		android::service::notification::ZenDeviceEffects_Builder setShouldSuppressAmbientDisplay(jboolean arg0) const;
		android::service::notification::ZenDeviceEffects_Builder setShouldUseNightMode(jboolean arg0) const;
	};
} // namespace android::service::notification

