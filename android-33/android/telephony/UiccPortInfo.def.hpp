#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::telephony
{
	class UiccPortInfo : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static JString ICCID_REDACTED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit UiccPortInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		UiccPortInfo(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		JString getIccId() const;
		jint getLogicalSlotIndex() const;
		jint getPortIndex() const;
		jint hashCode() const;
		jboolean isActive() const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::telephony

