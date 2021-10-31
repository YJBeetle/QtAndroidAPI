#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::view
{
	class Display_HdrCapabilities : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jint HDR_TYPE_DOLBY_VISION();
		static jint HDR_TYPE_HDR10();
		static jint HDR_TYPE_HDR10_PLUS();
		static jint HDR_TYPE_HLG();
		static jfloat INVALID_LUMINANCE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Display_HdrCapabilities(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Display_HdrCapabilities(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jfloat getDesiredMaxAverageLuminance();
		jfloat getDesiredMaxLuminance();
		jfloat getDesiredMinLuminance();
		jintArray getSupportedHdrTypes();
		jint hashCode();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

