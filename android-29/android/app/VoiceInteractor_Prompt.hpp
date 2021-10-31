#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::app
{
	class VoiceInteractor_Prompt : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		VoiceInteractor_Prompt(QAndroidJniObject obj);
		// Constructors
		VoiceInteractor_Prompt(jstring arg0);
		VoiceInteractor_Prompt(jarray arg0, jstring arg1);
		VoiceInteractor_Prompt() = default;
		
		// Methods
		jint countVoicePrompts();
		jint describeContents();
		jstring getVisualPrompt();
		jstring getVoicePromptAt(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::app

