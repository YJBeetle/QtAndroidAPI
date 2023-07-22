#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::lights
{
	class LightsRequest : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit LightsRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LightsRequest(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		JObject getLightStates() const;
		JObject getLights() const;
		JObject getLightsAndStates() const;
	};
} // namespace android::hardware::lights

