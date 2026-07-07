#pragma once

#include "./SurroundingText.def.hpp"
#include "./TextSnapshot.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline TextSnapshot::TextSnapshot(android::view::inputmethod::SurroundingText arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.view.inputmethod.TextSnapshot",
			"(Landroid/view/inputmethod/SurroundingText;III)V",
			arg0.object(),
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	inline jint TextSnapshot::getCompositionEnd() const
	{
		return callMethod<jint>(
			"getCompositionEnd",
			"()I"
		);
	}
	inline jint TextSnapshot::getCompositionStart() const
	{
		return callMethod<jint>(
			"getCompositionStart",
			"()I"
		);
	}
	inline jint TextSnapshot::getCursorCapsMode() const
	{
		return callMethod<jint>(
			"getCursorCapsMode",
			"()I"
		);
	}
	inline jint TextSnapshot::getSelectionEnd() const
	{
		return callMethod<jint>(
			"getSelectionEnd",
			"()I"
		);
	}
	inline jint TextSnapshot::getSelectionStart() const
	{
		return callMethod<jint>(
			"getSelectionStart",
			"()I"
		);
	}
	inline android::view::inputmethod::SurroundingText TextSnapshot::getSurroundingText() const
	{
		return callObjectMethod(
			"getSurroundingText",
			"()Landroid/view/inputmethod/SurroundingText;"
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
