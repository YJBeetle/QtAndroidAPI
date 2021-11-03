#include "../../../JCharArray.hpp"
#include "../../view/KeyEvent.hpp"
#include "../../view/View.hpp"
#include "../../../JString.hpp"
#include "./NumberKeyListener.hpp"

namespace android::text::method
{
	// Fields
	
	// QJniObject forward
	NumberKeyListener::NumberKeyListener(QJniObject obj) : android::text::method::BaseKeyListener(obj) {}
	
	// Constructors
	NumberKeyListener::NumberKeyListener()
		: android::text::method::BaseKeyListener(
			"android.text.method.NumberKeyListener",
			"()V"
		) {}
	
	// Methods
	JString NumberKeyListener::filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5) const
	{
		return callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		);
	}
	jboolean NumberKeyListener::onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const
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
} // namespace android::text::method

