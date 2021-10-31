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
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrinterCapabilitiesInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PrinterCapabilitiesInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getColorModes();
		android::print::PrintAttributes getDefaults();
		jint getDuplexModes();
		__JniBaseClass getMediaSizes();
		android::print::PrintAttributes_Margins getMinMargins();
		__JniBaseClass getResolutions();
		jint hashCode();
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print
