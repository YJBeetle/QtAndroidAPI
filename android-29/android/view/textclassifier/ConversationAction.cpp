#include "../../app/RemoteAction.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "./ConversationAction.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject ConversationAction::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring ConversationAction::TYPE_CALL_PHONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_CALL_PHONE",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_CREATE_REMINDER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_CREATE_REMINDER",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_OPEN_URL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_OPEN_URL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_SEND_EMAIL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SEND_EMAIL",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_SEND_SMS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SEND_SMS",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_SHARE_LOCATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_SHARE_LOCATION",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_TEXT_REPLY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_TEXT_REPLY",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_TRACK_FLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_TRACK_FLIGHT",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_VIEW_CALENDAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_VIEW_CALENDAR",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring ConversationAction::TYPE_VIEW_MAP()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationAction",
			"TYPE_VIEW_MAP",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	ConversationAction::ConversationAction(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint ConversationAction::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ConversationAction::getAction()
	{
		return __thiz.callObjectMethod(
			"getAction",
			"()Landroid/app/RemoteAction;"
		);
	}
	jfloat ConversationAction::getConfidenceScore()
	{
		return __thiz.callMethod<jfloat>(
			"getConfidenceScore",
			"()F"
		);
	}
	QAndroidJniObject ConversationAction::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	jstring ConversationAction::getTextReply()
	{
		return __thiz.callObjectMethod(
			"getTextReply",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring ConversationAction::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ConversationAction::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

