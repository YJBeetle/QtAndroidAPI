#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::lights
{
	class Light;
}
namespace android::hardware::lights
{
	class LightState;
}
namespace android::hardware::lights
{
	class LightsManager_LightsSession;
}

namespace android::hardware::lights
{
	class LightsManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LightsManager(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LightsManager(QJniObject obj);
		
		// Constructors
		
		// Methods
		android::hardware::lights::LightState getLightState(android::hardware::lights::Light arg0);
		__JniBaseClass getLights();
		android::hardware::lights::LightsManager_LightsSession openSession();
	};
} // namespace android::hardware::lights

