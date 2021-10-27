#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MidiSender.hpp"

namespace android::media::midi
{
	class MidiReceiver;
}
namespace java::io
{
	class FileDescriptor;
}

namespace android::media::midi
{
	class MidiOutputPort : public android::media::midi::MidiSender
	{
	public:
		// Fields
		
		MidiOutputPort(QAndroidJniObject obj);
		// Constructors
		MidiOutputPort() = default;
		
		// Methods
		void close();
		jint getPortNumber();
		void onConnect(android::media::midi::MidiReceiver arg0);
		void onDisconnect(android::media::midi::MidiReceiver arg0);
	};
} // namespace android::media::midi

