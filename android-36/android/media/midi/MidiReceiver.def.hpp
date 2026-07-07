#pragma once

#include "../../../JObject.hpp"

class JByteArray;

namespace android::media::midi
{
	class MidiReceiver : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MidiReceiver(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiReceiver(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		MidiReceiver();
		MidiReceiver(jint arg0);
		
		// Methods
		void flush() const;
		jint getMaxMessageSize() const;
		void onFlush() const;
		void onSend(JByteArray arg0, jint arg1, jint arg2, jlong arg3) const;
		void send(JByteArray arg0, jint arg1, jint arg2) const;
		void send(JByteArray arg0, jint arg1, jint arg2, jlong arg3) const;
	};
} // namespace android::media::midi

