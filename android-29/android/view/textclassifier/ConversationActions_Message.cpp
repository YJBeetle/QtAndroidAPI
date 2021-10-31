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
	
	// QAndroidJniObject forward
	ConversationActions_Message::ConversationActions_Message(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	jint ConversationActions_Message::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ConversationActions_Message::getAuthor()
	{
		return callObjectMethod(
			"getAuthor",
			"()Landroid/app/Person;"
		);
	}
	QAndroidJniObject ConversationActions_Message::getExtras()
	{
		return callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject ConversationActions_Message::getReferenceTime()
	{
		return callObjectMethod(
			"getReferenceTime",
			"()Ljava/time/ZonedDateTime;"
		);
	}
	jstring ConversationActions_Message::getText()
	{
		return callObjectMethod(
			"getText",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	void ConversationActions_Message::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

