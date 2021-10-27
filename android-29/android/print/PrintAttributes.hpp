#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::print
{
	class PrintAttributes_Margins;
}
namespace android::print
{
	class PrintAttributes_MediaSize;
}
namespace android::print
{
	class PrintAttributes_Resolution;
}

namespace android::print
{
	class PrintAttributes : public __JniBaseClass
	{
	public:
		// Fields
		static jint COLOR_MODE_COLOR();
		static jint COLOR_MODE_MONOCHROME();
		static QAndroidJniObject CREATOR();
		static jint DUPLEX_MODE_LONG_EDGE();
		static jint DUPLEX_MODE_NONE();
		static jint DUPLEX_MODE_SHORT_EDGE();
		
		PrintAttributes(QAndroidJniObject obj);
		// Constructors
		PrintAttributes() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getColorMode();
		jint getDuplexMode();
		QAndroidJniObject getMediaSize();
		QAndroidJniObject getMinMargins();
		QAndroidJniObject getResolution();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

