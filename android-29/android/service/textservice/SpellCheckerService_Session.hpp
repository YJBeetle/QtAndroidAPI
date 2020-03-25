#pragma once

#ifndef ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_SESSION
#define ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_SESSION

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view::textservice
{
	class SuggestionsInfo;
}
namespace __jni_impl::android::view::textservice
{
	class TextInfo;
}

namespace __jni_impl::android::service::textservice
{
	class SpellCheckerService_Session : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void onClose();
		QAndroidJniObject getBundle();
		QAndroidJniObject getLocale();
		QAndroidJniObject onGetSentenceSuggestionsMultiple(jarray arg0, jint arg1);
		QAndroidJniObject onGetSuggestions(__jni_impl::android::view::textservice::TextInfo arg0, jint arg1);
		QAndroidJniObject onGetSuggestionsMultiple(jarray arg0, jint arg1, jboolean arg2);
		void onCreate();
		void onCancel();
	};
} // namespace __jni_impl::android::service::textservice

#include "../../os/Bundle.hpp"
#include "../../view/textservice/SuggestionsInfo.hpp"
#include "../../view/textservice/TextInfo.hpp"

namespace __jni_impl::android::service::textservice
{
	// Fields
	
	// Constructors
	void SpellCheckerService_Session::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.textservice.SpellCheckerService$Session",
			"()V");
	}
	
	// Methods
	void SpellCheckerService_Session::onClose()
	{
		__thiz.callMethod<void>(
			"onClose",
			"()V");
	}
	QAndroidJniObject SpellCheckerService_Session::getBundle()
	{
		return __thiz.callObjectMethod(
			"getBundle",
			"()Landroid/os/Bundle;");
	}
	QAndroidJniObject SpellCheckerService_Session::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject SpellCheckerService_Session::onGetSentenceSuggestionsMultiple(jarray arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onGetSentenceSuggestionsMultiple",
			"([Landroid/view/textservice/TextInfo;I)[Landroid/view/textservice/SentenceSuggestionsInfo;",
			arg0,
			arg1);
	}
	QAndroidJniObject SpellCheckerService_Session::onGetSuggestions(__jni_impl::android::view::textservice::TextInfo arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onGetSuggestions",
			"(Landroid/view/textservice/TextInfo;I)Landroid/view/textservice/SuggestionsInfo;",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SpellCheckerService_Session::onGetSuggestionsMultiple(jarray arg0, jint arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"onGetSuggestionsMultiple",
			"([Landroid/view/textservice/TextInfo;IZ)[Landroid/view/textservice/SuggestionsInfo;",
			arg0,
			arg1,
			arg2);
	}
	void SpellCheckerService_Session::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V");
	}
	void SpellCheckerService_Session::onCancel()
	{
		__thiz.callMethod<void>(
			"onCancel",
			"()V");
	}
} // namespace __jni_impl::android::service::textservice

namespace android::service::textservice
{
	class SpellCheckerService_Session : public __jni_impl::android::service::textservice::SpellCheckerService_Session
	{
	public:
		SpellCheckerService_Session(QAndroidJniObject obj) { __thiz = obj; }
		SpellCheckerService_Session()
		{
			__constructor();
		}
	};
} // namespace android::service::textservice

#endif // ANDROID_SERVICE_TEXTSERVICE_SPELLCHECKERSERVICE_SESSION

