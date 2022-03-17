#pragma once

#include "../../../JCharArray.hpp"
#include "../../view/KeyEvent.def.hpp"
#include "./DialerKeyListener.def.hpp"

namespace android::text::method
{
	// Fields
	inline JCharArray DialerKeyListener::CHARACTERS()
	{
		return getStaticObjectField(
			"android.text.method.DialerKeyListener",
			"CHARACTERS",
			"[C"
		);
	}
	
	// Constructors
	inline DialerKeyListener::DialerKeyListener()
		: android::text::method::NumberKeyListener(
			"android.text.method.DialerKeyListener",
			"()V"
		) {}
	
	// Methods
	inline android::text::method::DialerKeyListener DialerKeyListener::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.DialerKeyListener",
			"getInstance",
			"()Landroid/text/method/DialerKeyListener;"
		);
	}
	inline jint DialerKeyListener::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method

// Base class headers
#include "./MetaKeyKeyListener.hpp"
#include "./BaseKeyListener.hpp"
#include "./NumberKeyListener.hpp"

