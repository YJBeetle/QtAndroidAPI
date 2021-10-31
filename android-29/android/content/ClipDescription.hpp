#pragma once

#include "../../__JniBaseClass.hpp"

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
	class ClipDescription : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring MIMETYPE_TEXT_HTML();
		static jstring MIMETYPE_TEXT_INTENT();
		static jstring MIMETYPE_TEXT_PLAIN();
		static jstring MIMETYPE_TEXT_URILIST();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClipDescription(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		ClipDescription(QAndroidJniObject obj);
		
		// Constructors
		ClipDescription(android::content::ClipDescription &arg0);
		ClipDescription(jstring arg0, jarray arg1);
		
		// Methods
		static jboolean compareMimeTypes(jstring arg0, jstring arg1);
		jint describeContents();
		jarray filterMimeTypes(jstring arg0);
		QAndroidJniObject getExtras();
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

