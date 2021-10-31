#pragma once

#include "../../../__JniBaseClass.hpp"

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
namespace java::time
{
	class ZonedDateTime;
}

namespace android::view::textclassifier
{
	class TextClassification_Request : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextClassification_Request(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassification_Request(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jstring getCallingPackageName();
		QAndroidJniObject getDefaultLocales();
		jint getEndIndex();
		QAndroidJniObject getExtras();
		QAndroidJniObject getReferenceTime();
		jint getStartIndex();
		jstring getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

