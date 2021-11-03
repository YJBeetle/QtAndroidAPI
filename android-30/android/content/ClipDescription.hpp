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
		static JObject CREATOR();
		static JString MIMETYPE_TEXT_HTML();
		static JString MIMETYPE_TEXT_INTENT();
		static JString MIMETYPE_TEXT_PLAIN();
		static JString MIMETYPE_TEXT_URILIST();
		static JString MIMETYPE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit ClipDescription(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ClipDescription(QJniObject obj);
		
		// Constructors
		ClipDescription(android::content::ClipDescription &arg0);
		ClipDescription(JString arg0, JArray arg1);
		
		// Methods
		static jboolean compareMimeTypes(JString arg0, JString arg1);
		jint describeContents() const;
		JArray filterMimeTypes(JString arg0) const;
		android::os::PersistableBundle getExtras() const;
		JString getLabel() const;
		JString getMimeType(jint arg0) const;
		jint getMimeTypeCount() const;
		jlong getTimestamp() const;
		jboolean hasMimeType(JString arg0) const;
		void setExtras(android::os::PersistableBundle arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::content

