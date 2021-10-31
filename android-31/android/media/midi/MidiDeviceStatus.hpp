#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::midi
{
	class MidiDeviceInfo;
}
namespace android::os
{
	class Parcel;
}

namespace android::media::midi
{
	class MidiDeviceStatus : public __JniBaseClass
	{
	public:
		// Fields
		static __JniBaseClass CREATOR();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiDeviceStatus(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MidiDeviceStatus(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jint describeContents();
		android::media::midi::MidiDeviceInfo getDeviceInfo();
		jint getOutputPortOpenCount(jint arg0);
		jboolean isInputPortOpen(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::midi

