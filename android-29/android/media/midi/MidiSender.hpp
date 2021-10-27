#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::midi
{
	class MidiReceiver;
}

namespace android::media::midi
{
	class MidiSender : public __JniBaseClass
	{
	public:
		// Fields
		
		MidiSender(QAndroidJniObject obj);
		// Constructors
		MidiSender();
		
		// Methods
		void connect(android::media::midi::MidiReceiver arg0);
		void disconnect(android::media::midi::MidiReceiver arg0);
		void onConnect(android::media::midi::MidiReceiver arg0);
		void onDisconnect(android::media::midi::MidiReceiver arg0);
	};
} // namespace android::media::midi

