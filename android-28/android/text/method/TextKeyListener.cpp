#include "./TextKeyListener_Capitalize.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/View.hpp"
#include "../../../JString.hpp"
#include "../../../JObject.hpp"
#include "./TextKeyListener.hpp"

namespace android::text::method
{
	// Fields
	
	// QJniObject forward
	TextKeyListener::TextKeyListener(QJniObject obj) : android::text::method::BaseKeyListener(obj) {}
	
	// Constructors
	TextKeyListener::TextKeyListener(android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1)
		: android::text::method::BaseKeyListener(
			"android.text.method.TextKeyListener",
			"(Landroid/text/method/TextKeyListener$Capitalize;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	void TextKeyListener::clear(JObject arg0)
	{
		callStaticMethod<void>(
			"android.text.method.TextKeyListener",
			"clear",
			"(Landroid/text/Editable;)V",
			arg0.object()
		);
	}
	android::text::method::TextKeyListener TextKeyListener::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.TextKeyListener",
			"getInstance",
			"()Landroid/text/method/TextKeyListener;"
		);
	}
	android::text::method::TextKeyListener TextKeyListener::getInstance(jboolean arg0, android::text::method::TextKeyListener_Capitalize arg1)
	{
		return callStaticObjectMethod(
			"android.text.method.TextKeyListener",
			"getInstance",
			"(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/TextKeyListener;",
			arg0,
			arg1.object()
		);
	}
	jboolean TextKeyListener::shouldCap(android::text::method::TextKeyListener_Capitalize arg0, JString arg1, jint arg2)
	{
		return callStaticMethod<jboolean>(
			"android.text.method.TextKeyListener",
			"shouldCap",
			"(Landroid/text/method/TextKeyListener$Capitalize;Ljava/lang/CharSequence;I)Z",
			arg0.object(),
			arg1.object<jstring>(),
			arg2
		);
	}
	jint TextKeyListener::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jboolean TextKeyListener::onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jboolean TextKeyListener::onKeyOther(android::view::View arg0, JObject arg1, android::view::KeyEvent arg2)
	{
		return callMethod<jboolean>(
			"onKeyOther",
			"(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	jboolean TextKeyListener::onKeyUp(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return callMethod<jboolean>(
			"onKeyUp",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	void TextKeyListener::onSpanAdded(JObject arg0, JObject arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"onSpanAdded",
			"(Landroid/text/Spannable;Ljava/lang/Object;II)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2,
			arg3
		);
	}
	void TextKeyListener::onSpanChanged(JObject arg0, JObject arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callMethod<void>(
			"onSpanChanged",
			"(Landroid/text/Spannable;Ljava/lang/Object;IIII)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void TextKeyListener::onSpanRemoved(JObject arg0, JObject arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"onSpanRemoved",
			"(Landroid/text/Spannable;Ljava/lang/Object;II)V",
			arg0.object(),
			arg1.object<jobject>(),
			arg2,
			arg3
		);
	}
	void TextKeyListener::release()
	{
		callMethod<void>(
			"release",
			"()V"
		);
	}
} // namespace android::text::method

