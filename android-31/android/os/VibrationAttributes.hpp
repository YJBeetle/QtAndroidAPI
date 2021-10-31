#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::os
{
	class Parcel;
}

namespace android::os
{
	class VibrationAttributes : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		static jint FLAG_BYPASS_INTERRUPTION_POLICY();
		static jint USAGE_ALARM();
		static jint USAGE_CLASS_ALARM();
		static jint USAGE_CLASS_FEEDBACK();
		static jint USAGE_CLASS_MASK();
		static jint USAGE_CLASS_UNKNOWN();
		static jint USAGE_COMMUNICATION_REQUEST();
		static jint USAGE_HARDWARE_FEEDBACK();
		static jint USAGE_NOTIFICATION();
		static jint USAGE_PHYSICAL_EMULATION();
		static jint USAGE_RINGTONE();
		static jint USAGE_TOUCH();
		static jint USAGE_UNKNOWN();
		
		// QJniObject forward
		template<typename ...Ts> explicit VibrationAttributes(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		VibrationAttributes(QJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jint getFlags();
		jint getUsage();
		jint getUsageClass();
		jint hashCode();
		jboolean isFlagSet(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::os

