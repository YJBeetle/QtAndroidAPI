#pragma once

#include "../../JObject.hpp"

namespace android::graphics
{
	class Bitmap;
}

namespace android::media
{
	class ThumbnailUtils : public JObject
	{
	public:
		// Fields
		static jint OPTIONS_RECYCLE_INPUT();
		
		// QJniObject forward
		template<typename ...Ts> explicit ThumbnailUtils(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ThumbnailUtils(QJniObject obj);
		
		// Constructors
		ThumbnailUtils();
		
		// Methods
		static android::graphics::Bitmap createVideoThumbnail(jstring arg0, jint arg1);
		static android::graphics::Bitmap extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2);
		static android::graphics::Bitmap extractThumbnail(android::graphics::Bitmap arg0, jint arg1, jint arg2, jint arg3);
	};
} // namespace android::media

