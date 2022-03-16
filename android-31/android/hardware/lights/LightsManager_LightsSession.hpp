#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::lights
{
	class LightsRequest;
}

namespace android::hardware::lights
{
	class LightsManager_LightsSession : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LightsManager_LightsSession(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LightsManager_LightsSession(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		void requestLights(android::hardware::lights::LightsRequest arg0) const;
	};
} // namespace android::hardware::lights

