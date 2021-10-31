#include "../os/Parcel.hpp"
#include "./VoiceInteractor_Prompt.hpp"

namespace android::app
{
	// Fields
	__JniBaseClass VoiceInteractor_Prompt::CREATOR()
	{
		return getStaticObjectField(
			"android.app.VoiceInteractor$Prompt",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	VoiceInteractor_Prompt::VoiceInteractor_Prompt(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	VoiceInteractor_Prompt::VoiceInteractor_Prompt(jstring arg0)
		: __JniBaseClass(
			"android.app.VoiceInteractor$Prompt",
			"(Ljava/lang/CharSequence;)V",
			arg0
		) {}
	VoiceInteractor_Prompt::VoiceInteractor_Prompt(jarray arg0, jstring arg1)
		: __JniBaseClass(
			"android.app.VoiceInteractor$Prompt",
			"([Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1
		) {}
	
	// Methods
	jint VoiceInteractor_Prompt::countVoicePrompts()
	{
		return callMethod<jint>(
			"countVoicePrompts",
			"()I"
		);
	}
	jint VoiceInteractor_Prompt::describeContents()
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring VoiceInteractor_Prompt::getVisualPrompt()
	{
		return callObjectMethod(
			"getVisualPrompt",
			"()Ljava/lang/CharSequence;"
		).object<jstring>();
	}
	jstring VoiceInteractor_Prompt::getVoicePromptAt(jint arg0)
	{
		return callObjectMethod(
			"getVoicePromptAt",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring VoiceInteractor_Prompt::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void VoiceInteractor_Prompt::writeToParcel(android::os::Parcel arg0, jint arg1)
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

