#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmStore_RightsStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint RIGHTS_EXPIRED();
		static jint RIGHTS_INVALID();
		static jint RIGHTS_NOT_ACQUIRED();
		static jint RIGHTS_VALID();
		
		DrmStore_RightsStatus(QAndroidJniObject obj);
		// Constructors
		DrmStore_RightsStatus();
		
		// Methods
	};
} // namespace android::drm

