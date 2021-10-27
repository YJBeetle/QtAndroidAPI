#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class ExtractedText : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
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
		
		ExtractedText(QAndroidJniObject obj);
		// Constructors
		ExtractedText();
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

