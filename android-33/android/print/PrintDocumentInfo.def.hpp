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
		PrintDocumentInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getContentType() const;
		jlong getDataSize() const;
		JString getName() const;
		jint getPageCount() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::print

