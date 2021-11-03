#include "../../os/Bundle.hpp"
#include "../../view/textservice/SuggestionsInfo.hpp"
#include "../../view/textservice/TextInfo.hpp"
#include "./SpellCheckerService_Session.hpp"

namespace android::service::textservice
{
	// Fields
	
	// QJniObject forward
	SpellCheckerService_Session::SpellCheckerService_Session(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	SpellCheckerService_Session::SpellCheckerService_Session()
		: JObject(
			"android.service.textservice.SpellCheckerService$Session",
			"()V"
		) {}
	
	// Methods
	android::os::Bundle SpellCheckerService_Session::getBundle()
	{
		return callObjectMethod(
			"getBundle",
			"()Landroid/os/Bundle;"
		);
	}
	jstring SpellCheckerService_Session::getLocale()
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SpellCheckerService_Session::onCancel()
	{
		callMethod<void>(
			"onCancel",
			"()V"
		);
	}
	void SpellCheckerService_Session::onClose()
	{
		callMethod<void>(
			"onClose",
			"()V"
		);
	}
	void SpellCheckerService_Session::onCreate()
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	jarray SpellCheckerService_Session::onGetSentenceSuggestionsMultiple(jarray arg0, jint arg1)
	{
		return callObjectMethod(
			"onGetSentenceSuggestionsMultiple",
			"([Landroid/view/textservice/TextInfo;I)[Landroid/view/textservice/SentenceSuggestionsInfo;",
			arg0,
			arg1
		).object<jarray>();
	}
	android::view::textservice::SuggestionsInfo SpellCheckerService_Session::onGetSuggestions(android::view::textservice::TextInfo arg0, jint arg1)
	{
		return callObjectMethod(
			"onGetSuggestions",
			"(Landroid/view/textservice/TextInfo;I)Landroid/view/textservice/SuggestionsInfo;",
			arg0.object(),
			arg1
		);
	}
	jarray SpellCheckerService_Session::onGetSuggestionsMultiple(jarray arg0, jint arg1, jboolean arg2)
	{
		return callObjectMethod(
			"onGetSuggestionsMultiple",
			"([Landroid/view/textservice/TextInfo;IZ)[Landroid/view/textservice/SuggestionsInfo;",
			arg0,
			arg1,
			arg2
		).object<jarray>();
	}
} // namespace android::service::textservice

