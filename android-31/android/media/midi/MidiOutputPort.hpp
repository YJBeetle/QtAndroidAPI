#pragma once

#include "./MidiSender.hpp"

namespace android::media::midi
{
	class MidiReceiver;
}

namespace android::media::midi
{
	class MidiOutputPort : public android::media::midi::MidiSender
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiOutputPort(const char *className, const char *sig, Ts...agv) : android::media::midi::MidiSender(className, sig, std::forward<Ts>(agv)...) {}
		MidiOutputPort(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jint getPortNumber();
		void onConnect(android::media::midi::MidiReceiver arg0);
		void onDisconnect(android::media::midi::MidiReceiver arg0);
	};
} // namespace android::media::midi

