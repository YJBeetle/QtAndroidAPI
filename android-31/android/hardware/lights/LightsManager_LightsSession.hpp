#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::hardware::lights
{
	class LightsRequest;
}

namespace android::hardware::lights
{
	class LightsManager_LightsSession : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LightsManager_LightsSession(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		LightsManager_LightsSession(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		void requestLights(android::hardware::lights::LightsRequest arg0);
	};
} // namespace android::hardware::lights

