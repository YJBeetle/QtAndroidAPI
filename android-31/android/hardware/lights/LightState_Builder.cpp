#include "./LightState.hpp"
#include "./LightState_Builder.hpp"

namespace android::hardware::lights
{
	// Fields
	
	// QJniObject forward
	LightState_Builder::LightState_Builder(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	LightState_Builder::LightState_Builder()
		: __JniBaseClass(
			"android.hardware.lights.LightState$Builder",
			"()V"
		) {}
	
	// Methods
	android::hardware::lights::LightState LightState_Builder::build()
	{
		return callObjectMethod(
			"build",
			"()Landroid/hardware/lights/LightState;"
		);
	}
	android::hardware::lights::LightState_Builder LightState_Builder::setColor(jint arg0)
	{
		return callObjectMethod(
			"setColor",
			"(I)Landroid/hardware/lights/LightState$Builder;",
			arg0
		);
	}
	android::hardware::lights::LightState_Builder LightState_Builder::setPlayerId(jint arg0)
	{
		return callObjectMethod(
			"setPlayerId",
			"(I)Landroid/hardware/lights/LightState$Builder;",
			arg0
		);
	}
} // namespace android::hardware::lights

