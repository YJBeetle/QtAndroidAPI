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
		
		// QJniObject forward
		template<typename ...Ts> explicit MidiSender(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MidiSender(QJniObject obj);
		
		// Constructors
		MidiSender();
		
		// Methods
		void connect(android::media::midi::MidiReceiver arg0);
		void disconnect(android::media::midi::MidiReceiver arg0);
		void onConnect(android::media::midi::MidiReceiver arg0);
		void onDisconnect(android::media::midi::MidiReceiver arg0);
	};
} // namespace android::media::midi

