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
		
		// QJniObject forward
		template<typename ...Ts> explicit PermissionRequest(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		PermissionRequest(QJniObject obj);
		
		// Constructors
		PermissionRequest();
		
		// Methods
		void deny();
		android::net::Uri getOrigin();
		jarray getResources();
		void grant(jarray arg0);
	};
} // namespace android::webkit

