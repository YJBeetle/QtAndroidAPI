#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::print
{
	class PrintDocumentInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONTENT_TYPE_DOCUMENT();
		static jint CONTENT_TYPE_PHOTO();
		static jint CONTENT_TYPE_UNKNOWN();
		static QAndroidJniObject CREATOR();
		static jint PAGE_COUNT_UNKNOWN();
		
		PrintDocumentInfo(QAndroidJniObject obj);
		// Constructors
		PrintDocumentInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getContentType();
		jlong getDataSize();
		jstring getName();
		jint getPageCount();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

