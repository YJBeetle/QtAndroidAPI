#pragma once

#include "../../JObject.hpp"

namespace android::content
{
	class Context;
}
namespace android::media
{
	class MediaController2_ControllerCallback;
}
namespace android::media
{
	class Session2Command;
}
namespace android::media
{
	class Session2Token;
}
namespace android::os
{
	class Bundle;
}
class JObject;

namespace android::media
{
	class MediaController2 : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaController2(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaController2(QJniObject obj);
		
		// Constructors
		
		// Methods
		void cancelSessionCommand(JObject arg0) const;
		void close() const;
		android::media::Session2Token getConnectedToken() const;
		jboolean isPlaybackActive() const;
		JObject sendSessionCommand(android::media::Session2Command arg0, android::os::Bundle arg1) const;
	};
} // namespace android::media

