#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::media::midi
{
	class MidiDeviceInfo_PortInfo : public __JniBaseClass
	{
	public:
		// Fields
		static jint TYPE_INPUT();
		static jint TYPE_OUTPUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit MidiDeviceInfo_PortInfo(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MidiDeviceInfo_PortInfo(QJniObject obj);
		
		// Constructors
		
		// Methods
		jstring getName();
		jint getPortNumber();
		jint getType();
	};
} // namespace android::media::midi

