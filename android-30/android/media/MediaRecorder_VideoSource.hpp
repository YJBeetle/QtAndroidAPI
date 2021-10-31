#pragma once

#include "../../__JniBaseClass.hpp"

namespace android::media
{
	class MediaRecorder;
}

namespace android::media
{
	class MediaRecorder_VideoSource : public __JniBaseClass
	{
	public:
		// Fields
		static jint CAMERA();
		static jint DEFAULT();
		static jint SURFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRecorder_VideoSource(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MediaRecorder_VideoSource(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

