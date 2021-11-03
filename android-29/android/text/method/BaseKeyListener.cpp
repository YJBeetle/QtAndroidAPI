#include "../../view/KeyEvent.hpp"
#include "../../view/View.hpp"
#include "./BaseKeyListener.hpp"

namespace android::text::method
{
	// Fields
	
	// QAndroidJniObject forward
	BaseKeyListener::BaseKeyListener(QAndroidJniObject obj) : android::text::method::MetaKeyKeyListener(obj) {}
	
	// Constructors
	BaseKeyListener::BaseKeyListener()
		: android::text::method::MetaKeyKeyListener(
			"android.text.method.BaseKeyListener",
			"()V"
		) {}
	
	// Methods
	jboolean BaseKeyListener::backspace(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return callMethod<jboolean>(
			"backspace",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jboolean BaseKeyListener::forwardDelete(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3)
	{
		return callMethod<jboolean>(
			"forwardDelete",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	jboolean BaseKeyListener::onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3)
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
	jboolean BaseKeyListener::onKeyOther(android::view::View arg0, JObject arg1, android::view::KeyEvent arg2)
	{
		return callMethod<jboolean>(
			"onKeyOther",
			"(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::text::method

