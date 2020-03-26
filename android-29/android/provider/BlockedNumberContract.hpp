#pragma once

#ifndef ANDROID_PROVIDER_BLOCKEDNUMBERCONTRACT
#define ANDROID_PROVIDER_BLOCKEDNUMBERCONTRACT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::provider
{
	class BlockedNumberContract : public __JniBaseClass
	{
	public:
		// Fields
		static jstring AUTHORITY();
		static QAndroidJniObject AUTHORITY_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jboolean isBlocked(__jni_impl::android::content::Context arg0, jstring arg1);
		static jboolean canCurrentUserBlockNumbers(__jni_impl::android::content::Context arg0);
		static jint unblock(__jni_impl::android::content::Context arg0, jstring arg1);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jstring BlockedNumberContract::AUTHORITY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract",
			"AUTHORITY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject BlockedNumberContract::AUTHORITY_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.BlockedNumberContract",
			"AUTHORITY_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void BlockedNumberContract::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.BlockedNumberContract",
			"(V)V");
	}
	
	// Methods
	jboolean BlockedNumberContract::isBlocked(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.BlockedNumberContract",
			"isBlocked",
			"(Landroid/content/Context;Ljava/lang/String;)Z",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean BlockedNumberContract::canCurrentUserBlockNumbers(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticMethod<jboolean>(
			"android.provider.BlockedNumberContract",
			"canCurrentUserBlockNumbers",
			"(Landroid/content/Context;)Z",
			arg0.__jniObject().object()
		);
	}
	jint BlockedNumberContract::unblock(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.provider.BlockedNumberContract",
			"unblock",
			"(Landroid/content/Context;Ljava/lang/String;)I",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class BlockedNumberContract : public __jni_impl::android::provider::BlockedNumberContract
	{
	public:
		BlockedNumberContract(QAndroidJniObject obj) { __thiz = obj; }
		BlockedNumberContract()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_BLOCKEDNUMBERCONTRACT

