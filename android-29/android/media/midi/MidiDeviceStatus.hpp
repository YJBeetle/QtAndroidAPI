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
		static QAndroidJniObject CREATOR();
		
		MidiDeviceStatus(QAndroidJniObject obj);
		// Constructors
		MidiDeviceStatus() = default;
		
		// Methods
		jint describeContents();
		QAndroidJniObject getDeviceInfo();
		jint getOutputPortOpenCount(jint arg0);
		jboolean isInputPortOpen(jint arg0);
		jstring toString();
		void writeToParcel(android::os::Parcel arg0, jint arg1);
	};
} // namespace android::media::midi

