#include "./TextKeyListener_Capitalize.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/View.hpp"
#include "./MultiTapKeyListener.hpp"

namespace android::text::method
{
	// Fields
	
	// QAndroidJniObject forward
	MultiTapKeyListener::MultiTapKeyListener(QAndroidJniObject obj) : android::text::method::BaseKeyListener(obj) {}
	
	// Constructors
	MultiTapKeyListener::MultiTapKeyListener(android::text::method::TextKeyListener_Capitalize arg0, jboolean arg1)
		: android::text::method::BaseKeyListener(
			"android.text.method.MultiTapKeyListener",
			"(Landroid/text/method/TextKeyListener$Capitalize;Z)V",
			arg0.object(),
			arg1
		) {}
	
	// Methods
	android::text::method::MultiTapKeyListener MultiTapKeyListener::getInstance(jboolean arg0, android::text::method::TextKeyListener_Capitalize arg1)
	{
		return callStaticObjectMethod(
			"android.text.method.MultiTapKeyListener",
			"getInstance",
			"(ZLandroid/text/method/TextKeyListener$Capitalize;)Landroid/text/method/MultiTapKeyListener;",
			arg0,
			arg1.object()
		);
	}
	jint MultiTapKeyListener::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
	jboolean MultiTapKeyListener::onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3)
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
	void MultiTapKeyListener::onSpanAdded(JObject arg0, jobject arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"onSpanAdded",
			"(Landroid/text/Spannable;Ljava/lang/Object;II)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
	void MultiTapKeyListener::onSpanChanged(JObject arg0, jobject arg1, jint arg2, jint arg3, jint arg4, jint arg5)
	{
		callMethod<void>(
			"onSpanChanged",
			"(Landroid/text/Spannable;Ljava/lang/Object;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4,
			arg5
		);
	}
	void MultiTapKeyListener::onSpanRemoved(JObject arg0, jobject arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"onSpanRemoved",
			"(Landroid/text/Spannable;Ljava/lang/Object;II)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		);
	}
} // namespace android::text::method

