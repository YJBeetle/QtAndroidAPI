#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::view
{
	class Display_HdrCapabilities : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint HDR_TYPE_DOLBY_VISION();
		static jint HDR_TYPE_HDR10();
		static jint HDR_TYPE_HDR10_PLUS();
		static jint HDR_TYPE_HLG();
		static jfloat INVALID_LUMINANCE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Display_HdrCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Display_HdrCapabilities(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jfloat getDesiredMaxAverageLuminance();
		jfloat getDesiredMaxLuminance();
		jfloat getDesiredMinLuminance();
		JIntArray getSupportedHdrTypes();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::view

