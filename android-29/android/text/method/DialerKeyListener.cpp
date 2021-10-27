#include "../../view/KeyEvent.hpp"
#include "./DialerKeyListener.hpp"

namespace android::text::method
{
	// Fields
	jcharArray DialerKeyListener::CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.DialerKeyListener",
			"CHARACTERS",
			"[C"
		).object<jcharArray>();
	}
	
	DialerKeyListener::DialerKeyListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DialerKeyListener::DialerKeyListener()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DialerKeyListener",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject DialerKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DialerKeyListener",
			"getInstance",
			"()Landroid/text/method/DialerKeyListener;"
		);
	}
	jint DialerKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method

