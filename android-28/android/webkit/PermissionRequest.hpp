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
		
		// QJniObject forward
		template<typename ...Ts> explicit PermissionRequest(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		PermissionRequest(QJniObject obj);
		
		// Constructors
		PermissionRequest();
		
		// Methods
		void deny() const;
		android::net::Uri getOrigin() const;
		JArray getResources() const;
		void grant(JArray arg0) const;
	};
} // namespace android::webkit

