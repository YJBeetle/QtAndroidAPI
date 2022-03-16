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
		
		// QJniObject forward
		template<typename ...Ts> explicit PrinterCapabilitiesInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrinterCapabilitiesInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getColorModes() const;
		android::print::PrintAttributes getDefaults() const;
		jint getDuplexModes() const;
		JObject getMediaSizes() const;
		android::print::PrintAttributes_Margins getMinMargins() const;
		JObject getResolutions() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::print

