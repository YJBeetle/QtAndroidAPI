#pragma once

#ifndef ANDROID_CONTENT_INTENTSENDER
#define ANDROID_CONTENT_INTENTSENDER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}

namespace __jni_impl::android::content
{
	class IntentSender : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		void sendIntent(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4);
		void sendIntent(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4, jstring arg5);
		static void writeIntentSenderOrNullToParcel(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::os::Parcel arg1);
		static QAndroidJniObject readIntentSenderOrNullFromParcel(__jni_impl::android::os::Parcel arg0);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getTargetPackage();
		QAndroidJniObject getCreatorPackage();
		jint getCreatorUid();
		QAndroidJniObject getCreatorUserHandle();
	};
} // namespace __jni_impl::android::content

#include "Context.hpp"
#include "Intent.hpp"
#include "../os/Handler.hpp"
#include "../os/Parcel.hpp"
#include "../os/UserHandle.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject IntentSender::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.IntentSender",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void IntentSender::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentSender",
			"(V)V");
	}
	
	// Methods
	jboolean IntentSender::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject IntentSender::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint IntentSender::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void IntentSender::sendIntent(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4)
	{
		__thiz.callMethod<void>(
			"sendIntent",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/content/IntentSender$OnFinished;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	void IntentSender::sendIntent(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4, jstring arg5)
	{
		__thiz.callMethod<void>(
			"sendIntent",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/content/IntentSender$OnFinished;Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void IntentSender::writeIntentSenderOrNullToParcel(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.IntentSender",
			"writeIntentSenderOrNullToParcel",
			"(Landroid/content/IntentSender;Landroid/os/Parcel;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject IntentSender::readIntentSenderOrNullFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.IntentSender",
			"readIntentSenderOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/content/IntentSender;",
			arg0.__jniObject().object());
	}
	jint IntentSender::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void IntentSender::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject IntentSender::getTargetPackage()
	{
		return __thiz.callObjectMethod(
			"getTargetPackage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject IntentSender::getCreatorPackage()
	{
		return __thiz.callObjectMethod(
			"getCreatorPackage",
			"()Ljava/lang/String;");
	}
	jint IntentSender::getCreatorUid()
	{
		return __thiz.callMethod<jint>(
			"getCreatorUid",
			"()I");
	}
	QAndroidJniObject IntentSender::getCreatorUserHandle()
	{
		return __thiz.callObjectMethod(
			"getCreatorUserHandle",
			"()Landroid/os/UserHandle;");
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class IntentSender : public __jni_impl::android::content::IntentSender
	{
	public:
		IntentSender(QAndroidJniObject obj) { __thiz = obj; }
		IntentSender()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_INTENTSENDER

