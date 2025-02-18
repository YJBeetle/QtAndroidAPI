#pragma once

#include "../../../JObject.hpp"

namespace android::icu::util
{
	class ULocale;
}
namespace android::view::inputmethod
{
	class InputMethodSubtype;
}
class JString;
class JString;

namespace android::view::inputmethod
{
	class InputMethodSubtype_InputMethodSubtypeBuilder : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit InputMethodSubtype_InputMethodSubtypeBuilder(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodSubtype_InputMethodSubtypeBuilder(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		InputMethodSubtype_InputMethodSubtypeBuilder();
		
		// Methods
		android::view::inputmethod::InputMethodSubtype build() const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setIsAsciiCapable(jboolean arg0) const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setIsAuxiliary(jboolean arg0) const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setLanguageTag(JString arg0) const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setOverridesImplicitlyEnabledSubtype(jboolean arg0) const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setPhysicalKeyboardHint(android::icu::util::ULocale arg0, JString arg1) const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeExtraValue(JString arg0) const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeIconResId(jint arg0) const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeId(jint arg0) const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeLocale(JString arg0) const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeMode(JString arg0) const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeNameOverride(JString arg0) const;
		android::view::inputmethod::InputMethodSubtype_InputMethodSubtypeBuilder setSubtypeNameResId(jint arg0) const;
	};
} // namespace android::view::inputmethod

