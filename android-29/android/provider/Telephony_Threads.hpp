#pragma once

#ifndef ANDROID_PROVIDER_TELEPHONY_THREADS
#define ANDROID_PROVIDER_TELEPHONY_THREADS

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
	class Telephony_Threads : public __JniBaseClass
	{
	public:
		// Fields
		static jint BROADCAST_THREAD();
		static jint COMMON_THREAD();
		static QAndroidJniObject CONTENT_URI();
		static QAndroidJniObject OBSOLETE_THREADS_URI();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jlong getOrCreateThreadId(__jni_impl::android::content::Context arg0, jstring arg1);
		static jlong getOrCreateThreadId(__jni_impl::android::content::Context arg0, const QString &arg1);
		static jlong getOrCreateThreadId(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"
#include "../content/Context.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	jint Telephony_Threads::BROADCAST_THREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$Threads",
			"BROADCAST_THREAD"
		);
	}
	jint Telephony_Threads::COMMON_THREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.provider.Telephony$Threads",
			"COMMON_THREAD"
		);
	}
	QAndroidJniObject Telephony_Threads::CONTENT_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Threads",
			"CONTENT_URI",
			"Landroid/net/Uri;"
		);
	}
	QAndroidJniObject Telephony_Threads::OBSOLETE_THREADS_URI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.provider.Telephony$Threads",
			"OBSOLETE_THREADS_URI",
			"Landroid/net/Uri;"
		);
	}
	
	// Constructors
	void Telephony_Threads::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.Telephony$Threads",
			"(V)V");
	}
	
	// Methods
	jlong Telephony_Threads::getOrCreateThreadId(__jni_impl::android::content::Context arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Telephony$Threads",
			"getOrCreateThreadId",
			"(Landroid/content/Context;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jlong Telephony_Threads::getOrCreateThreadId(__jni_impl::android::content::Context arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Telephony$Threads",
			"getOrCreateThreadId",
			"(Landroid/content/Context;Ljava/lang/String;)J",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jlong Telephony_Threads::getOrCreateThreadId(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.provider.Telephony$Threads",
			"getOrCreateThreadId",
			"(Landroid/content/Context;Ljava/util/Set;)J",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class Telephony_Threads : public __jni_impl::android::provider::Telephony_Threads
	{
	public:
		Telephony_Threads(QAndroidJniObject obj) { __thiz = obj; }
		Telephony_Threads()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_TELEPHONY_THREADS

