#include "../content/Context.hpp"
#include "../content/res/Resources.hpp"
#include "./Keyboard_Key.hpp"
#include "./Keyboard_Row.hpp"
#include "./Keyboard.hpp"

namespace android::inputmethodservice
{
	// Fields
	jint Keyboard::EDGE_BOTTOM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_BOTTOM"
		);
	}
	jint Keyboard::EDGE_LEFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_LEFT"
		);
	}
	jint Keyboard::EDGE_RIGHT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_RIGHT"
		);
	}
	jint Keyboard::EDGE_TOP()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_TOP"
		);
	}
	jint Keyboard::KEYCODE_ALT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_ALT"
		);
	}
	jint Keyboard::KEYCODE_CANCEL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_CANCEL"
		);
	}
	jint Keyboard::KEYCODE_DELETE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_DELETE"
		);
	}
	jint Keyboard::KEYCODE_DONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_DONE"
		);
	}
	jint Keyboard::KEYCODE_MODE_CHANGE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_MODE_CHANGE"
		);
	}
	jint Keyboard::KEYCODE_SHIFT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_SHIFT"
		);
	}
	
	// QAndroidJniObject forward
	Keyboard::Keyboard(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	Keyboard::Keyboard(android::content::Context arg0, jint arg1)
		: __JniBaseClass(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	Keyboard::Keyboard(android::content::Context arg0, jint arg1, jint arg2)
		: __JniBaseClass(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	Keyboard::Keyboard(android::content::Context arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: __JniBaseClass(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	Keyboard::Keyboard(android::content::Context arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
		: __JniBaseClass(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;ILjava/lang/CharSequence;II)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	
	// Methods
	jint Keyboard::getHeight()
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	QAndroidJniObject Keyboard::getKeys()
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
	jint Keyboard::getMinWidth()
	{
		return callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	QAndroidJniObject Keyboard::getModifierKeys()
	{
		return callObjectMethod(
			"getModifierKeys",
			"()Ljava/util/List;"
		);
	}
	jintArray Keyboard::getNearestKeys(jint arg0, jint arg1)
	{
		return callObjectMethod(
			"getNearestKeys",
			"(II)[I",
			arg0,
			arg1
		).object<jintArray>();
	}
	jint Keyboard::getShiftKeyIndex()
	{
		return callMethod<jint>(
			"getShiftKeyIndex",
			"()I"
		);
	}
	jboolean Keyboard::isShifted()
	{
		return callMethod<jboolean>(
			"isShifted",
			"()Z"
		);
	}
	jboolean Keyboard::setShifted(jboolean arg0)
	{
		return callMethod<jboolean>(
			"setShifted",
			"(Z)Z",
			arg0
		);
	}
} // namespace android::inputmethodservice

