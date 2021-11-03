#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaSync;
}
namespace java::nio
{
	class ByteBuffer;
}

namespace android::media
{
	class MediaSync_Callback : public JObject
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MediaSync_Callback(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaSync_Callback(QAndroidJniObject obj);
		
		// Constructors
		MediaSync_Callback();
		
		// Methods
		void onAudioBufferConsumed(android::media::MediaSync arg0, java::nio::ByteBuffer arg1, jint arg2) const;
	};
} // namespace android::media

