#include "../../os/Bundle.hpp"
#include "../../view/textservice/SuggestionsInfo.hpp"
#include "../../view/textservice/TextInfo.hpp"
#include "./SpellCheckerService_Session.hpp"

namespace android::service::textservice
{
	// Fields
	
	SpellCheckerService_Session::SpellCheckerService_Session(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SpellCheckerService_Session::SpellCheckerService_Session()
	{
		__thiz = QAndroidJniObject(
			"android.service.textservice.SpellCheckerService$Session",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SpellCheckerService_Session::getBundle()
	{
		return __thiz.callObjectMethod(
			"getBundle",
			"()Landroid/os/Bundle;"
		);
	}
	jstring SpellCheckerService_Session::getLocale()
	{
		return __thiz.callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SpellCheckerService_Session::onCancel()
	{
		__thiz.callMethod<void>(
			"onCancel",
			"()V"
		);
	}
	void SpellCheckerService_Session::onClose()
	{
		__thiz.callMethod<void>(
			"onClose",
			"()V"
		);
	}
	void SpellCheckerService_Session::onCreate()
	{
		__thiz.callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	jarray SpellCheckerService_Session::onGetSentenceSuggestionsMultiple(jarray arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onGetSentenceSuggestionsMultiple",
			"([Landroid/view/textservice/TextInfo;I)[Landroid/view/textservice/SentenceSuggestionsInfo;",
			arg0,
			arg1
		).object<jarray>();
	}
	QAndroidJniObject SpellCheckerService_Session::onGetSuggestions(android::view::textservice::TextInfo arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"onGetSuggestions",
			"(Landroid/view/textservice/TextInfo;I)Landroid/view/textservice/SuggestionsInfo;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jarray SpellCheckerService_Session::onGetSuggestionsMultiple(jarray arg0, jint arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"onGetSuggestionsMultiple",
			"([Landroid/view/textservice/TextInfo;IZ)[Landroid/view/textservice/SuggestionsInfo;",
			arg0,
			arg1,
			arg2
		).object<jarray>();
	}
} // namespace android::service::textservice

