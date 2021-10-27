#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net::wifi
{
	class WifiManager;
}
namespace __jni_impl::android::os
{
	class WorkSource;
}

namespace __jni_impl::android::net::wifi
{
	class WifiManager_WifiLock : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void acquire();
		jboolean isHeld();
		void release();
		void setReferenceCounted(jboolean arg0);
		void setWorkSource(__jni_impl::android::os::WorkSource arg0);
		jstring toString();
	};
} // namespace __jni_impl::android::net::wifi

#include "./WifiManager.hpp"
#include "../../os/WorkSource.hpp"

namespace __jni_impl::android::net::wifi
{
	// Fields
	
	// Constructors
	void WifiManager_WifiLock::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.net.wifi.WifiManager$WifiLock",
			"(V)V");
	}
	
	// Methods
	void WifiManager_WifiLock::acquire()
	{
		__thiz.callMethod<void>(
			"acquire",
			"()V"
		);
	}
	jboolean WifiManager_WifiLock::isHeld()
	{
		return __thiz.callMethod<jboolean>(
			"isHeld",
			"()Z"
		);
	}
	void WifiManager_WifiLock::release()
	{
		__thiz.callMethod<void>(
			"release",
			"()V"
		);
	}
	void WifiManager_WifiLock::setReferenceCounted(jboolean arg0)
	{
		__thiz.callMethod<void>(
			"setReferenceCounted",
			"(Z)V",
			arg0
		);
	}
	void WifiManager_WifiLock::setWorkSource(__jni_impl::android::os::WorkSource arg0)
	{
		__thiz.callMethod<void>(
			"setWorkSource",
			"(Landroid/os/WorkSource;)V",
			arg0.__jniObject().object()
		);
	}
	jstring WifiManager_WifiLock::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::net::wifi

namespace android::net::wifi
{
	class WifiManager_WifiLock : public __jni_impl::android::net::wifi::WifiManager_WifiLock
	{
	public:
		WifiManager_WifiLock(QAndroidJniObject obj) { __thiz = obj; }
		WifiManager_WifiLock()
		{
			__constructor();
		}
	};
} // namespace android::net::wifi

