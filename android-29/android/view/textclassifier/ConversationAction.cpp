#include "../../app/RemoteAction.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./ConversationAction.hpp"

namespace android::view::textclassifier
{
	// Fields
	__JniBaseClass ConversationAction::CREATOR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ConversationAction::TYPE_CALL_PHONE()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_CALL_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_CREATE_REMINDER()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_CREATE_REMINDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_OPEN_URL()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_OPEN_URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_SEND_EMAIL()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SEND_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_SEND_SMS()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SEND_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_SHARE_LOCATION()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SHARE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_TEXT_REPLY()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_TEXT_REPLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_TRACK_FLIGHT()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_TRACK_FLIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_VIEW_CALENDAR()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_VIEW_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_VIEW_MAP()
	{
		return getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_VIEW_MAP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	ConversationAction::ConversationAction(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ConversationAction::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	android::app::RemoteAction ConversationAction::getAction()
	{
		return callObjectMethod(
			"getAction",
			"()Landroid/app/RemoteAction;"
		);
	}
	jfloat ConversationAction::getConfidenceScore()
	{
		return callMethod<jfloat>(
			"getConfidenceScore",
			"()F"
		);
	}
	android::os::Bundle ConversationAction::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring ConversationAction::getTextReply()
	{
		return callObjectMethod(
			"getTextReply",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ConversationAction::getType()
	{
		return callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ConversationAction::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

