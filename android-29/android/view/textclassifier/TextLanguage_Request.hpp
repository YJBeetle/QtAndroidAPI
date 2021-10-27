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
	class TextLanguage_Request : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		TextLanguage_Request(QAndroidJniObject obj);
		// Constructors
		TextLanguage_Request() = default;
		
		// Methods
		jint describeContents();
		jstring getCallingPackageName();
		QAndroidJniObject getExtras();
		jstring getText();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view::textclassifier

