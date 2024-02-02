#pragma once

#include "../../../JCharArray.hpp"
#include "../../../JString.hpp"
#include "../../../JString.hpp"
#include "../../../java/util/Locale.def.hpp"
#include "./DigitsKeyListener.def.hpp"

namespace android::text::method
{
	// Fields
	
	// Constructors
	inline DigitsKeyListener::DigitsKeyListener()
		: android::text::method::NumberKeyListener(
			"android.text.method.DigitsKeyListener",
			"()V"
		) {}
	inline DigitsKeyListener::DigitsKeyListener(java::util::Locale arg0)
		: android::text::method::NumberKeyListener(
			"android.text.method.DigitsKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	inline DigitsKeyListener::DigitsKeyListener(jboolean arg0, jboolean arg1)
		: android::text::method::NumberKeyListener(
			"android.text.method.DigitsKeyListener",
			"(ZZ)V",
			arg0,
			arg1
		) {}
	inline DigitsKeyListener::DigitsKeyListener(java::util::Locale arg0, jboolean arg1, jboolean arg2)
		: android::text::method::NumberKeyListener(
			"android.text.method.DigitsKeyListener",
			"(Ljava/util/Locale;ZZ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	inline android::text::method::DigitsKeyListener DigitsKeyListener::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"()Landroid/text/method/DigitsKeyListener;"
		);
	}
	inline android::text::method::DigitsKeyListener DigitsKeyListener::getInstance(JString arg0)
	{
		return callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(Ljava/lang/String;)Landroid/text/method/DigitsKeyListener;",
			arg0.object<jstring>()
		);
	}
	inline android::text::method::DigitsKeyListener DigitsKeyListener::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/DigitsKeyListener;",
			arg0.object()
		);
	}
	inline android::text::method::DigitsKeyListener DigitsKeyListener::getInstance(jboolean arg0, jboolean arg1)
	{
		return callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(ZZ)Landroid/text/method/DigitsKeyListener;",
			arg0,
			arg1
		);
	}
	inline android::text::method::DigitsKeyListener DigitsKeyListener::getInstance(java::util::Locale arg0, jboolean arg1, jboolean arg2)
	{
		return callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(Ljava/util/Locale;ZZ)Landroid/text/method/DigitsKeyListener;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	inline JString DigitsKeyListener::filter(JString arg0, jint arg1, jint arg2, JObject arg3, jint arg4, jint arg5) const
	{
		return callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		);
	}
	inline jint DigitsKeyListener::getInputType() const
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
