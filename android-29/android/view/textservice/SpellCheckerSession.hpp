#pragma once

#include "../../../JArray.hpp"
#include "./SpellCheckerInfo.def.hpp"
#include "./TextInfo.def.hpp"
#include "./TextServicesManager.def.hpp"
#include "../../../JString.hpp"
#include "./SpellCheckerSession.def.hpp"

namespace android::view::textservice
{
	// Fields
	inline JString SpellCheckerSession::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.view.textservice.SpellCheckerSession",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// Constructors
	
	// Methods
	inline void SpellCheckerSession::cancel() const
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	inline void SpellCheckerSession::close() const
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	inline void SpellCheckerSession::getSentenceSuggestions(JArray arg0, jint arg1) const
	{
		callMethod<void>(
			"getSentenceSuggestions",
			"([Landroid/view/textservice/TextInfo;I)V",
			arg0.object<jarray>(),
			arg1
		);
	}
	inline android::view::textservice::SpellCheckerInfo SpellCheckerSession::getSpellChecker() const
	{
		return callObjectMethod(
			"getSpellChecker",
			"()Landroid/view/textservice/SpellCheckerInfo;"
		);
	}
	inline void SpellCheckerSession::getSuggestions(android::view::textservice::TextInfo arg0, jint arg1) const
	{
		callMethod<void>(
			"getSuggestions",
			"(Landroid/view/textservice/TextInfo;I)V",
			arg0.object(),
			arg1
		);
	}
	inline void SpellCheckerSession::getSuggestions(JArray arg0, jint arg1, jboolean arg2) const
	{
		callMethod<void>(
			"getSuggestions",
			"([Landroid/view/textservice/TextInfo;IZ)V",
			arg0.object<jarray>(),
			arg1,
			arg2
		);
	}
	inline jboolean SpellCheckerSession::isSessionDisconnected() const
	{
		return callMethod<jboolean>(
			"isSessionDisconnected",
			"()Z"
		);
	}
} // namespace android::view::textservice

// Base class headers

