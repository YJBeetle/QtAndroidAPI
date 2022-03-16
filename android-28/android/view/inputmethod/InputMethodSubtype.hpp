#pragma once

#include "../../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::content::pm
{
	class ApplicationInfo;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JObject;
class JString;

namespace android::view::inputmethod
{
	class InputMethodSubtype : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputMethodSubtype(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodSubtype(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		InputMethodSubtype(jint arg0, jint arg1, JString arg2, JString arg3, JString arg4, jboolean arg5, jboolean arg6);
		InputMethodSubtype(jint arg0, jint arg1, JString arg2, JString arg3, JString arg4, jboolean arg5, jboolean arg6, jint arg7);
		
		// Methods
		jboolean containsExtraValueKey(JString arg0) const;
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getDisplayName(android::content::Context arg0, JString arg1, android::content::pm::ApplicationInfo arg2) const;
		JString getExtraValue() const;
		JString getExtraValueOf(JString arg0) const;
		jint getIconResId() const;
		JString getLanguageTag() const;
		JString getLocale() const;
		JString getMode() const;
		jint getNameResId() const;
		jint hashCode() const;
		jboolean isAsciiCapable() const;
		jboolean isAuxiliary() const;
		jboolean overridesImplicitlyEnabledSubtype() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

