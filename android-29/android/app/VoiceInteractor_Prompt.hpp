#pragma once

#ifndef ANDROID_APP_VOICEINTERACTOR_PROMPT
#define ANDROID_APP_VOICEINTERACTOR_PROMPT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::app
{
	class VoiceInteractor_Prompt : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jarray arg0, jstring arg1);
		void __constructor(jstring arg0);
		
		// Methods
		jstring toString();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jstring getVoicePromptAt(jint arg0);
		jint countVoicePrompts();
		jstring getVisualPrompt();
	};
} // namespace __jni_impl::android::app

#include "../os/Parcel.hpp"

namespace __jni_impl::android::app
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
	
	// Constructors
	void VoiceInteractor_Prompt::__constructor(jarray arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$Prompt",
			"([Ljava/lang/CharSequence;Ljava/lang/CharSequence;)V",
			arg0,
			arg1);
	}
	void VoiceInteractor_Prompt::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.VoiceInteractor$Prompt",
			"(Ljava/lang/CharSequence;)V",
			arg0);
	}
	
	// Methods
	jstring VoiceInteractor_Prompt::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint VoiceInteractor_Prompt::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void VoiceInteractor_Prompt::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jstring VoiceInteractor_Prompt::getVoicePromptAt(jint arg0)
	{
		return __thiz.callObjectMethod(
			"getVoicePromptAt",
			"(I)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jint VoiceInteractor_Prompt::countVoicePrompts()
	{
		return __thiz.callMethod<jint>(
			"countVoicePrompts",
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
} // namespace __jni_impl::android::app

namespace android::app
{
	class VoiceInteractor_Prompt : public __jni_impl::android::app::VoiceInteractor_Prompt
	{
	public:
		VoiceInteractor_Prompt(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractor_Prompt(jarray arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		VoiceInteractor_Prompt(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

#endif // ANDROID_APP_VOICEINTERACTOR_PROMPT

