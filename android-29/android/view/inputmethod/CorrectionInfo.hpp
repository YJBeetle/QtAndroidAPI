#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class CorrectionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		CorrectionInfo(QAndroidJniObject obj);
		// Constructors
		CorrectionInfo(jint arg0, jstring arg1, jstring arg2);
		CorrectionInfo() = default;
		
		// Methods
		jint describeContents();
		jstring getNewText();
		jint getOffset();
		jstring getOldText();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

