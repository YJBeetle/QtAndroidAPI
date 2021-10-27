#include "../../app/Person.hpp"
#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../../java/time/ZonedDateTime.hpp"
#include "./ConversationActions_Message.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject ConversationActions_Message::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Message",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	QAndroidJniObject ConversationActions_Message::PERSON_USER_OTHERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Message",
			"PERSON_USER_OTHERS",
			"Landroid/app/Person;"
		);
	}
	QAndroidJniObject ConversationActions_Message::PERSON_USER_SELF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions$Message",
			"PERSON_USER_SELF",
			"Landroid/app/Person;"
		);
	}
	
	ConversationActions_Message::ConversationActions_Message(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	jint ConversationActions_Message::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ConversationActions_Message::getAuthor()
	{
		return __thiz.callObjectMethod(
			"getAuthor",
			"()Landroid/app/Person;"
		);
	}
	QAndroidJniObject ConversationActions_Message::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject ConversationActions_Message::getReferenceTime()
	{
		return __thiz.callObjectMethod(
			"getReferenceTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	jstring ConversationActions_Message::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ConversationActions_Message::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

