#pragma once

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
		static QAndroidJniObject readIntentSenderOrNullFromParcel(__jni_impl::android::os::Parcel arg0);
		static void writeIntentSenderOrNullToParcel(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::os::Parcel arg1);
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getCreatorPackage();
		jint getCreatorUid();
		QAndroidJniObject getCreatorUserHandle();
		jstring getTargetPackage();
		jint hashCode();
		void sendIntent(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4);
		void sendIntent(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4, jstring arg5);
		void sendIntent(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4, const QString &arg5);
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
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
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void IntentSender::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.IntentSender",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject IntentSender::readIntentSenderOrNullFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.IntentSender",
			"readIntentSenderOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/content/IntentSender;",
			arg0.__jniObject().object()
		);
	}
	void IntentSender::writeIntentSenderOrNullToParcel(__jni_impl::android::content::IntentSender arg0, __jni_impl::android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.content.IntentSender",
			"writeIntentSenderOrNullToParcel",
			"(Landroid/content/IntentSender;Landroid/os/Parcel;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	jint IntentSender::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean IntentSender::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring IntentSender::getCreatorPackage()
	{
		return __thiz.callObjectMethod(
			"getCreatorPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IntentSender::getCreatorUid()
	{
		return __thiz.callMethod<jint>(
			"getCreatorUid",
			"()I"
		);
	}
	QAndroidJniObject IntentSender::getCreatorUserHandle()
	{
		return __thiz.callObjectMethod(
			"getCreatorUserHandle",
			"()Landroid/os/UserHandle;"
		);
	}
	jstring IntentSender::getTargetPackage()
	{
		return __thiz.callObjectMethod(
			"getTargetPackage",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint IntentSender::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
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
			arg4.__jniObject().object()
		);
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
			arg5
		);
	}
	void IntentSender::sendIntent(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4, const QString &arg5)
	{
		__thiz.callMethod<void>(
			"sendIntent",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/content/IntentSender$OnFinished;Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			QAndroidJniObject::fromString(arg5).object<jstring>()
		);
	}
	jstring IntentSender::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void IntentSender::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
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

