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
	class LightsRequest;
}

namespace android::hardware::lights
{
	class LightsRequest_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LightsRequest_Builder(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LightsRequest_Builder(QJniObject obj);
		
		// Constructors
		LightsRequest_Builder();
		
		// Methods
		android::hardware::lights::LightsRequest_Builder addLight(android::hardware::lights::Light arg0, android::hardware::lights::LightState arg1);
		android::hardware::lights::LightsRequest build();
		android::hardware::lights::LightsRequest_Builder clearLight(android::hardware::lights::Light arg0);
	};
} // namespace android::hardware::lights

