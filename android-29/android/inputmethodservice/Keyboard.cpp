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
	
	Keyboard::Keyboard(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Keyboard::Keyboard(android::content::Context arg0, jint arg1)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	Keyboard::Keyboard(android::content::Context arg0, jint arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	Keyboard::Keyboard(android::content::Context arg0, jint arg1, jint arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;IIII)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	Keyboard::Keyboard(android::content::Context arg0, jint arg1, jstring arg2, jint arg3, jint arg4)
	{
		__thiz = QAndroidJniObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;ILjava/lang/CharSequence;II)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3,
			arg4
		);
	}
	
	// Methods
	jint Keyboard::getHeight()
	{
		return __thiz.callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	QAndroidJniObject Keyboard::getKeys()
	{
		return __thiz.callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
	jint Keyboard::getMinWidth()
	{
		return __thiz.callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	QAndroidJniObject Keyboard::getModifierKeys()
	{
		return __thiz.callObjectMethod(
			"getModifierKeys",
			"()Ljava/util/List;"
		);
	}
	jintArray Keyboard::getNearestKeys(jint arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"getNearestKeys",
			"(II)[I",
			arg0,
			arg1
		).object<jintArray>();
	}
	jint Keyboard::getShiftKeyIndex()
	{
		return __thiz.callMethod<jint>(
			"getShiftKeyIndex",
			"()I"
		);
	}
	jboolean Keyboard::isShifted()
	{
		return __thiz.callMethod<jboolean>(
			"isShifted",
			"()Z"
		);
	}
	jboolean Keyboard::setShifted(jboolean arg0)
	{
		return __thiz.callMethod<jboolean>(
			"setShifted",
			"(Z)Z",
			arg0
		);
	}
} // namespace android::inputmethodservice

