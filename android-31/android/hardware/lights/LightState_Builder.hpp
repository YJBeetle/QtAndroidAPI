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
		
		// QJniObject forward
		template<typename ...Ts> explicit LightState_Builder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		LightState_Builder(QJniObject obj);
		
		// Constructors
		LightState_Builder();
		
		// Methods
		android::hardware::lights::LightState build() const;
		android::hardware::lights::LightState_Builder setColor(jint arg0) const;
		android::hardware::lights::LightState_Builder setPlayerId(jint arg0) const;
	};
} // namespace android::hardware::lights

