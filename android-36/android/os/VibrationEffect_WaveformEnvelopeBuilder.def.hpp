#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class VibrationEffect;
}

namespace android::os
{
	class VibrationEffect_WaveformEnvelopeBuilder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VibrationEffect_WaveformEnvelopeBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VibrationEffect_WaveformEnvelopeBuilder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		VibrationEffect_WaveformEnvelopeBuilder();
		
		// Methods
		android::os::VibrationEffect_WaveformEnvelopeBuilder addControlPoint(jfloat arg0, jfloat arg1, jlong arg2) const;
		android::os::VibrationEffect build() const;
		android::os::VibrationEffect_WaveformEnvelopeBuilder setInitialFrequencyHz(jfloat arg0) const;
	};
} // namespace android::os

