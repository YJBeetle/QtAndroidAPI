#pragma once

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::android::speech::tts
{
	class UtteranceProgressListener : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onAudioAvailable(jstring arg0, jbyteArray arg1);
		void onAudioAvailable(const QString &arg0, jbyteArray arg1);
		void onBeginSynthesis(jstring arg0, jint arg1, jint arg2, jint arg3);
		void onBeginSynthesis(const QString &arg0, jint arg1, jint arg2, jint arg3);
		void onDone(jstring arg0);
		void onDone(const QString &arg0);
		void onError(jstring arg0);
		void onError(const QString &arg0);
		void onError(jstring arg0, jint arg1);
		void onError(const QString &arg0, jint arg1);
		void onRangeStart(jstring arg0, jint arg1, jint arg2, jint arg3);
		void onRangeStart(const QString &arg0, jint arg1, jint arg2, jint arg3);
		void onStart(jstring arg0);
		void onStart(const QString &arg0);
		void onStop(jstring arg0, jboolean arg1);
		void onStop(const QString &arg0, jboolean arg1);
	};
} // namespace __jni_impl::android::speech::tts


namespace __jni_impl::android::speech::tts
{
	// Fields
	
	// Constructors
	void UtteranceProgressListener::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.speech.tts.UtteranceProgressListener",
			"()V"
		);
	}
	
	// Methods
	void UtteranceProgressListener::onAudioAvailable(jstring arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"onAudioAvailable",
			"(Ljava/lang/String;[B)V",
			arg0,
			arg1
		);
	}
	void UtteranceProgressListener::onAudioAvailable(const QString &arg0, jbyteArray arg1)
	{
		__thiz.callMethod<void>(
			"onAudioAvailable",
			"(Ljava/lang/String;[B)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void UtteranceProgressListener::onBeginSynthesis(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onBeginSynthesis",
			"(Ljava/lang/String;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void UtteranceProgressListener::onBeginSynthesis(const QString &arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onBeginSynthesis",
			"(Ljava/lang/String;III)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	void UtteranceProgressListener::onDone(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onDone",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UtteranceProgressListener::onDone(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onDone",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void UtteranceProgressListener::onError(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UtteranceProgressListener::onError(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void UtteranceProgressListener::onError(jstring arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;I)V",
			arg0,
			arg1
		);
	}
	void UtteranceProgressListener::onError(const QString &arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"onError",
			"(Ljava/lang/String;I)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	void UtteranceProgressListener::onRangeStart(jstring arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onRangeStart",
			"(Ljava/lang/String;III)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void UtteranceProgressListener::onRangeStart(const QString &arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"onRangeStart",
			"(Ljava/lang/String;III)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1,
			arg2,
			arg3
		);
	}
	void UtteranceProgressListener::onStart(jstring arg0)
	{
		__thiz.callMethod<void>(
			"onStart",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void UtteranceProgressListener::onStart(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"onStart",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void UtteranceProgressListener::onStop(jstring arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onStop",
			"(Ljava/lang/String;Z)V",
			arg0,
			arg1
		);
	}
	void UtteranceProgressListener::onStop(const QString &arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"onStop",
			"(Ljava/lang/String;Z)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
} // namespace __jni_impl::android::speech::tts

namespace android::speech::tts
{
	class UtteranceProgressListener : public __jni_impl::android::speech::tts::UtteranceProgressListener
	{
	public:
		UtteranceProgressListener(QAndroidJniObject obj) { __thiz = obj; }
		UtteranceProgressListener()
		{
			__constructor();
		}
	};
} // namespace android::speech::tts

