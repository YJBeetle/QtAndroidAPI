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
	
	// QJniObject forward
	VoiceInteractor_Prompt::VoiceInteractor_Prompt(QJniObject obj) : JObject(obj) {}
	
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
	jint VoiceInteractor_Prompt::countVoicePrompts() const
	{
		return callMethod<jint>(
			"countVoicePrompts",
			"()I"
		);
	}
	jint VoiceInteractor_Prompt::describeContents() const
	{
		return callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	JString VoiceInteractor_Prompt::getVisualPrompt() const
	{
		return callObjectMethod(
			"getVisualPrompt",
			"()Ljava/lang/CharSequence;"
		);
	}
	JString VoiceInteractor_Prompt::getVoicePromptAt(jint arg0) const
	{
		return callObjectMethod(
			"getVoicePromptAt",
			"(I)Ljava/lang/CharSequence;",
			arg0
		);
	}
	JString VoiceInteractor_Prompt::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
	void VoiceInteractor_Prompt::writeToParcel(android::os::Parcel arg0, jint arg1) const
	{
		callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.object(),
			arg1
		);
	}
} // namespace android::app

