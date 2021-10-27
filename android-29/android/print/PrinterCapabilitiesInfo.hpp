#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::print
{
	class PrintAttributes;
}
namespace android::print
{
	class PrintAttributes_Margins;
}

namespace android::print
{
	class PrinterCapabilitiesInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		PrinterCapabilitiesInfo(QAndroidJniObject obj);
		// Constructors
		PrinterCapabilitiesInfo() = default;
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getColorModes();
		QAndroidJniObject getDefaults();
		jint getDuplexModes();
		QAndroidJniObject getMediaSizes();
		QAndroidJniObject getMinMargins();
		QAndroidJniObject getResolutions();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

