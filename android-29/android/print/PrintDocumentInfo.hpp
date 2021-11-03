#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::print
{
	class PrintDocumentInfo : public JObject
	{
	public:
		// Fields
		static jint CONTENT_TYPE_DOCUMENT();
		static jint CONTENT_TYPE_PHOTO();
		static jint CONTENT_TYPE_UNKNOWN();
		static JObject CREATOR();
		static jint PAGE_COUNT_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrintDocumentInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrintDocumentInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getContentType();
		jlong getDataSize();
		JString getName();
		jint getPageCount();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

