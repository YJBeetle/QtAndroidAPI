#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class ExtractedText : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_SELECTING();
		static jint FLAG_SINGLE_LINE();
		jint flags();
		jstring hint();
		jint partialEndOffset();
		jint partialStartOffset();
		jint selectionEnd();
		jint selectionStart();
		jint startOffset();
		jstring text();
		
		// QJniObject forward
		template<typename ...Ts> explicit ExtractedText(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ExtractedText(QJniObject obj);
		
		// Constructors
		ExtractedText();
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

