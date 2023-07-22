#pragma once

#include "../../JObject.hpp"

namespace android::os
{
	class Parcel;
}
class JObject;
class JString;

namespace android::os
{
	class VibrationAttributes : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		static jint FLAG_BYPASS_INTERRUPTION_POLICY();
		static jint USAGE_ACCESSIBILITY();
		static jint USAGE_ALARM();
		static jint USAGE_CLASS_ALARM();
		static jint USAGE_CLASS_FEEDBACK();
		static jint USAGE_CLASS_MASK();
		static jint USAGE_CLASS_MEDIA();
		static jint USAGE_CLASS_UNKNOWN();
		static jint USAGE_COMMUNICATION_REQUEST();
		static jint USAGE_HARDWARE_FEEDBACK();
		static jint USAGE_MEDIA();
		static jint USAGE_NOTIFICATION();
		static jint USAGE_PHYSICAL_EMULATION();
		static jint USAGE_RINGTONE();
		static jint USAGE_TOUCH();
		static jint USAGE_UNKNOWN();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit VibrationAttributes(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		VibrationAttributes(QAndroidJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
		static android::os::VibrationAttributes createForUsage(jint arg0);
		jint describeContents() const;
		jboolean equals(JObject arg0) const;
		jint getFlags() const;
		jint getUsage() const;
		jint getUsageClass() const;
		jint hashCode() const;
		jboolean isFlagSet(jint arg0) const;
		JString toString() const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::os

