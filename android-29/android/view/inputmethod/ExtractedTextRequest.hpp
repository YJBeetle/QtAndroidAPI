#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class ExtractedTextRequest : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jint flags();
		jint hintMaxChars();
		jint hintMaxLines();
		jint token();
		
		ExtractedTextRequest(QAndroidJniObject obj);
		// Constructors
		ExtractedTextRequest();
		
		// Methods
		jint describeContents();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

