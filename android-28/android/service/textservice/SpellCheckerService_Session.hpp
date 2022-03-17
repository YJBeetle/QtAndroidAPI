#pragma once

#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../../JArray.hpp"
#include "../../os/Bundle.def.hpp"
#include "../../view/textservice/SuggestionsInfo.def.hpp"
#include "../../view/textservice/TextInfo.def.hpp"
#include "../../../JString.hpp"
#include "./SpellCheckerService_Session.def.hpp"

namespace android::service::textservice
{
	// Fields
	
	// Constructors
	inline SpellCheckerService_Session::SpellCheckerService_Session()
		: JObject(
			"android.service.textservice.SpellCheckerService$Session",
			"()V"
		) {}
	
	// Methods
	inline android::os::Bundle SpellCheckerService_Session::getBundle() const
	{
		return callObjectMethod(
			"getBundle",
			"()Landroid/os/Bundle;"
		);
	}
	inline JString SpellCheckerService_Session::getLocale() const
	{
		return callObjectMethod(
			"getLocale",
			"()Ljava/lang/String;"
		);
	}
	inline void SpellCheckerService_Session::onCancel() const
	{
		callMethod<void>(
			"onCancel",
			"()V"
		);
	}
	inline void SpellCheckerService_Session::onClose() const
	{
		callMethod<void>(
			"onClose",
			"()V"
		);
	}
	inline void SpellCheckerService_Session::onCreate() const
	{
		callMethod<void>(
			"onCreate",
			"()V"
		);
	}
	inline JArray SpellCheckerService_Session::onGetSentenceSuggestionsMultiple(JArray arg0, jint arg1) const
	{
		return callObjectMethod(
			"onGetSentenceSuggestionsMultiple",
			"([Landroid/view/textservice/TextInfo;I)[Landroid/view/textservice/SentenceSuggestionsInfo;",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline android::view::textservice::SuggestionsInfo SpellCheckerService_Session::onGetSuggestions(android::view::textservice::TextInfo arg0, jint arg1) const
	{
		return callObjectMethod(
			"onGetSuggestions",
			"(Landroid/view/textservice/TextInfo;I)Landroid/view/textservice/SuggestionsInfo;",
			arg0.object(),
			arg1
		);
	}
	inline JArray SpellCheckerService_Session::onGetSuggestionsMultiple(JArray arg0, jint arg1, jboolean arg2) const
	{
		return callObjectMethod(
			"onGetSuggestionsMultiple",
			"([Landroid/view/textservice/TextInfo;IZ)[Landroid/view/textservice/SuggestionsInfo;",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
} // namespace android::service::textservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::service::textservice;
#endif
