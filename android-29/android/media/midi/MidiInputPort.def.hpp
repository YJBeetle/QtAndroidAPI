#pragma once

#include "./MidiReceiver.def.hpp"

class JByteArray;
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
		MidiInputPort(QJniObject obj) : android::media::midi::MidiReceiver(obj) {}
		
		// Constructors
		
		// Methods
		void close() const;
		jint getPortNumber() const;
		void onFlush() const;
		void onSend(JByteArray arg0, jint arg1, jint arg2, jlong arg3) const;
	};
} // namespace android::media::midi

