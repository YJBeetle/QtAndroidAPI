#pragma once

#include "../../../JObject.hpp"

namespace android::hardware::lights
{
	class LightsRequest : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit LightsRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LightsRequest(QJniObject obj);
		
		// Constructors
		
		// Methods
		JObject getLightStates() const;
		JObject getLights() const;
		JObject getLightsAndStates() const;
	};
} // namespace android::hardware::lights

