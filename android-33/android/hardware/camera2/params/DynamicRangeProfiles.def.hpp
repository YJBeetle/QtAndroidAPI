#pragma once

#include "../../../../JObject.hpp"

class JLongArray;

namespace android::hardware::camera2::params
{
	class DynamicRangeProfiles : public JObject
	{
	public:
		// Fields
		static jlong DOLBY_VISION_10B_HDR_OEM();
		static jlong DOLBY_VISION_10B_HDR_OEM_PO();
		static jlong DOLBY_VISION_10B_HDR_REF();
		static jlong DOLBY_VISION_10B_HDR_REF_PO();
		static jlong DOLBY_VISION_8B_HDR_OEM();
		static jlong DOLBY_VISION_8B_HDR_OEM_PO();
		static jlong DOLBY_VISION_8B_HDR_REF();
		static jlong DOLBY_VISION_8B_HDR_REF_PO();
		static jlong HDR10();
		static jlong HDR10_PLUS();
		static jlong HLG10();
		static jlong PUBLIC_MAX();
		static jlong STANDARD();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DynamicRangeProfiles(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DynamicRangeProfiles(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		DynamicRangeProfiles(JLongArray arg0);
		
		// Methods
		JObject getProfileCaptureRequestConstraints(jlong arg0) const;
		JObject getSupportedProfiles() const;
		jboolean isExtraLatencyPresent(jlong arg0) const;
	};
} // namespace android::hardware::camera2::params

