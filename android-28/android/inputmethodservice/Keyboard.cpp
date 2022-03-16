#include "../../JIntArray.hpp"
#include "../content/Context.hpp"
#include "../content/res/Resources.hpp"
#include "./Keyboard_Key.hpp"
#include "./Keyboard_Row.hpp"
#include "../../JString.hpp"
#include "./Keyboard.hpp"

namespace android::inputmethodservice
{
	// Fields
	jint Keyboard::EDGE_BOTTOM()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_BOTTOM"
		);
	}
	jint Keyboard::EDGE_LEFT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_LEFT"
		);
	}
	jint Keyboard::EDGE_RIGHT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_RIGHT"
		);
	}
	jint Keyboard::EDGE_TOP()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_TOP"
		);
	}
	jint Keyboard::KEYCODE_ALT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_ALT"
		);
	}
	jint Keyboard::KEYCODE_CANCEL()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_CANCEL"
		);
	}
	jint Keyboard::KEYCODE_DELETE()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_DELETE"
		);
	}
	jint Keyboard::KEYCODE_DONE()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_DONE"
		);
	}
	jint Keyboard::KEYCODE_MODE_CHANGE()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_MODE_CHANGE"
		);
	}
	jint Keyboard::KEYCODE_SHIFT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_SHIFT"
		);
	}
	
	// Constructors
	Keyboard::Keyboard(android::content::Context arg0, jint arg1)
		: JObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	Keyboard::Keyboard(android::content::Context arg0, jint arg1, jint arg2)
		: JObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	Keyboard::Keyboard(android::content::Context arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	Keyboard::Keyboard(android::content::Context arg0, jint arg1, JString arg2, jint arg3, jint arg4)
		: JObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;ILjava/lang/CharSequence;II)V",
			arg0.object(),
			arg1,
			arg2.object<jstring>(),
			arg3,
			arg4
		) {}
	
	// Methods
	jint Keyboard::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	JObject Keyboard::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
	jint Keyboard::getMinWidth() const
	{
		return callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	JObject Keyboard::getModifierKeys() const
	{
		return callObjectMethod(
			"getModifierKeys",
			"()Ljava/util/List;"
		);
	}
	JIntArray Keyboard::getNearestKeys(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getNearestKeys",
			"(II)[I",
			arg0,
			arg1
		);
	}
	jint Keyboard::getShiftKeyIndex() const
	{
		return callMethod<jint>(
			"getShiftKeyIndex",
			"()I"
		);
	}
	jboolean Keyboard::isShifted() const
	{
		return callMethod<jboolean>(
			"isShifted",
			"()Z"
		);
	}
	jboolean Keyboard::setShifted(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setShifted",
			"(Z)Z",
			arg0
		);
	}
} // namespace android::inputmethodservice

