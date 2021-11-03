#pragma once

#include "../../JObject.hpp"

class JArray;
namespace android::net
{
	class Uri;
}
class JString;

namespace android::webkit
{
	class PermissionRequest : public JObject
	{
	public:
		// Fields
		static JString RESOURCE_AUDIO_CAPTURE();
		static JString RESOURCE_MIDI_SYSEX();
		static JString RESOURCE_PROTECTED_MEDIA_ID();
		static JString RESOURCE_VIDEO_CAPTURE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit PermissionRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PermissionRequest(QAndroidJniObject obj);
		
		// Constructors
		PermissionRequest();
		
		// Methods
		void deny();
		android::net::Uri getOrigin();
		JArray getResources();
		void grant(JArray arg0);
	};
} // namespace android::webkit

