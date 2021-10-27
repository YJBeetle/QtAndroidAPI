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
		
		MidiDeviceInfo_PortInfo(QAndroidJniObject obj);
		// Constructors
		MidiDeviceInfo_PortInfo() = default;
		
		// Methods
		jstring getName();
		jint getPortNumber();
		jint getType();
	};
} // namespace android::media::midi

