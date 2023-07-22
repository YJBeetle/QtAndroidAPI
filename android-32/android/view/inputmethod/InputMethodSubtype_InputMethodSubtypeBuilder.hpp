#pragma once

#include "./InputMethodSubtype.def.hpp"
#include "../../../JString.hpp"
#include "./InputMethodSubtype_InputMethodSubtypeBuilder.def.hpp"

namespace android::view::inputmethod
{
	// Fields
	
	// Constructors
	inline InputMethodSubtype_InputMethodSubtypeBuilder::InputMethodSubtype_InputMethodSubtypeBuilder()
		: JObject(
			"android.view.inputmethod.InputMethodSubtype$InputMethodSubtypeBuilder",
			"()V"
		) {}
	
	// Methods
	inline android::view::inputmethod::InputMethodSubtype InputMethodSubtype_InputMethodSubtypeBuilder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/view/inputmethod/InputMethodSubtype;"
		);
	}
	inline android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder InputMethodSubtype_InputMethodSubtypeBuilder::setIsAsciiCapable(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsAsciiCapable",
			"(Z)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	inline android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder InputMethodSubtype_InputMethodSubtypeBuilder::setIsAuxiliary(jboolean arg0) const
	{
		return callObjectMethod(
			"setIsAuxiliary",
			"(Z)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	inline android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder InputMethodSubtype_InputMethodSubtypeBuilder::setLanguageTag(JString arg0) const
	{
		return callObjectMethod(
			"setLanguageTag",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder InputMethodSubtype_InputMethodSubtypeBuilder::setOverridesImplicitlyEnabledSubtype(jboolean arg0) const
	{
		return callObjectMethod(
			"setOverridesImplicitlyEnabledSubtype",
			"(Z)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	inline android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeExtraValue(JString arg0) const
	{
		return callObjectMethod(
			"setSubtypeExtraValue",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeIconResId(jint arg0) const
	{
		return callObjectMethod(
			"setSubtypeIconResId",
			"(I)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	inline android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeId(jint arg0) const
	{
		return callObjectMethod(
			"setSubtypeId",
			"(I)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
	inline android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeLocale(JString arg0) const
	{
		return callObjectMethod(
			"setSubtypeLocale",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeMode(JString arg0) const
	{
		return callObjectMethod(
			"setSubtypeMode",
			"(Ljava/lang/String;)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0.object<jstring>()
		);
	}
	inline android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder InputMethodSubtype_InputMethodSubtypeBuilder::setSubtypeNameResId(jint arg0) const
	{
		return callObjectMethod(
			"setSubtypeNameResId",
			"(I)Landroid/view/inputmethod/InputMethodSubtype$InputMethodSubtypeBuilder;",
			arg0
		);
	}
} // namespace android::view::inputmethod

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::view::inputmethod;
#endif
