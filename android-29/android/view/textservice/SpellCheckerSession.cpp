#include "./SpellCheckerInfo.hpp"
#include "./TextInfo.hpp"
#include "./TextServicesManager.hpp"
#include "./SpellCheckerSession.hpp"

namespace android::view::textservice
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
	
	SpellCheckerSession::SpellCheckerSession(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void SpellCheckerSession::cancel()
	{
		__thiz.callMethod<void>(
			"cancel",
			"()V"
		);
	}
	void SpellCheckerSession::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
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
	QAndroidJniObject SpellCheckerSession::getSpellChecker()
	{
		return __thiz.callObjectMethod(
			"getSpellChecker",
			"()Landroid/view/textservice/SpellCheckerInfo;"
		);
	}
	void SpellCheckerSession::getSuggestions(android::view::textservice::TextInfo arg0, jint arg1)
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
	jboolean SpellCheckerSession::isSessionDisconnected()
	{
		return __thiz.callMethod<jboolean>(
			"isSessionDisconnected",
			"()Z"
		);
	}
} // namespace android::view::textservice

