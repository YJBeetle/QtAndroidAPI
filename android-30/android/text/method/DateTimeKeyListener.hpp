#pragma once

#include "../../../JCharArray.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./DateTimeKeyListener.def.hpp"

namespace android::text::method
{
	// Fields
	inline JCharArray DateTimeKeyListener::CHARACTERS()
	{
		return getStaticObjectField(
			"android.text.method.DateTimeKeyListener",
			"CHARACTERS",
			"[C"
		);
	}
	
	// Constructors
	inline DateTimeKeyListener::DateTimeKeyListener()
		: android::text::method::NumberKeyListener(
			"android.text.method.DateTimeKeyListener",
			"()V"
		) {}
	inline DateTimeKeyListener::DateTimeKeyListener(java::util::Locale arg0)
		: android::text::method::NumberKeyListener(
			"android.text.method.DateTimeKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::text::method::DateTimeKeyListener DateTimeKeyListener::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.DateTimeKeyListener",
			"getInstance",
			"()Landroid/text/method/DateTimeKeyListener;"
		);
	}
	inline android::text::method::DateTimeKeyListener DateTimeKeyListener::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.text.method.DateTimeKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/DateTimeKeyListener;",
			arg0.object()
		);
	}
	inline jint DateTimeKeyListener::getInputType() const
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

