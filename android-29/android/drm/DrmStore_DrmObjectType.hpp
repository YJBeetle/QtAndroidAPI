#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmStore_DrmObjectType : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONTENT();
		static jint RIGHTS_OBJECT();
		static jint TRIGGER_OBJECT();
		static jint UNKNOWN();
		
		DrmStore_DrmObjectType(QAndroidJniObject obj);
		// Constructors
		DrmStore_DrmObjectType();
		
		// Methods
	};
} // namespace android::drm

