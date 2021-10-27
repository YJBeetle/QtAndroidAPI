#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view::inputmethod
{
	class CompletionInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		CompletionInfo(QAndroidJniObject obj);
		// Constructors
		CompletionInfo(jlong &arg0, jint &arg1, jstring &arg2);
		CompletionInfo(jlong &arg0, jint &arg1, const QString &arg2);
		CompletionInfo(jlong &arg0, jint &arg1, jstring &arg2, jstring &arg3);
		CompletionInfo(jlong &arg0, jint &arg1, const QString &arg2, const QString &arg3);
		CompletionInfo() = default;
		
		// Methods
		jint describeContents();
		jlong getId();
		jstring getLabel();
		jint getPosition();
		jstring getText();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::inputmethod

