#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::lights
{
	class LightState;
}

namespace android::hardware::lights
{
	class LightState_Builder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LightState_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LightState_Builder(QAndroidJniObject obj);
		
		// Constructors
		LightState_Builder();
		
		// Methods
		android::hardware::lights::LightState build();
		android::hardware::lights::LightState_Builder setColor(jint arg0);
		android::hardware::lights::LightState_Builder setPlayerId(jint arg0);
	};
} // namespace android::hardware::lights

