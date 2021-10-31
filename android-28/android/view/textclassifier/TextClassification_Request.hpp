#pragma once

#include "../../../__JniBaseClass.hpp"

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
		static __JniBaseClass CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit TextClassification_Request(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		TextClassification_Request(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::os::LocaleList getDefaultLocales();
		jint getEndIndex();
		java::time::ZonedDateTime getReferenceTime();
		jint getStartIndex();
		jstring getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

