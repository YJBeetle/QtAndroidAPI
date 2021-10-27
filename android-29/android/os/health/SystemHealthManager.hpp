#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os::health
{
	class HealthStats;
}

namespace __jni_impl::android::os::health
{
	class SystemHealthManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject takeMyUidSnapshot();
		QAndroidJniObject takeUidSnapshot(jint arg0);
		jarray takeUidSnapshots(jintArray arg0);
	};
} // namespace __jni_impl::android::os::health

#include "HealthStats.hpp"

namespace __jni_impl::android::os::health
{
	// Fields
	
	// Constructors
	void SystemHealthManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.health.SystemHealthManager",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject SystemHealthManager::takeMyUidSnapshot()
	{
		return __thiz.callObjectMethod(
			"takeMyUidSnapshot",
			"()Landroid/os/health/HealthStats;"
		);
	}
	QAndroidJniObject SystemHealthManager::takeUidSnapshot(jint arg0)
	{
		return __thiz.callObjectMethod(
			"takeUidSnapshot",
			"(I)Landroid/os/health/HealthStats;",
			arg0
		);
	}
	jarray SystemHealthManager::takeUidSnapshots(jintArray arg0)
	{
		return __thiz.callObjectMethod(
			"takeUidSnapshots",
			"([I)[Landroid/os/health/HealthStats;",
			arg0
		).object<jarray>();
	}
} // namespace __jni_impl::android::os::health

namespace android::os::health
{
	class SystemHealthManager : public __jni_impl::android::os::health::SystemHealthManager
	{
	public:
		SystemHealthManager(QAndroidJniObject obj) { __thiz = obj; }
		SystemHealthManager()
		{
			__constructor();
		}
	};
} // namespace android::os::health

