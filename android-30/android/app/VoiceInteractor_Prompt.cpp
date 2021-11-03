#include "../../JArray.hpp"
#include "../os/Parcel.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./VoiceInteractor_Prompt.hpp"

namespace android::app
{
	// Fields
	JObject VoiceInteractor_Prompt::CREATOR()
	{
		return getStaticObjectField(
			"android.app.VoiceInteractor$Prompt",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// QAndroidJniObject forward
	VoiceInteractor_Prompt::VoiceInteractor_Prompt(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	VoiceInteractor_Prompt::VoiceInteractor_Prompt(JString arg0)
		: JObject(
			"android.app.VoiceInteractor$Prompt",
			"(Ljava/lang/CharSequence;)V",
			arg0.object<jstring>()
		) {}
	VoiceInteractor_Prompt::VoiceInteractor_Prompt(JArray arg0, JString arg1)
		: JObject(
			"android.app.VoiceInteractor$Prompt",
			"([Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0.object<jarray>(),
			arg1.object<jstring>()
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
	JString VoiceInteractor_Prompt::getVisualPrompt()
	{
		return callObjectMethod(
			"getVisualPrompt",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString VoiceInteractor_Prompt::getVoicePromptAt(jint arg0)
	{
		return callObjectMethod(
			"getVoicePromptAt",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	JString VoiceInteractor_Prompt::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
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

