#include "../content/res/Resources.hpp"
#include "./Keyboard.hpp"
#include "./Keyboard_Row.hpp"

namespace android::inputmethodservice
{
	// Fields
	jint Keyboard_Row::defaultHeight()
	{
		return getField<jint>(
			"defaultHeight"
		);
	}
	jint Keyboard_Row::defaultHorizontalGap()
	{
		return getField<jint>(
			"defaultHorizontalGap"
		);
	}
	jint Keyboard_Row::defaultWidth()
	{
		return getField<jint>(
			"defaultWidth"
		);
	}
	jint Keyboard_Row::mode()
	{
		return getField<jint>(
			"mode"
		);
	}
	jint Keyboard_Row::rowEdgeFlags()
	{
		return getField<jint>(
			"rowEdgeFlags"
		);
	}
	jint Keyboard_Row::verticalGap()
	{
		return getField<jint>(
			"verticalGap"
		);
	}
	
	// QAndroidJniObject forward
	Keyboard_Row::Keyboard_Row(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Keyboard_Row::Keyboard_Row(android::inputmethodservice::Keyboard arg0)
		: __JniBaseClass(
			"android.inputmethodservice.Keyboard$Row",
			"(Landroid/inputmethodservice/Keyboard;)V",
			arg0.object()
		) {}
	Keyboard_Row::Keyboard_Row(android::content::res::Resources arg0, android::inputmethodservice::Keyboard arg1, __JniBaseClass arg2)
		: __JniBaseClass(
			"android.inputmethodservice.Keyboard$Row",
			"(Landroid/content/res/Resources;Landroid/inputmethodservice/Keyboard;Landroid/content/res/XmlResourceParser;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
} // namespace android::inputmethodservice

