#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class VibrationEffect;
}

namespace android::os
{
	class VibrationEffect_BasicEnvelopeBuilder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VibrationEffect_BasicEnvelopeBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VibrationEffect_BasicEnvelopeBuilder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VibrationEffect_BasicEnvelopeBuilder();
		
		// Methods
		android::os::VibrationEffect_BasicEnvelopeBuilder addControlPoint(jfloat arg0, jfloat arg1, jlong arg2) const;
		android::os::VibrationEffect build() const;
		android::os::VibrationEffect_BasicEnvelopeBuilder setInitialSharpness(jfloat arg0) const;
	};
} // namespace android::os

