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
		static __JniBaseClass CREATOR();
		static jint PAGE_COUNT_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit PrintDocumentInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocumentInfo(QJniObject obj);
		
		// Constructors
		
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

