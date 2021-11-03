#include "../../../JArray.hpp"
#include "./SpellCheckerInfo.hpp"
#include "./TextInfo.hpp"
#include "../../../JString.hpp"
#include "./SpellCheckerSession.hpp"

namespace android::view::textservice
{
	// Fields
	JString SpellCheckerSession::SERVICE_META_DATA()
	{
		return getStaticObjectField(
			"android.view.textservice.SpellCheckerSession",
			"SERVICE_META_DATA",
			"Ljava/lang/String;"
		);
	}
	
	// QAndroidJniObject forward
	SpellCheckerSession::SpellCheckerSession(QAndroidJniObject obj) : JObject(obj) {}
	
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
	void SpellCheckerSession::getSentenceSuggestions(JArray arg0, jint arg1)
	{
		callMethod<void>(
			"getSentenceSuggestions",
			"([Landroid/view/textservice/TextInfo;I)V",
			arg0.object<jarray>(),
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
	void SpellCheckerSession::getSuggestions(JArray arg0, jint arg1, jboolean arg2)
	{
		callMethod<void>(
			"getSuggestions",
			"([Landroid/view/textservice/TextInfo;IZ)V",
			arg0.object<jarray>(),
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

