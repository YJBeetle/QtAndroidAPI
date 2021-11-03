#include "./LightState.hpp"
#include "./LightState_Builder.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// QAndroidJniObject forward
	LightState_Builder::LightState_Builder(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	LightState_Builder::LightState_Builder()
		: JObject(
			"android.hardware.lights.LightState$Builder",
			"()V"
		) {}
	
	// Methods
	android::hardware::lights::LightState LightState_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/lights/LightState;"
		);
	}
	android::hardware::lights::LightState_Builder LightState_Builder::setColor(jint arg0) const
	{
		return callObjectMethod(
			"setColor",
			"(I)Landroid/hardware/lights/LightState$Builder;",
			arg0
		);
	}
	android::hardware::lights::LightState_Builder LightState_Builder::setPlayerId(jint arg0) const
	{
		return callObjectMethod(
			"setPlayerId",
			"(I)Landroid/hardware/lights/LightState$Builder;",
			arg0
		);
	}
} // namespace android::hardware::lights

