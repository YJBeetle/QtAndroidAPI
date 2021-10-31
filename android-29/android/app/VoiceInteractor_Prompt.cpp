#include "../os/Parcel.hpp"
#include "./VoiceInteractor_Prompt.hpp"

namespace android::app
{
	// Fields
	QAndroidJniObject VoiceInteractor_Prompt::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.app.VoiceInteractor$Prompt",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	VoiceInteractor_Prompt::VoiceInteractor_Prompt(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	VoiceInteractor_Prompt::VoiceInteractor_Prompt(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$Prompt",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	VoiceInteractor_Prompt::VoiceInteractor_Prompt(jarray arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$Prompt",
			"([Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	jint VoiceInteractor_Prompt::countVoicePrompts()
	{
		return __thiz.callMethod<jint>(
			"countVoicePrompts",
			"()I"
		);
	}
	jint VoiceInteractor_Prompt::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring VoiceInteractor_Prompt::getVisualPrompt()
	{
		return __thiz.callObjectMethod(
			"getVisualPrompt",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring VoiceInteractor_Prompt::getVoicePromptAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getVoicePromptAt",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring VoiceInteractor_Prompt::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VoiceInteractor_Prompt::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace android::app

