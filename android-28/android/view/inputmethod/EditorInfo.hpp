#pragma once

#include "../../../JObject.hpp"

class JArray;
namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;

namespace android::view::inputmethod
{
	class EditorInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint IME_ACTION_DONE();
		static jint IME_ACTION_GO();
		static jint IME_ACTION_NEXT();
		static jint IME_ACTION_NONE();
		static jint IME_ACTION_PREVIOUS();
		static jint IME_ACTION_SEARCH();
		static jint IME_ACTION_SEND();
		static jint IME_ACTION_UNSPECIFIED();
		static jint IME_FLAG_FORCE_ASCII();
		static jint IME_FLAG_NAVIGATE_NEXT();
		static jint IME_FLAG_NAVIGATE_PREVIOUS();
		static jint IME_FLAG_NO_ACCESSORY_ACTION();
		static jint IME_FLAG_NO_ENTER_ACTION();
		static jint IME_FLAG_NO_EXTRACT_UI();
		static jint IME_FLAG_NO_FULLSCREEN();
		static jint IME_FLAG_NO_PERSONALIZED_LEARNING();
		static jint IME_MASK_ACTION();
		static jint IME_NULL();
		jint actionId();
		JString actionLabel();
		JArray contentMimeTypes();
		android::os::Bundle extras();
		jint fieldId();
		JString fieldName();
		android::os::LocaleList hintLocales();
		JString hintText();
		jint imeOptions();
		jint initialCapsMode();
		jint initialSelEnd();
		jint initialSelStart();
		jint inputType();
		JString label();
		JString packageName();
		JString privateImeOptions();
		
		// QJniObject forward
		template<typename ...Ts> explicit EditorInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		EditorInfo(QJniObject obj);
		
		// Constructors
		EditorInfo();
		
		// Methods
		jint describeContents() const;
		void dump(JObject arg0, JString arg1) const;
		void makeCompatible(jint arg0) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view::inputmethod

