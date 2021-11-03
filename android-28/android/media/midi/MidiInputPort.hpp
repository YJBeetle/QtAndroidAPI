#pragma once

#include "../../../JObject.hpp"
#include "./MidiReceiver.hpp"

namespace java::io
{
	class FileDescriptor;
}

namespace android::media::midi
{
	class MidiInputPort : public android::media::midi::MidiReceiver
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MidiInputPort(const char *className, const char *sig, Ts...agv) : android::media::midi::MidiReceiver(className, sig, std::forward<Ts>(agv)...) {}
		MidiInputPort(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
		jint getPortNumber();
		void onFlush();
		void onSend(jbyteArray arg0, jint arg1, jint arg2, jlong arg3);
	};
} // namespace android::media::midi

