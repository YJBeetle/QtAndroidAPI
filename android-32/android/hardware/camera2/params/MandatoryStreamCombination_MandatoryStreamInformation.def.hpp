#pragma once

#include "../../../../JObject.hpp"

class JObject;

namespace android::hardware::camera2::params
{
	class MandatoryStreamCombination_MandatoryStreamInformation : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MandatoryStreamCombination_MandatoryStreamInformation(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MandatoryStreamCombination_MandatoryStreamInformation(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jboolean equals(JObject arg0) const;
		JObject getAvailableSizes() const;
		jint getFormat() const;
		jint hashCode() const;
		jboolean isInput() const;
		jboolean isMaximumSize() const;
		jboolean isUltraHighResolution() const;
	};
} // namespace android::hardware::camera2::params

