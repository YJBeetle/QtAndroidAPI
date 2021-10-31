#pragma once

#include "../../__JniBaseClass.hpp"

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
	class MediaSync_Callback : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaSync_Callback(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaSync_Callback(QJniObject obj);
		
		// Constructors
		MediaSync_Callback();
		
		// Methods
		void onAudioBufferConsumed(android::media::MediaSync arg0, java::nio::ByteBuffer arg1, jint arg2);
	};
} // namespace android::media

