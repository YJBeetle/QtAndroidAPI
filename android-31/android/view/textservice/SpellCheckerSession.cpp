#include "./SpellCheckerInfo.hpp"
#include "./TextInfo.hpp"
#include "./SpellCheckerSession.hpp"

namespace android::view::textservice
{
	// Fields
	jstring SpellCheckerSession::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.view.textservice.SpellCheckerSession",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// QJniObject forward
	SpellCheckerSession::SpellCheckerSession(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void SpellCheckerSession::cancel()
	{
		callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void SpellCheckerSession::close()
	{
		callMethod<void>(
			"close",
			"()V"
		);
	}
	void SpellCheckerSession::getSentenceSuggestions(jarray arg0, jint arg1)
	{
		callMethod<void>(
			"getSentenceSuggestions",
			"([Landroid/view/textservice/TextInfo;I)V",
			arg0,
			arg1
		);
	}
	android::view::textservice::SpellCheckerInfo SpellCheckerSession::getSpellChecker()
	{
		return callObjectMethod(
			"getSpellChecker",
			"()Landroid/view/textservice/SpellCheckerInfo;"
		);
	}
	void SpellCheckerSession::getSuggestions(android::view::textservice::TextInfo arg0, jint arg1)
	{
		callMethod<void>(
			"getSuggestions",
			"(Landroid/view/textservice/TextInfo;I)V",
			arg0.object(),
			arg1
		);
	}
	void SpellCheckerSession::getSuggestions(jarray arg0, jint arg1, jboolean arg2)
	{
		callMethod<void>(
			"getSuggestions",
			"([Landroid/view/textservice/TextInfo;IZ)V",
			arg0,
			arg1,
			arg2
		);
	}
	jboolean SpellCheckerSession::isSessionDisconnected()
	{
		return callMethod<jboolean>(
			"isSessionDisconnected",
			"()Z"
		);
	}
} // namespace android::view::textservice

