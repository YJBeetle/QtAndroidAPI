#pragma once

#include "../../JObject.hpp"

namespace java::util
{
	class HashMap;
}

namespace android::drm
{
	class DrmEvent : public JObject
	{
	public:
		// Fields
		static jstring DRM_INFO_OBJECT();
		static jstring DRM_INFO_STATUS_OBJECT();
		static jint TYPE_ALL_RIGHTS_REMOVED();
		static jint TYPE_DRM_INFO_PROCESSED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit DrmEvent(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		DrmEvent(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jobject getAttribute(jstring arg0);
		jstring getMessage();
		jint getType();
		jint getUniqueId();
	};
} // namespace android::drm

