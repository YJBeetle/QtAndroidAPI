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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VoiceInteractor_Prompt(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
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

