#pragma once

#include "./ImageWriter.def.hpp"
#include "../view/Surface.def.hpp"
#include "./ImageWriter_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline ImageWriter_Builder::ImageWriter_Builder(android::view::Surface arg0)
		: JObject(
			"android.media.ImageWriter$Builder",
			"(Landroid/view/Surface;)V",
			arg0.object()
		) {}
	
	// Methods
	inline android::media::ImageWriter ImageWriter_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/ImageWriter;"
		);
	}
	inline android::media::ImageWriter_Builder ImageWriter_Builder::setDataSpace(jint arg0) const
	{
		return callObjectMethod(
			"setDataSpace",
			"(I)Landroid/media/ImageWriter$Builder;",
			arg0
		);
	}
	inline android::media::ImageWriter_Builder ImageWriter_Builder::setHardwareBufferFormat(jint arg0) const
	{
		return callObjectMethod(
			"setHardwareBufferFormat",
			"(I)Landroid/media/ImageWriter$Builder;",
			arg0
		);
	}
	inline android::media::ImageWriter_Builder ImageWriter_Builder::setImageFormat(jint arg0) const
	{
		return callObjectMethod(
			"setImageFormat",
			"(I)Landroid/media/ImageWriter$Builder;",
			arg0
		);
	}
	inline android::media::ImageWriter_Builder ImageWriter_Builder::setMaxImages(jint arg0) const
	{
		return callObjectMethod(
			"setMaxImages",
			"(I)Landroid/media/ImageWriter$Builder;",
			arg0
		);
	}
	inline android::media::ImageWriter_Builder ImageWriter_Builder::setUsage(jlong arg0) const
	{
		return callObjectMethod(
			"setUsage",
			"(J)Landroid/media/ImageWriter$Builder;",
			arg0
		);
	}
	inline android::media::ImageWriter_Builder ImageWriter_Builder::setWidthAndHeight(jint arg0, jint arg1) const
	{
		return callObjectMethod(
			"setWidthAndHeight",
			"(II)Landroid/media/ImageWriter$Builder;",
			arg0,
			arg1
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
