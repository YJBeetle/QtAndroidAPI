#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::widget::inline
{
	class InlinePresentationSpec;
}

namespace android::view::inputmethod
{
	class InlineSuggestionInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jstring SOURCE_AUTOFILL();
		static jstring SOURCE_PLATFORM();
		static jstring TYPE_ACTION();
		static jstring TYPE_SUGGESTION();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit InlineSuggestionInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		InlineSuggestionInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jarray getAutofillHints();
		android::widget::inline::InlinePresentationSpec getInlinePresentationSpec();
		jstring getSource();
		jstring getType();
		jint hashCode();
		jboolean isPinned();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

