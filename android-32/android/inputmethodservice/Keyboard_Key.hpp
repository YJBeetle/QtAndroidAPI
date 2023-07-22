#pragma once

#include "../../JIntArray.hpp"
#include "../content/res/Resources.def.hpp"
#include "../graphics/drawable/Drawable.def.hpp"
#include "./Keyboard_Row.def.hpp"
#include "../../JString.hpp"
#include "./Keyboard_Key.def.hpp"

namespace android::inputmethodservice
{
	// Fields
	inline JIntArray Keyboard_Key::codes()
	{
		return getObjectField(
			"codes",
			"[I"
		);
	}
	inline jint Keyboard_Key::edgeFlags()
	{
		return getField<jint>(
			"edgeFlags"
		);
	}
	inline jint Keyboard_Key::gap()
	{
		return getField<jint>(
			"gap"
		);
	}
	inline jint Keyboard_Key::height()
	{
		return getField<jint>(
			"height"
		);
	}
	inline android::graphics::drawable::Drawable Keyboard_Key::icon()
	{
		return getObjectField(
			"icon",
			"Landroid/graphics/drawable/Drawable;"
		);
	}
	inline android::graphics::drawable::Drawable Keyboard_Key::iconPreview()
	{
		return getObjectField(
			"iconPreview",
			"Landroid/graphics/drawable/Drawable;"
		);
	}
	inline JString Keyboard_Key::label()
	{
		return getObjectField(
			"label",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jboolean Keyboard_Key::modifier()
	{
		return getField<jboolean>(
			"modifier"
		);
	}
	inline jboolean Keyboard_Key::on()
	{
		return getField<jboolean>(
			"on"
		);
	}
	inline JString Keyboard_Key::popupCharacters()
	{
		return getObjectField(
			"popupCharacters",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint Keyboard_Key::popupResId()
	{
		return getField<jint>(
			"popupResId"
		);
	}
	inline jboolean Keyboard_Key::pressed()
	{
		return getField<jboolean>(
			"pressed"
		);
	}
	inline jboolean Keyboard_Key::repeatable()
	{
		return getField<jboolean>(
			"repeatable"
		);
	}
	inline jboolean Keyboard_Key::sticky()
	{
		return getField<jboolean>(
			"sticky"
		);
	}
	inline JString Keyboard_Key::text()
	{
		return getObjectField(
			"text",
			"Ljava/lang/CharSequence;"
		);
	}
	inline jint Keyboard_Key::width()
	{
		return getField<jint>(
			"width"
		);
	}
	inline jint Keyboard_Key::x()
	{
		return getField<jint>(
			"x"
		);
	}
	inline jint Keyboard_Key::y()
	{
		return getField<jint>(
			"y"
		);
	}
	
	// Constructors
	inline Keyboard_Key::Keyboard_Key(android::inputmethodservice::Keyboard_Row arg0)
		: JObject(
			"android.inputmethodservice.Keyboard$Key",
			"(Landroid/inputmethodservice/Keyboard$Row;)V",
			arg0.object()
		) {}
	inline Keyboard_Key::Keyboard_Key(android::content::res::Resources arg0, android::inputmethodservice::Keyboard_Row arg1, jint arg2, jint arg3, JObject arg4)
		: JObject(
			"android.inputmethodservice.Keyboard$Key",
			"(Landroid/content/res/Resources;Landroid/inputmethodservice/Keyboard$Row;IILandroid/content/res/XmlResourceParser;)V",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3,
			arg4.object()
		) {}
	
	// Methods
	inline JIntArray Keyboard_Key::getCurrentDrawableState() const
	{
		return callObjectMethod(
			"getCurrentDrawableState",
			"()[I"
		);
	}
	inline jboolean Keyboard_Key::isInside(jint arg0, jint arg1) const
	{
		return callMethod<jboolean>(
			"isInside",
			"(II)Z",
			arg0,
			arg1
		);
	}
	inline void Keyboard_Key::onPressed() const
	{
		callMethod<void>(
			"onPressed",
			"()V"
		);
	}
	inline void Keyboard_Key::onReleased(jboolean arg0) const
	{
		callMethod<void>(
			"onReleased",
			"(Z)V",
			arg0
		);
	}
	inline jint Keyboard_Key::squaredDistanceFrom(jint arg0, jint arg1) const
	{
		return callMethod<jint>(
			"squaredDistanceFrom",
			"(II)I",
			arg0,
			arg1
		);
	}
} // namespace android::inputmethodservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::inputmethodservice;
#endif
