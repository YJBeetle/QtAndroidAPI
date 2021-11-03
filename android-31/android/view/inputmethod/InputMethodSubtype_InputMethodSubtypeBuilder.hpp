#pragma once

#include "../../../JObject.hpp"

namespace android::view::inputmethod
{
	class InputMethodSubtype;
}

namespace android::view::inputmethod
{
	class InputMethodSubtype_InputMethodSubtypeBuilder : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputMethodSubtype_InputMethodSubtypeBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodSubtype_InputMethodSubtypeBuilder(QAndroidJniObject obj);
		
		// Constructors
		InputMethodSubtype_InputMethodSubtypeBuilder();
		
		// Methods
		android::view::inputmethod::InputMethodSubtype build();
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setIsAsciiCapable(jboolean arg0);
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setIsAuxiliary(jboolean arg0);
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setLanguageTag(jstring arg0);
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setOverridesImplicitlyEnabledSubtype(jboolean arg0);
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeExtraValue(jstring arg0);
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeIconResId(jint arg0);
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeId(jint arg0);
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeLocale(jstring arg0);
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeMode(jstring arg0);
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeNameResId(jint arg0);
	};
} // namespace android::view::inputmethod

