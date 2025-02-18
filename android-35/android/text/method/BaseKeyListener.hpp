#pragma once

#include "../../view/KeyEvent.def.hpp"
#include "../../view/View.def.hpp"
#include "./BaseKeyListener.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline BaseKeyListener::BaseKeyListener()
		: android::text::method::MetaKeyKeyListener(
			"android.text.method.BaseKeyListener",
			"()V"
		) {}
	
	// Methods
	inline jboolean BaseKeyListener::backspace(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const
	{
		return callMethod<jboolean>(
			"backspace",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline jboolean BaseKeyListener::forwardDelete(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const
	{
		return callMethod<jboolean>(
			"forwardDelete",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline jboolean BaseKeyListener::onKeyDown(android::view::View arg0, JObject arg1, jint arg2, android::view::KeyEvent arg3) const
	{
		return callMethod<jboolean>(
			"onKeyDown",
			"(Landroid/view/View;Landroid/text/Editable;ILandroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2,
			arg3.object()
		);
	}
	inline jboolean BaseKeyListener::onKeyOther(android::view::View arg0, JObject arg1, android::view::KeyEvent arg2) const
	{
		return callMethod<jboolean>(
			"onKeyOther",
			"(Landroid/view/View;Landroid/text/Editable;Landroid/view/KeyEvent;)Z",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
} // namespace android::text::method

// Base class headers
#include "./MetaKeyKeyListener.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::method;
#endif
