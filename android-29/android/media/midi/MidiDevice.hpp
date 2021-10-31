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
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiDevice(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MidiDevice(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		QAndroidJniObject connectPorts(android::media::midi::MidiInputPort arg0, jint arg1);
		QAndroidJniObject getInfo();
		QAndroidJniObject openInputPort(jint arg0);
		QAndroidJniObject openOutputPort(jint arg0);
		jstring toString();
	};
} // namespace android::media::midi

