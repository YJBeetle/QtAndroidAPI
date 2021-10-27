#pragma once

#include "../../../__JniBaseClass.hpp"

namespace android::media::midi
{
	class MidiDevice;
}
namespace android::media::midi
{
	class MidiInputPort;
}

namespace android::media::midi
{
	class MidiDevice_MidiConnection : public __JniBaseClass
	{
	public:
		// Fields
		
		MidiDevice_MidiConnection(QAndroidJniObject obj);
		// Constructors
		MidiDevice_MidiConnection() = default;
		
		// Methods
		void close();
	};
} // namespace android::media::midi

