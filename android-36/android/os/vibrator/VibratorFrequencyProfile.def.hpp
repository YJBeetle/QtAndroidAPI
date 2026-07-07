#pragma once

#include "../../../JObject.hpp"

namespace android::util
{
	class Range;
}
namespace android::util
{
	class SparseArray;
}

namespace android::os::vibrator
{
	class VibratorFrequencyProfile : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit VibratorFrequencyProfile(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VibratorFrequencyProfile(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		android::util::SparseArray getFrequenciesOutputAcceleration() const;
		android::util::Range getFrequencyRange(jfloat arg0) const;
		jfloat getMaxFrequencyHz() const;
		jfloat getMaxOutputAccelerationGs() const;
		jfloat getMinFrequencyHz() const;
		jfloat getOutputAccelerationGs(jfloat arg0) const;
	};
} // namespace android::os::vibrator

