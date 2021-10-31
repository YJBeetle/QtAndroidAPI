#pragma once

#include "../../../__JniBaseClass.hpp"

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
	class InlineSuggestionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jstring SOURCE_AUTOFILL();
		static jstring SOURCE_PLATFORM();
		static jstring TYPE_ACTION();
		static jstring TYPE_SUGGESTION();
		
		// QJniObject forward
		template<typename ...Ts> explicit InlineSuggestionInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		InlineSuggestionInfo(QJniObject obj);
		
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

