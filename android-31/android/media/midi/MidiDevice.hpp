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
class JString;

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
		void close() const;
		android::media::midi::MidiDevice_MidiConnection connectPorts(android::media::midi::MidiInputPort arg0, jint arg1) const;
		android::media::midi::MidiDeviceInfo getInfo() const;
		android::media::midi::MidiInputPort openInputPort(jint arg0) const;
		android::media::midi::MidiOutputPort openOutputPort(jint arg0) const;
		JString toString() const;
	};
} // namespace android::media::midi

