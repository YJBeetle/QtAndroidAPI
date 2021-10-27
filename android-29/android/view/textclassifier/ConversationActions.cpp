#include "../../os/Parcel.hpp"
#include "./ConversationActions.hpp"

namespace android::view::textclassifier
{
	// Fields
	QAndroidJniObject ConversationActions::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textclassifier.ConversationActions",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	ConversationActions::ConversationActions(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ConversationActions::ConversationActions(__JniBaseClass &arg0, jstring &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationActions",
			"(Ljava/util/List;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	ConversationActions::ConversationActions(__JniBaseClass &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.view.textclassifier.ConversationActions",
			"(Ljava/util/List;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	
	// Methods
	jint ConversationActions::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	QAndroidJniObject ConversationActions::getConversationActions()
	{
		return __thiz.callObjectMethod(
			"getConversationActions",
			"()Ljava/util/List;"
		);
	}
	jstring ConversationActions::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ConversationActions::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::view::textclassifier

