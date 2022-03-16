#pragma once

#include "../../JObject.hpp"

namespace android::media
{
	class MediaRecorder;
}

namespace android::media
{
	class MediaRecorder_VideoSource : public JObject
	{
	public:
		// Fields
		static jint CAMERA();
		static jint DEFAULT();
		static jint SURFACE();
		
		// QJniObject forward
		template<typename ...Ts> explicit MediaRecorder_VideoSource(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MediaRecorder_VideoSource(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		
		// Methods
	};
} // namespace android::media

