#pragma once

#include "../../JString.hpp"
#include "./Spannable_Factory.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	inline Spannable_Factory::Spannable_Factory()
		: JObject(
			"android.text.Spannable$Factory",
			"()V"
		) {}
	
	// Methods
	inline android::text::Spannable_Factory Spannable_Factory::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.Spannable$Factory",
			"getInstance",
			"()Landroid/text/Spannable$Factory;"
		);
	}
	inline JObject Spannable_Factory::newSpannable(JString arg0) const
	{
		return callObjectMethod(
			"newSpannable",
			"(Ljava/lang/CharSequence;)Landroid/text/Spannable;",
			arg0.object<jstring>()
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
