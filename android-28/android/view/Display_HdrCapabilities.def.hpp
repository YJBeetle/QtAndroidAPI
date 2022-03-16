#pragma once

#include "../../JObject.hpp"

class JIntArray;
namespace android::os
{
	class Parcel;
}
class JObject;

namespace android::view
{
	class Display_HdrCapabilities : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint HDR_TYPE_DOLBY_VISION();
		static jint HDR_TYPE_HDR10();
		static jint HDR_TYPE_HLG();
		static jfloat INVALID_LUMINANCE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Display_HdrCapabilities(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Display_HdrCapabilities(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jfloat getDesiredMaxAverageLuminance() const;
		jfloat getDesiredMaxLuminance() const;
		jfloat getDesiredMinLuminance() const;
		JIntArray getSupportedHdrTypes() const;
		jint hashCode() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::view

