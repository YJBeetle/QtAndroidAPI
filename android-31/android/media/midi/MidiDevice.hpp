#pragma once

#include "../../../JObject.hpp"

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
	class MidiDevice : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiDevice(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiDevice(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		android::media::midi::MidiDevice_MidiConnection connectPorts(android::media::midi::MidiInputPort arg0, jint arg1);
		android::media::midi::MidiDeviceInfo getInfo();
		android::media::midi::MidiInputPort openInputPort(jint arg0);
		android::media::midi::MidiOutputPort openOutputPort(jint arg0);
		jstring toString();
	};
} // namespace android::media::midi

