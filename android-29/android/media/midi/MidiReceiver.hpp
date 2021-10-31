#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::midi
{
	class MidiReceiver : public __JniBaseClass
	{
	public:
		// Fields
		
		MidiReceiver(QAndroidJniObject obj);
		// Constructors
		MidiReceiver();
		MidiReceiver(jint arg0);
		
		// Methods
		void flush();
		jint getMaxMessageSize();
		void onFlush();
		void onSend(jbyteArray arg0, jint arg1, jint arg2, jlong arg3);
		void send(jbyteArray arg0, jint arg1, jint arg2);
		void send(jbyteArray arg0, jint arg1, jint arg2, jlong arg3);
	};
} // namespace android::media::midi

