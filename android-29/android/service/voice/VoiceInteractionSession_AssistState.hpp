#pragma once

#ifndef ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ASSISTSTATE
#define ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ASSISTSTATE

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_ActivityId;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::app::assist
{
	class AssistStructure;
}
namespace __jni_impl::android::app::assist
{
	class AssistContent;
}

namespace __jni_impl::android::service::voice
{
	class VoiceInteractionSession_AssistState : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getIndex();
		jint getCount();
		jboolean isFocused();
		QAndroidJniObject getAssistData();
		QAndroidJniObject getActivityId();
		QAndroidJniObject getAssistStructure();
		QAndroidJniObject getAssistContent();
	};
} // namespace __jni_impl::android::service::voice

#include "VoiceInteractionSession_ActivityId.hpp"
#include "../../os/Bundle.hpp"
#include "../../app/assist/AssistStructure.hpp"
#include "../../app/assist/AssistContent.hpp"

namespace __jni_impl::android::service::voice
{
	// Fields
	
	// Constructors
	void VoiceInteractionSession_AssistState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.voice.VoiceInteractionSession$AssistState",
			"(V)V");
	}
	
	// Methods
	jint VoiceInteractionSession_AssistState::getIndex()
	{
		return __thiz.callMethod<jint>(
			"getIndex",
			"()I");
	}
	jint VoiceInteractionSession_AssistState::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I");
	}
	jboolean VoiceInteractionSession_AssistState::isFocused()
	{
		return __thiz.callMethod<jboolean>(
			"isFocused",
			"()Z");
	}
	QAndroidJniObject VoiceInteractionSession_AssistState::getAssistData()
	{
		return __thiz.callObjectMethod(
			"getAssistData",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject VoiceInteractionSession_AssistState::getActivityId()
	{
		return __thiz.callObjectMethod(
			"getActivityId",
			"()Landroid/service/voice/VoiceInteractionSession$ActivityId;");
	}
	QAndroidJniObject VoiceInteractionSession_AssistState::getAssistStructure()
	{
		return __thiz.callObjectMethod(
			"getAssistStructure",
			"()Landroid/app/assist/AssistStructure;");
	}
	QAndroidJniObject VoiceInteractionSession_AssistState::getAssistContent()
	{
		return __thiz.callObjectMethod(
			"getAssistContent",
			"()Landroid/app/assist/AssistContent;");
	}
} // namespace __jni_impl::android::service::voice

namespace android::service::voice
{
	class VoiceInteractionSession_AssistState : public __jni_impl::android::service::voice::VoiceInteractionSession_AssistState
	{
	public:
		VoiceInteractionSession_AssistState(QAndroidJniObject obj) { __thiz = obj; }
		VoiceInteractionSession_AssistState()
		{
			__constructor();
		}
	};
} // namespace android::service::voice

#endif // ANDROID_SERVICE_VOICE_VOICEINTERACTIONSESSION_ASSISTSTATE

