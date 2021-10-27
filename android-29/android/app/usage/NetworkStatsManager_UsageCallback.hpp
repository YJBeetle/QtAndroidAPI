#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::app::usage
{
	class NetworkStatsManager_UsageCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onThresholdReached(jint arg0, jstring arg1);
		void onThresholdReached(jint arg0, const QString &arg1);
	};
} // namespace __jni_impl::android::app::usage


namespace __jni_impl::android::app::usage
{
	// Fields
	
	// Constructors
	void NetworkStatsManager_UsageCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.NetworkStatsManager$UsageCallback",
			"()V"
		);
	}
	
	// Methods
	void NetworkStatsManager_UsageCallback::onThresholdReached(jint arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"onThresholdReached",
			"(ILjava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void NetworkStatsManager_UsageCallback::onThresholdReached(jint arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"onThresholdReached",
			"(ILjava/lang/String;)V",
			arg0,
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class NetworkStatsManager_UsageCallback : public __jni_impl::android::app::usage::NetworkStatsManager_UsageCallback
	{
	public:
		NetworkStatsManager_UsageCallback(QAndroidJniObject obj) { __thiz = obj; }
		NetworkStatsManager_UsageCallback()
		{
			__constructor();
		}
	};
} // namespace android::app::usage

