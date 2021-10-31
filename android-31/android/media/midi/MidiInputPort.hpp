#pragma once

#include "../../../__JniBaseClass.hpp"
#include "./MidiReceiver.hpp"


namespace android::media::midi
{
	class MidiInputPort : public android::media::midi::MidiReceiver
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiInputPort(const char *className, const char *sig, Ts...agv) : android::media::midi::MidiReceiver(className, sig, std::forward<Ts>(agv)...) {}
		MidiInputPort(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jint getPortNumber();
		void onFlush();
		void onSend(jbyteArray arg0, jint arg1, jint arg2, jlong arg3);
	};
} // namespace android::media::midi

