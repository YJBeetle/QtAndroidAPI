#include "../content/res/Resources.hpp"
#include "./Keyboard.hpp"
#include "./Keyboard_Row.hpp"

namespace android::inputmethodservice
{
	// Fields
	jint Keyboard_Row::defaultHeight()
	{
		return __thiz.getField<jint>(
			"defaultHeight"
		);
	}
	jint Keyboard_Row::defaultHorizontalGap()
	{
		return __thiz.getField<jint>(
			"defaultHorizontalGap"
		);
	}
	jint Keyboard_Row::defaultWidth()
	{
		return __thiz.getField<jint>(
			"defaultWidth"
		);
	}
	jint Keyboard_Row::mode()
	{
		return __thiz.getField<jint>(
			"mode"
		);
	}
	jint Keyboard_Row::rowEdgeFlags()
	{
		return __thiz.getField<jint>(
			"rowEdgeFlags"
		);
	}
	jint Keyboard_Row::verticalGap()
	{
		return __thiz.getField<jint>(
			"verticalGap"
		);
	}
	
	Keyboard_Row::Keyboard_Row(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Keyboard_Row::Keyboard_Row(android::inputmethodservice::Keyboard arg0)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard$Row",
			"(Landroid/inputmethodservice/Keyboard;)V",
			arg0.__jniObject().object()
		);
	}
	Keyboard_Row::Keyboard_Row(android::content::res::Resources arg0, android::inputmethodservice::Keyboard arg1, __JniBaseClass arg2)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard$Row",
			"(Landroid/content/res/Resources;Landroid/inputmethodservice/Keyboard;Landroid/content/res/XmlResourceParser;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	
	// Methods
} // namespace android::inputmethodservice

