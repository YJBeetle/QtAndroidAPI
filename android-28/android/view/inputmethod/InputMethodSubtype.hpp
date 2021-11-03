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

namespace android::view::inputmethod
{
	class InputMethodSubtype : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InputMethodSubtype(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InputMethodSubtype(QAndroidJniObject obj);
		
		// Constructors
		InputMethodSubtype(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6);
		InputMethodSubtype(jint arg0, jint arg1, jstring arg2, jstring arg3, jstring arg4, jboolean arg5, jboolean arg6, jint arg7);
		
		// Methods
		jboolean containsExtraValueKey(jstring arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getDisplayName(android::content::Context arg0, jstring arg1, android::content::pm::ApplicationInfo arg2);
		jstring getExtraValue();
		jstring getExtraValueOf(jstring arg0);
		jint getIconResId();
		jstring getLanguageTag();
		jstring getLocale();
		jstring getMode();
		jint getNameResId();
		jint hashCode();
		jboolean isAsciiCapable();
		jboolean isAuxiliary();
		jboolean overridesImplicitlyEnabledSubtype();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

