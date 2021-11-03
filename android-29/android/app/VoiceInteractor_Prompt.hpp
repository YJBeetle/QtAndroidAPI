#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class VoiceInteractor_Prompt : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_Prompt(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VoiceInteractor_Prompt(QAndroidJniObject obj);
		
		// Constructors
		VoiceInteractor_Prompt(jstring arg0);
		VoiceInteractor_Prompt(jarray arg0, jstring arg1);
		
		// Methods
		jint countVoicePrompts();
		jint describeContents();
		jstring getVisualPrompt();
		jstring getVoicePromptAt(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

