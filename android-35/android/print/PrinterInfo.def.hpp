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
		PrinterInfo(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		android::print::PrinterCapabilitiesInfo getCapabilities() const;
		JString getDescription() const;
		android::print::PrinterId getId() const;
		JString getName() const;
		jint getStatus() const;
		jint hashCode() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::print

