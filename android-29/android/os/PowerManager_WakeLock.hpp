#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class PowerManager;
}
namespace android::os
{
	class WorkSource;
}

namespace android::os
{
	class PowerManager_WakeLock : public __JniBaseClass
	{
	public:
		// Fields
		
		PowerManager_WakeLock(QAndroidJniObject obj);
		// Constructors
		PowerManager_WakeLock() = default;
		
		// Methods
		void acquire();
		void acquire(jlong arg0);
		jboolean isHeld();
		void release();
		void release(jint arg0);
		void setReferenceCounted(jboolean arg0);
		void setWorkSource(android::os::WorkSource arg0);
		jstring toString();
	};
} // namespace android::os

