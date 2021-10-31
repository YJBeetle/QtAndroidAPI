#include "./PendingIntent.hpp"
#include "../graphics/drawable/Icon.hpp"
#include "../os/Bundle.hpp"
#include "../os/Parcel.hpp"
#include "./Notification_Action.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass Notification_Action::CREATOR()
	{
		return getStaticObjectField(
			"android.app.Notification$Action",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_ARCHIVE()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_ARCHIVE"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_CALL()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_CALL"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_DELETE()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_DELETE"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_MARK_AS_READ()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_MARK_AS_READ"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_MARK_AS_UNREAD()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_MARK_AS_UNREAD"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_MUTE()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_MUTE"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_NONE()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_NONE"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_REPLY()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_REPLY"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_THUMBS_DOWN()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_THUMBS_DOWN"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_THUMBS_UP()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_THUMBS_UP"
		);
	}
	jint Notification_Action::SEMANTIC_ACTION_UNMUTE()
	{
		return getStaticField<jint>(
			"android.app.Notification$Action",
			"SEMANTIC_ACTION_UNMUTE"
		);
	}
	android::app::PendingIntent Notification_Action::actionIntent()
	{
		return getObjectField(
			"actionIntent",
			"Landroid/app/PendingIntent;"
		);
	}
	jint Notification_Action::icon()
	{
		return getField<jint>(
			"icon"
		);
	}
	jstring Notification_Action::title()
	{
		return getObjectField(
			"title",
			"Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	
	// QAndroidJniObject forward
	Notification_Action::Notification_Action(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Notification_Action::Notification_Action(jint arg0, jstring arg1, android::app::PendingIntent arg2)
		: __JniBaseClass(
			"android.app.Notification$Action",
			"(ILjava/lang/CharSequence;Landroid/app/PendingIntent;)V",
			arg0,
			arg1,
			arg2.object()
		) {}
	
	// Methods
	android::app::Notification_Action Notification_Action::clone()
	{
		return callObjectMethod(
			"clone",
			"()Landroid/app/Notification$Action;"
		);
	}
	jint Notification_Action::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean Notification_Action::getAllowGeneratedReplies()
	{
		return callMethod<jboolean>(
			"getAllowGeneratedReplies",
			"()Z"
		);
	}
	jarray Notification_Action::getDataOnlyRemoteInputs()
	{
		return callObjectMethod(
			"getDataOnlyRemoteInputs",
			"()[Landroid/app/RemoteInput;"
		).object<jarray>();
	}
	android::os::Bundle Notification_Action::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	android::graphics::drawable::Icon Notification_Action::getIcon()
	{
		return callObjectMethod(
			"getIcon",
			"()Landroid/graphics/drawable/Icon;"
		);
	}
	jarray Notification_Action::getRemoteInputs()
	{
		return callObjectMethod(
			"getRemoteInputs",
			"()[Landroid/app/RemoteInput;"
		).object<jarray>();
	}
	jint Notification_Action::getSemanticAction()
	{
		return callMethod<jint>(
			"getSemanticAction",
			"()I"
		);
	}
	jboolean Notification_Action::isAuthenticationRequired()
	{
		return callMethod<jboolean>(
			"isAuthenticationRequired",
			"()Z"
		);
	}
	jboolean Notification_Action::isContextual()
	{
		return callMethod<jboolean>(
			"isContextual",
			"()Z"
		);
	}
	void Notification_Action::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

