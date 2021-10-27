#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::app::usage
{
	class NetworkStats_Bucket;
}

namespace __jni_impl::android::app::usage
{
	class NetworkStats : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		jboolean getNextBucket(__jni_impl::android::app::usage::NetworkStats_Bucket arg0);
		jboolean hasNextBucket();
	};
} // namespace __jni_impl::android::app::usage

#include "NetworkStats_Bucket.hpp"

namespace __jni_impl::android::app::usage
{
	// Fields
	
	// Constructors
	void NetworkStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.usage.NetworkStats",
			"(V)V");
	}
	
	// Methods
	void NetworkStats::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	jboolean NetworkStats::getNextBucket(__jni_impl::android::app::usage::NetworkStats_Bucket arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getNextBucket",
			"(Landroid/app/usage/NetworkStats$Bucket;)Z",
			arg0.__jniObject().object()
		);
	}
	jboolean NetworkStats::hasNextBucket()
	{
		return __thiz.callMethod<jboolean>(
			"hasNextBucket",
			"()Z"
		);
	}
} // namespace __jni_impl::android::app::usage

namespace android::app::usage
{
	class NetworkStats : public __jni_impl::android::app::usage::NetworkStats
	{
	public:
		NetworkStats(QAndroidJniObject obj) { __thiz = obj; }
		NetworkStats()
		{
			__constructor();
		}
	};
} // namespace android::app::usage

