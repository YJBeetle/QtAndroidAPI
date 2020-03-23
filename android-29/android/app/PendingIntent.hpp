#pragma once

#ifndef ANDROID_APP_PENDINGINTENT
#define ANDROID_APP_PENDINGINTENT

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
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::content
{
	class IntentSender;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::os
{
	class UserHandle;
}

namespace __jni_impl::android::app
{
	class PendingIntent : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint FLAG_CANCEL_CURRENT();
		static jint FLAG_IMMUTABLE();
		static jint FLAG_NO_CREATE();
		static jint FLAG_ONE_SHOT();
		static jint FLAG_UPDATE_CURRENT();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		void cancel();
		static QAndroidJniObject getBroadcast(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3);
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static QAndroidJniObject getActivity(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3);
		static QAndroidJniObject getActivity(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3, __jni_impl::android::os::Bundle arg4);
		static QAndroidJniObject getActivities(__jni_impl::android::content::Context arg0, jint arg1, jarray arg2, jint arg3, __jni_impl::android::os::Bundle arg4);
		static QAndroidJniObject getActivities(__jni_impl::android::content::Context arg0, jint arg1, jarray arg2, jint arg3);
		static QAndroidJniObject getService(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3);
		static QAndroidJniObject getForegroundService(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3);
		QAndroidJniObject getIntentSender();
		void send(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4);
		void send(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4, jstring arg5, __jni_impl::android::os::Bundle arg6);
		void send(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4, jstring arg5);
		void send();
		void send(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2);
		void send(jint arg0);
		void send(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2);
		QAndroidJniObject getTargetPackage();
		QAndroidJniObject getCreatorPackage();
		jint getCreatorUid();
		QAndroidJniObject getCreatorUserHandle();
		static void writePendingIntentOrNullToParcel(__jni_impl::android::app::PendingIntent arg0, __jni_impl::android::os::Parcel arg1);
		static QAndroidJniObject readPendingIntentOrNullFromParcel(__jni_impl::android::os::Parcel arg0);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../content/Intent.hpp"
#include "../os/Parcel.hpp"
#include "../os/Bundle.hpp"
#include "../content/IntentSender.hpp"
#include "../os/Handler.hpp"
#include "../os/UserHandle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject PendingIntent::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.PendingIntent",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	jint PendingIntent::FLAG_CANCEL_CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_CANCEL_CURRENT");
	}
	jint PendingIntent::FLAG_IMMUTABLE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_IMMUTABLE");
	}
	jint PendingIntent::FLAG_NO_CREATE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_NO_CREATE");
	}
	jint PendingIntent::FLAG_ONE_SHOT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_ONE_SHOT");
	}
	jint PendingIntent::FLAG_UPDATE_CURRENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.PendingIntent",
			"FLAG_UPDATE_CURRENT");
	}
	
	// Constructors
	void PendingIntent::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.PendingIntent",
			"(V)V");
	}
	
	// Methods
	jboolean PendingIntent::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject PendingIntent::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint PendingIntent::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	void PendingIntent::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V");
	}
	QAndroidJniObject PendingIntent::getBroadcast(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getBroadcast",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	jint PendingIntent::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void PendingIntent::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject PendingIntent::getActivity(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getActivity",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject PendingIntent::getActivity(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3, __jni_impl::android::os::Bundle arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getActivity",
			"(Landroid/content/Context;ILandroid/content/Intent;ILandroid/os/Bundle;)Landroid/app/PendingIntent;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3,
			arg4.__jniObject().object());
	}
	QAndroidJniObject PendingIntent::getActivities(__jni_impl::android::content::Context arg0, jint arg1, jarray arg2, jint arg3, __jni_impl::android::os::Bundle arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getActivities",
			"(Landroid/content/Context;I[Landroid/content/Intent;ILandroid/os/Bundle;)Landroid/app/PendingIntent;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4.__jniObject().object());
	}
	QAndroidJniObject PendingIntent::getActivities(__jni_impl::android::content::Context arg0, jint arg1, jarray arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getActivities",
			"(Landroid/content/Context;I[Landroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3);
	}
	QAndroidJniObject PendingIntent::getService(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getService",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject PendingIntent::getForegroundService(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"getForegroundService",
			"(Landroid/content/Context;ILandroid/content/Intent;I)Landroid/app/PendingIntent;",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3);
	}
	QAndroidJniObject PendingIntent::getIntentSender()
	{
		return __thiz.callObjectMethod(
			"getIntentSender",
			"()Landroid/content/IntentSender;");
	}
	void PendingIntent::send(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4)
	{
		__thiz.callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/app/PendingIntent$OnFinished;Landroid/os/Handler;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object());
	}
	void PendingIntent::send(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4, jstring arg5, __jni_impl::android::os::Bundle arg6)
	{
		__thiz.callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/app/PendingIntent$OnFinished;Landroid/os/Handler;Ljava/lang/String;Landroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5,
			arg6.__jniObject().object());
	}
	void PendingIntent::send(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2, __jni_impl::__JniBaseClass arg3, __jni_impl::android::os::Handler arg4, jstring arg5)
	{
		__thiz.callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;Landroid/app/PendingIntent$OnFinished;Landroid/os/Handler;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object(),
			arg5);
	}
	void PendingIntent::send()
	{
		__thiz.callMethod<void>(
			"send",
			"()V");
	}
	void PendingIntent::send(__jni_impl::android::content::Context arg0, jint arg1, __jni_impl::android::content::Intent arg2)
	{
		__thiz.callMethod<void>(
			"send",
			"(Landroid/content/Context;ILandroid/content/Intent;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2.__jniObject().object());
	}
	void PendingIntent::send(jint arg0)
	{
		__thiz.callMethod<void>(
			"send",
			"(I)V",
			arg0);
	}
	void PendingIntent::send(jint arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::android::os::Handler arg2)
	{
		__thiz.callMethod<void>(
			"send",
			"(ILandroid/app/PendingIntent$OnFinished;Landroid/os/Handler;)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	QAndroidJniObject PendingIntent::getTargetPackage()
	{
		return __thiz.callObjectMethod(
			"getTargetPackage",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PendingIntent::getCreatorPackage()
	{
		return __thiz.callObjectMethod(
			"getCreatorPackage",
			"()Ljava/lang/String;");
	}
	jint PendingIntent::getCreatorUid()
	{
		return __thiz.callMethod<jint>(
			"getCreatorUid",
			"()I");
	}
	QAndroidJniObject PendingIntent::getCreatorUserHandle()
	{
		return __thiz.callObjectMethod(
			"getCreatorUserHandle",
			"()Landroid/os/UserHandle;");
	}
	void PendingIntent::writePendingIntentOrNullToParcel(__jni_impl::android::app::PendingIntent arg0, __jni_impl::android::os::Parcel arg1)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.app.PendingIntent",
			"writePendingIntentOrNullToParcel",
			"(Landroid/app/PendingIntent;Landroid/os/Parcel;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject PendingIntent::readPendingIntentOrNullFromParcel(__jni_impl::android::os::Parcel arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.app.PendingIntent",
			"readPendingIntentOrNullFromParcel",
			"(Landroid/os/Parcel;)Landroid/app/PendingIntent;",
			arg0.__jniObject().object());
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class PendingIntent : public __jni_impl::android::app::PendingIntent
	{
	public:
		PendingIntent(QAndroidJniObject obj) { __thiz = obj; }
		PendingIntent()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_PENDINGINTENT

