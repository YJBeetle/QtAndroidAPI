#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::os
{
	class Bundle;
}
namespace android::os
{
	class Parcel;
}

namespace android::view::textclassifier
{
	class TextLinks_TextLink : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TextLinks_TextLink(QAndroidJniObject obj);
		// Constructors
		TextLinks_TextLink() = default;
		
		// Methods
		jint describeContents();
		jfloat getConfidenceScore(jstring arg0);
		jint getEnd();
		jstring getEntity(jint arg0);
		jint getEntityCount();
		QAndroidJniObject getExtras();
		jint getStart();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

