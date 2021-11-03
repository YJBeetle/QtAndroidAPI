#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
namespace android::print
{
	class PrinterCapabilitiesInfo;
}
namespace android::print
{
	class PrinterId;
}
class JObject;
class JString;

namespace android::print
{
	class PrinterInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint STATUS_BUSY();
		static jint STATUS_IDLE();
		static jint STATUS_UNAVAILABLE();
		
		// QJniObject forward
		template<typename ...Ts> explicit PrinterInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PrinterInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(JObject arg0);
		android::print::PrinterCapabilitiesInfo getCapabilities();
		JString getDescription();
		android::print::PrinterId getId();
		JString getName();
		jint getStatus();
		jint hashCode();
		JString toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::print

