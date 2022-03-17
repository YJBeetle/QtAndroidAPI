#pragma once

#include "../content/res/Resources.def.hpp"
#include "../view/View.def.hpp"
#include "../../JString.hpp"
#include "../../JString.hpp"
#include "./AutoText.def.hpp"

namespace android::text
{
	// Fields
	
	// Constructors
	
	// Methods
	inline JString AutoText::get(JString arg0, jint arg1, jint arg2, android::view::View arg3)
	{
		return callStaticObjectMethod(
			"android.text.AutoText",
			"get",
			"(Ljava/lang/CharSequence;IILandroid/view/View;)Ljava/lang/String;",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline jint AutoText::getSize(android::view::View arg0)
	{
		return callStaticMethod<jint>(
			"android.text.AutoText",
			"getSize",
			"(Landroid/view/View;)I",
			arg0.object()
		);
	}
} // namespace android::text

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::text;
#endif
