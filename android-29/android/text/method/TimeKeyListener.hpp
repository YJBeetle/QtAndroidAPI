#pragma once

#include "../../../JCharArray.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./TimeKeyListener.def.hpp"

namespace android::text::method
{
	// Fields
	inline JCharArray TimeKeyListener::CHARACTERS()
	{
		return getStaticObjectField(
			"android.text.method.TimeKeyListener",
			"CHARACTERS",
			"[C"
		);
	}
	
	// Constructors
	inline TimeKeyListener::TimeKeyListener()
		: android::text::method::NumberKeyListener(
			"android.text.method.TimeKeyListener",
			"()V"
		) {}
	inline TimeKeyListener::TimeKeyListener(java::util::Locale arg0)
		: android::text::method::NumberKeyListener(
			"android.text.method.TimeKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::text::method::TimeKeyListener TimeKeyListener::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.TimeKeyListener",
			"getInstance",
			"()Landroid/text/method/TimeKeyListener;"
		);
	}
	inline android::text::method::TimeKeyListener TimeKeyListener::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.text.method.TimeKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/TimeKeyListener;",
			arg0.object()
		);
	}
	inline jint TimeKeyListener::getInputType() const
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

