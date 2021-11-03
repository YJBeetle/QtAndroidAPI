#include "../../../JCharArray.hpp"
#include "../../view/KeyEvent.hpp"
#include "./DialerKeyListener.hpp"

namespace android::text::method
{
	// Fields
	JCharArray DialerKeyListener::CHARACTERS()
	{
		return getStaticObjectField(
			"android.text.method.DialerKeyListener",
			"CHARACTERS",
			"[C"
		);
	}
	
	// QAndroidJniObject forward
	DialerKeyListener::DialerKeyListener(QAndroidJniObject obj) : android::text::method::NumberKeyListener(obj) {}
	
	// Constructors
	DialerKeyListener::DialerKeyListener()
		: android::text::method::NumberKeyListener(
			"android.text.method.DialerKeyListener",
			"()V"
		) {}
	
	// Methods
	android::text::method::DialerKeyListener DialerKeyListener::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.DialerKeyListener",
			"getInstance",
			"()Landroid/text/method/DialerKeyListener;"
		);
	}
	jint DialerKeyListener::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method

