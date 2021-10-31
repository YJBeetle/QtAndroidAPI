#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::util
{
	class HashMap;
}

namespace android::drm
{
	class DrmEvent : public __JniBaseClass
	{
	public:
		// Fields
		static jstring DRM_INFO_OBJECT();
		static jstring DRM_INFO_STATUS_OBJECT();
		static jint TYPE_ALL_RIGHTS_REMOVED();
		static jint TYPE_DRM_INFO_PROCESSED();
		
		DrmEvent(QAndroidJniObject obj);
		// Constructors
		DrmEvent() = default;
		
		// Methods
		jobject getAttribute(jstring arg0);
		jstring getMessage();
		jint getType();
		jint getUniqueId();
	};
} // namespace android::drm

