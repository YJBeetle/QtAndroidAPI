#pragma once

#include "../content/res/Resources.def.hpp"
#include "./Keyboard.def.hpp"
#include "./Keyboard_Row.def.hpp"

namespace android::inputmethodservice
{
	// Fields
	inline jint Keyboard_Row::defaultHeight()
	{
		return getField<jint>(
			"defaultHeight"
		);
	}
	inline jint Keyboard_Row::defaultHorizontalGap()
	{
		return getField<jint>(
			"defaultHorizontalGap"
		);
	}
	inline jint Keyboard_Row::defaultWidth()
	{
		return getField<jint>(
			"defaultWidth"
		);
	}
	inline jint Keyboard_Row::mode()
	{
		return getField<jint>(
			"mode"
		);
	}
	inline jint Keyboard_Row::rowEdgeFlags()
	{
		return getField<jint>(
			"rowEdgeFlags"
		);
	}
	inline jint Keyboard_Row::verticalGap()
	{
		return getField<jint>(
			"verticalGap"
		);
	}
	
	// Constructors
	inline Keyboard_Row::Keyboard_Row(android::inputmethodservice::Keyboard arg0)
		: JObject(
			"android.inputmethodservice.Keyboard$Row",
			"(Landroid/inputmethodservice/Keyboard;)V",
			arg0.object()
		) {}
	inline Keyboard_Row::Keyboard_Row(android::content::res::Resources arg0, android::inputmethodservice::Keyboard arg1, JObject arg2)
		: JObject(
			"android.inputmethodservice.Keyboard$Row",
			"(Landroid/content/res/Resources;Landroid/inputmethodservice/Keyboard;Landroid/content/res/XmlResourceParser;)V",
			arg0.object(),
			arg1.object(),
			arg2.object()
		) {}
	
	// Methods
} // namespace android::inputmethodservice

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::inputmethodservice;
#endif
