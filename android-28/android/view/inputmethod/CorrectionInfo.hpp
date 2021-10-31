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
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CorrectionInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CorrectionInfo(QAndroidJniObject obj);
		
		// Constructors
		CorrectionInfo(jint arg0, jstring arg1, jstring arg2);
		
		// Methods
		jint describeContents();
		jstring getNewText();
		jint getOffset();
		jstring getOldText();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

