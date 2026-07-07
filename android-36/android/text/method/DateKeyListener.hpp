#pragma once

#include "../../../JCharArray.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./DateKeyListener.def.hpp"

namespace android::text::method
{
	// Fields
	inline JCharArray DateKeyListener::CHARACTERS()
	{
		return getStaticObjectField(
			"android.text.method.DateKeyListener",
			"CHARACTERS",
			"[C"
		);
	}
	
	// Constructors
	inline DateKeyListener::DateKeyListener()
		: android::text::method::NumberKeyListener(
			"android.text.method.DateKeyListener",
			"()V"
		) {}
	inline DateKeyListener::DateKeyListener(java::util::Locale arg0)
		: android::text::method::NumberKeyListener(
			"android.text.method.DateKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::text::method::DateKeyListener DateKeyListener::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.DateKeyListener",
			"getInstance",
			"()Landroid/text/method/DateKeyListener;"
		);
	}
	inline android::text::method::DateKeyListener DateKeyListener::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.text.method.DateKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/DateKeyListener;",
			arg0.object()
		);
	}
	inline jint DateKeyListener::getInputType() const
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

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text::method;
#endif
