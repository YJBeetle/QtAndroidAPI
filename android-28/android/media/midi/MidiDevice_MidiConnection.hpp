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
		
		// QJniObject forward
		template<typename ...Ts> explicit MidiDevice_MidiConnection(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiDevice_MidiConnection(QJniObject obj);
		
		// Constructors
		
		// Methods
		void close();
	};
} // namespace android::media::midi

