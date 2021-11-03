#pragma once

#include "../../../JObject.hpp"

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
	class MidiDevice_MidiConnection : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiDevice_MidiConnection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiDevice_MidiConnection(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		void close() const;
	};
} // namespace android::media::midi

