#pragma once

#ifndef ANDROID_APP_NOTIFICATION_ACTION
#define ANDROID_APP_NOTIFICATION_ACTION

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class PendingIntent;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::graphics::drawable
{
	class Icon;
}

namespace __jni_impl::android::app
{
	class Notification_Action : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint SEMANTIC_ACTION_ARCHIVE();
		static jint SEMANTIC_ACTION_CALL();
		static jint SEMANTIC_ACTION_DELETE();
		static jint SEMANTIC_ACTION_MARK_AS_READ();
		static jint SEMANTIC_ACTION_MARK_AS_UNREAD();
		static jint SEMANTIC_ACTION_MUTE();
		static jint SEMANTIC_ACTION_NONE();
		static jint SEMANTIC_ACTION_REPLY();
		static jint SEMANTIC_ACTION_THUMBS_DOWN();
		static jint SEMANTIC_ACTION_THUMBS_UP();
		static jint SEMANTIC_ACTION_UNMUTE();
		QAndroidJniObject actionIntent();
		jint icon();
		jstring title();
		
		// Constructors
		void __constructor(jint arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2);
		
		// Methods
		QAndroidJniObject clone();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		QAndroidJniObject getExtras();
		jboolean getAllowGeneratedReplies();
		jarray getRemoteInputs();
		jint getSemanticAction();
		jboolean isContextual();
		jarray getDataOnlyRemoteInputs();
		QAndroidJniObject getIcon();
	};
} // namespace __jni_impl::android::app

#include "PendingIntent.hpp"
#include "../os/Parcel.hpp"
#include "../os/Bundle.hpp"
#include "../graphics/drawable/Icon.hpp"

namespace __jni_impl::android::app
{
	// Fields
	QAndroidJniObject Notification_Action::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.Notification$Action",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_ARCHIVE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_ARCHIVE"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_CALL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_CALL"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_DELETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_DELETE"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_MARK_AS_READ()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_MARK_AS_READ"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_MARK_AS_UNREAD()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_MARK_AS_UNREAD"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_MUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_MUTE"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_NONE"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_REPLY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_REPLY"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_THUMBS_DOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_THUMBS_DOWN"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_THUMBS_UP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_THUMBS_UP"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_UNMUTE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_UNMUTE"
		);
	}
	QAndroidJniObject Notification_Action::actionIntent()
	{
		return __thiz.getObjectField(
			"actionIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	jint Notification_Action::icon()
	{
		return __thiz.getField<jint>(
			"icon"
		);
	}
	jstring Notification_Action::title()
	{
		return __thiz.getObjectField(
			"title",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	
	// Constructors
	void Notification_Action::__constructor(jint arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object());
	}
	
	// Methods
	QAndroidJniObject Notification_Action::clone()
	{
		return __thiz.callObjectMethod(
			"clone",
			"()Landroid/app/Notification$Action;"
		);
	}
	jint Notification_Action::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void Notification_Action::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Notification_Action::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jboolean Notification_Action::getAllowGeneratedReplies()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowGeneratedReplies",
			"()Z"
		);
	}
	jarray Notification_Action::getRemoteInputs()
	{
		return __thiz.callObjectMethod(
			"getRemoteInputs",
			"()[Landroid/app/RemoteInput;"
		).object<jarray>();
	}
	jint Notification_Action::getSemanticAction()
	{
		return __thiz.callMethod<jint>(
			"getSemanticAction",
			"()I"
		);
	}
	jboolean Notification_Action::isContextual()
	{
		return __thiz.callMethod<jboolean>(
			"isContextual",
			"()Z"
		);
	}
	jarray Notification_Action::getDataOnlyRemoteInputs()
	{
		return __thiz.callObjectMethod(
			"getDataOnlyRemoteInputs",
			"()[Landroid/app/RemoteInput;"
		).object<jarray>();
	}
	QAndroidJniObject Notification_Action::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class Notification_Action : public __jni_impl::android::app::Notification_Action
	{
	public:
		Notification_Action(QAndroidJniObject obj) { __thiz = obj; }
		Notification_Action(jint arg0, jstring arg1, __jni_impl::android::app::PendingIntent arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_NOTIFICATION_ACTION

