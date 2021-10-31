#include "./PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./Notification_Action.hpp"

namespace android::app
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
	
	Notification_Action::Notification_Action(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Notification_Action::Notification_Action(jint arg0, jstring arg1, android::app::PendingIntent arg2)
	{
		__thiz = QAndroidJniObject(
			"android.app.Notification$Action",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
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
	jboolean Notification_Action::getAllowGeneratedReplies()
	{
		return __thiz.callMethod<jboolean>(
			"getAllowGeneratedReplies",
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
	QAndroidJniObject Notification_Action::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject Notification_Action::getIcon()
	{
		return __thiz.callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
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
	void Notification_Action::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

