#pragma once

#ifndef ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION
#define ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::textservice
{
	class SpellCheckerInfo;
}
namespace __jni_impl::android::view::textservice
{
	class TextServicesManager;
}
namespace __jni_impl::android::view::textservice
{
	class TextInfo;
}

namespace __jni_impl::android::view::textservice
{
	class SpellCheckerSession : public __JniBaseClass
	{
	public:
		// Fields
		static jstring SERVICE_META_DATA();
		
		// Constructors
		void __constructor();
		
		// Methods
		void close();
		void cancel();
		void getSuggestions(__jni_impl::android::view::textservice::TextInfo arg0, jint arg1);
		void getSuggestions(jarray arg0, jint arg1, jboolean arg2);
		QAndroidJniObject getSpellChecker();
		void getSentenceSuggestions(jarray arg0, jint arg1);
		jboolean isSessionDisconnected();
	};
} // namespace __jni_impl::android::view::textservice

#include "SpellCheckerInfo.hpp"
#include "TextServicesManager.hpp"
#include "TextInfo.hpp"

namespace __jni_impl::android::view::textservice
{
	// Fields
	jstring SpellCheckerSession::SERVICE_META_DATA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.textservice.SpellCheckerSession",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void SpellCheckerSession::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.textservice.SpellCheckerSession",
			"(V)V");
	}
	
	// Methods
	void SpellCheckerSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	void SpellCheckerSession::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void SpellCheckerSession::getSuggestions(__jni_impl::android::view::textservice::TextInfo arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"getSuggestions",
			"(Landroid/view/textservice/TextInfo;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void SpellCheckerSession::getSuggestions(jarray arg0, jint arg1, jboolean arg2)
	{
		__thiz.callMethod<void>(
			"getSuggestions",
			"([Landroid/view/textservice/TextInfo;IZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	QAndroidJniObject SpellCheckerSession::getSpellChecker()
	{
		return __thiz.callObjectMethod(
			"getSpellChecker",
			"()Landroid/view/textservice/SpellCheckerInfo;"
		);
	}
	void SpellCheckerSession::getSentenceSuggestions(jarray arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"getSentenceSuggestions",
			"([Landroid/view/textservice/TextInfo;I)V",
			arg0,
			arg1
		);
	}
	jboolean SpellCheckerSession::isSessionDisconnected()
	{
		return __thiz.callMethod<jboolean>(
			"isSessionDisconnected",
			"()Z"
		);
	}
} // namespace __jni_impl::android::view::textservice

namespace android::view::textservice
{
	class SpellCheckerSession : public __jni_impl::android::view::textservice::SpellCheckerSession
	{
	public:
		SpellCheckerSession(QAndroidJniObject obj) { __thiz = obj; }
		SpellCheckerSession()
		{
			__constructor();
		}
	};
} // namespace android::view::textservice

#endif // ANDROID_VIEW_TEXTSERVICE_SPELLCHECKERSESSION

