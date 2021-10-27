#pragma once

#include "../../../__JniBaseClass.hpp"
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
		
		MidiInputPort(QAndroidJniObject obj);
		// Constructors
		MidiInputPort() = default;
		
		// Methods
		void close();
		jint getPortNumber();
		void onFlush();
		void onSend(jbyteArray arg0, jint arg1, jint arg2, jlong arg3);
	};
} // namespace android::media::midi

