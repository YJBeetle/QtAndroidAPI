#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::midi
{
	class MidiDevice_MidiConnection;
}
namespace android::media::midi
{
	class MidiDeviceInfo;
}
namespace android::media::midi
{
	class MidiInputPort;
}
namespace android::media::midi
{
	class MidiOutputPort;
}

namespace android::media::midi
{
	class MidiDevice : public __JniBaseClass
	{
	public:
		// Fields
		
		MidiDevice(QAndroidJniObject obj);
		// Constructors
		MidiDevice() = default;
		
		// Methods
		void close();
		QAndroidJniObject connectPorts(android::media::midi::MidiInputPort arg0, jint arg1);
		QAndroidJniObject getInfo();
		QAndroidJniObject openInputPort(jint arg0);
		QAndroidJniObject openOutputPort(jint arg0);
		jstring toString();
	};
} // namespace android::media::midi

