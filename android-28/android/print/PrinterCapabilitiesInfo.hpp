#pragma once

#include "../../JObject.hpp"

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
class JObject;
class JString;

namespace android::print
{
	class PrinterCapabilitiesInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PrinterCapabilitiesInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrinterCapabilitiesInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		jint getColorModes();
		android::print::PrintAttributes getDefaults();
		jint getDuplexModes();
		JObject getMediaSizes();
		android::print::PrintAttributes_Margins getMinMargins();
		JObject getResolutions();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

