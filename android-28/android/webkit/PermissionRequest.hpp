#pragma once

#include "../../JObject.hpp"

namespace android::net
{
	class Uri;
}

namespace android::webkit
{
	class PermissionRequest : public JObject
	{
	public:
		// Fields
		static jstring RESOURCE_AUDIO_CAPTURE();
		static jstring RESOURCE_MIDI_SYSEX();
		static jstring RESOURCE_PROTECTED_MEDIA_ID();
		static jstring RESOURCE_VIDEO_CAPTURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PermissionRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PermissionRequest(QAndroidJniObject obj);
		
		// Constructors
		PermissionRequest();
		
		// Methods
		void deny();
		android::net::Uri getOrigin();
		jarray getResources();
		void grant(jarray arg0);
	};
} // namespace android::webkit

