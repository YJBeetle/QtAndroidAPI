#pragma once

#include "../../../../JObject.hpp"

class JLongArray;
namespace android::graphics
{
	class ColorSpace_Named;
}

namespace android::hardware::camera2::params
{
	class ColorSpaceProfiles : public JObject
	{
	public:
		// Fields
		static jint UNSPECIFIED();
		
		// QJniObject forward
		template<typename ...Ts> explicit ColorSpaceProfiles(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpaceProfiles(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		ColorSpaceProfiles(JLongArray arg0);
		
		// Methods
		JObject getSupportedColorSpaces(jint arg0) const;
		JObject getSupportedColorSpacesForDynamicRange(jint arg0, jlong arg1) const;
		JObject getSupportedDynamicRangeProfiles(android::graphics::ColorSpace_Named arg0, jint arg1) const;
		JObject getSupportedImageFormatsForColorSpace(android::graphics::ColorSpace_Named arg0) const;
	};
} // namespace android::hardware::camera2::params

