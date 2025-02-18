#pragma once

#include "../../JIntArray.hpp"
#include "../content/Context.def.hpp"
#include "../content/res/Resources.def.hpp"
#include "./Keyboard_Key.def.hpp"
#include "./Keyboard_Row.def.hpp"
#include "../../JString.hpp"
#include "./Keyboard.def.hpp"

namespace android::inputmethodservice
{
	// Fields
	inline jint Keyboard::EDGE_BOTTOM()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_BOTTOM"
		);
	}
	inline jint Keyboard::EDGE_LEFT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_LEFT"
		);
	}
	inline jint Keyboard::EDGE_RIGHT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_RIGHT"
		);
	}
	inline jint Keyboard::EDGE_TOP()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"EDGE_TOP"
		);
	}
	inline jint Keyboard::KEYCODE_ALT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_ALT"
		);
	}
	inline jint Keyboard::KEYCODE_CANCEL()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_CANCEL"
		);
	}
	inline jint Keyboard::KEYCODE_DELETE()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_DELETE"
		);
	}
	inline jint Keyboard::KEYCODE_DONE()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_DONE"
		);
	}
	inline jint Keyboard::KEYCODE_MODE_CHANGE()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_MODE_CHANGE"
		);
	}
	inline jint Keyboard::KEYCODE_SHIFT()
	{
		return getStaticField<jint>(
			"android.inputmethodservice.Keyboard",
			"KEYCODE_SHIFT"
		);
	}
	
	// Constructors
	inline Keyboard::Keyboard(android::content::Context arg0, jint arg1)
		: JObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;I)V",
			arg0.object(),
			arg1
		) {}
	inline Keyboard::Keyboard(android::content::Context arg0, jint arg1, jint arg2)
		: JObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;II)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	inline Keyboard::Keyboard(android::content::Context arg0, jint arg1, jint arg2, jint arg3, jint arg4)
		: JObject(
			"android.inputmethodservice.Keyboard",
			"(Landroid/content/Context;IIII)V",
			arg0.object(),
			arg1,
			arg2,
			arg3,
			arg4
		) {}
	inline Keyboard::Keyboard(android::content::Context arg0, jint arg1, JString arg2, jint arg3, jint arg4)
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
	inline jint Keyboard::getHeight() const
	{
		return callMethod<jint>(
			"getHeight",
			"()I"
		);
	}
	inline JObject Keyboard::getKeys() const
	{
		return callObjectMethod(
			"getKeys",
			"()Ljava/util/List;"
		);
	}
	inline jint Keyboard::getMinWidth() const
	{
		return callMethod<jint>(
			"getMinWidth",
			"()I"
		);
	}
	inline JObject Keyboard::getModifierKeys() const
	{
		return callObjectMethod(
			"getModifierKeys",
			"()Ljava/util/List;"
		);
	}
	inline JIntArray Keyboard::getNearestKeys(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"getNearestKeys",
			"(II)[I",
			arg0,
			arg1
		);
	}
	inline jint Keyboard::getShiftKeyIndex() const
	{
		return callMethod<jint>(
			"getShiftKeyIndex",
			"()I"
		);
	}
	inline jboolean Keyboard::isShifted() const
	{
		return callMethod<jboolean>(
			"isShifted",
			"()Z"
		);
	}
	inline jboolean Keyboard::setShifted(jboolean arg0) const
	{
		return callMethod<jboolean>(
			"setShifted",
			"(Z)Z",
			arg0
		);
	}
} // namespace android::inputmethodservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::inputmethodservice;
#endif
