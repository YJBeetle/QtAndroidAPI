#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::drm
{
	class DrmStore : public __JniBaseClass
	{
	public:
		// Fields
		
		DrmStore(QAndroidJniObject obj);
		// Constructors
		DrmStore();
		
		// Methods
	};
} // namespace android::drm

