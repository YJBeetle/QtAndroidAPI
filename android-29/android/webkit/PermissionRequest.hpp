#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::net
{
	class Uri;
}

namespace android::webkit
{
	class PermissionRequest : public __JniBaseClass
	{
	public:
		// Fields
		static jstring RESOURCE_AUDIO_CAPTURE();
		static jstring RESOURCE_MIDI_SYSEX();
		static jstring RESOURCE_PROTECTED_MEDIA_ID();
		static jstring RESOURCE_VIDEO_CAPTURE();
		
		PermissionRequest(QAndroidJniObject obj);
		// Constructors
		PermissionRequest();
		
		// Methods
		void deny();
		QAndroidJniObject getOrigin();
		jarray getResources();
		void grant(jarray arg0);
	};
} // namespace android::webkit

