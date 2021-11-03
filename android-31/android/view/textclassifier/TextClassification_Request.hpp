#pragma once

#include "../../../JObject.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class LocaleList;
}
namespace android::os
{
	class Parcel;
}
class JString;
class JString;
namespace java::time
{
	class ZonedDateTime;
}

namespace android::view::textclassifier
{
	class TextClassification_Request : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassification_Request(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		TextClassification_Request(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		JString getCallingPackageName();
		android::os::LocaleList getDefaultLocales();
		jint getEndIndex();
		android::os::Bundle getExtras();
		java::time::ZonedDateTime getReferenceTime();
		jint getStartIndex();
		JString getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

