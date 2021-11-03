#pragma once

#include "../../JObject.hpp"

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
	class PowerManager_WakeLock : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PowerManager_WakeLock(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PowerManager_WakeLock(QAndroidJniObject obj);
		
		// Constructors
		
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

