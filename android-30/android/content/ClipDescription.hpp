#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PersistableBundle;
}

namespace android::content
{
	class ClipDescription : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jstring MIMETYPE_TEXT_HTML();
		static jstring MIMETYPE_TEXT_INTENT();
		static jstring MIMETYPE_TEXT_PLAIN();
		static jstring MIMETYPE_TEXT_URILIST();
		static jstring MIMETYPE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClipDescription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClipDescription(QAndroidJniObject obj);
		
		// Constructors
		ClipDescription(android::content::ClipDescription &arg0);
		ClipDescription(jstring arg0, jarray arg1);
		
		// Methods
		static jboolean compareMimeTypes(jstring arg0, jstring arg1);
		jint describeContents();
		jarray filterMimeTypes(jstring arg0);
		android::os::PersistableBundle getExtras();
		jstring getLabel();
		jstring getMimeType(jint arg0);
		jint getMimeTypeCount();
		jlong getTimestamp();
		jboolean hasMimeType(jstring arg0);
		void setExtras(android::os::PersistableBundle arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

