#pragma once

#include "../../../JObject.hpp"

class JString;

namespace android::media::midi
{
	class MidiDeviceInfo_PortInfo : public JObject
	{
	public:
		// Fields
		static jint TYPE_INPUT();
		static jint TYPE_OUTPUT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MidiDeviceInfo_PortInfo(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MidiDeviceInfo_PortInfo(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		JString getName() const;
		jint getPortNumber() const;
		jint getType() const;
	};
} // namespace android::media::midi

