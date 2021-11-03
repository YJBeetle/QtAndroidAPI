#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::os
{
	class Parcel;
}
namespace android::os
{
	class PersistableBundle;
}
class JString;
class JString;

namespace android::content
{
	class ClipDescription : public JObject
	{
	public:
		// Fields
		static jint CLASSIFICATION_COMPLETE();
		static jint CLASSIFICATION_NOT_COMPLETE();
		static jint CLASSIFICATION_NOT_PERFORMED();
		static JObject CREATOR();
		static JString MIMETYPE_TEXT_HTML();
		static JString MIMETYPE_TEXT_INTENT();
		static JString MIMETYPE_TEXT_PLAIN();
		static JString MIMETYPE_TEXT_URILIST();
		static JString MIMETYPE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ClipDescription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClipDescription(QAndroidJniObject obj);
		
		// Constructors
		ClipDescription(android::content::ClipDescription &arg0);
		ClipDescription(JString arg0, JArray arg1);
		
		// Methods
		static jboolean compareMimeTypes(JString arg0, JString arg1);
		jint describeContents();
		JArray filterMimeTypes(JString arg0);
		jint getClassificationStatus();
		jfloat getConfidenceScore(JString arg0);
		android::os::PersistableBundle getExtras();
		JString getLabel();
		JString getMimeType(jint arg0);
		jint getMimeTypeCount();
		jlong getTimestamp();
		jboolean hasMimeType(JString arg0);
		jboolean isStyledText();
		void setExtras(android::os::PersistableBundle arg0);
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::content

