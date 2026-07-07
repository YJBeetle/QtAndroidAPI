#pragma once

#include "./ImageReader.def.hpp"
#include "./ImageReader_Builder.def.hpp"

namespace android::media
{
	// Fields
	
	// Constructors
	inline ImageReader_Builder::ImageReader_Builder(jint arg0, jint arg1)
		: JObject(
			"android.media.ImageReader$Builder",
			"(II)V",
			arg0,
			arg1
		) {}
	
	// Methods
	inline android::media::ImageReader ImageReader_Builder::build() const
	{
		return callObjectMethod(
			"build",
			"()Landroid/media/ImageReader;"
		);
	}
	inline android::media::ImageReader_Builder ImageReader_Builder::setDefaultDataSpace(jint arg0) const
	{
		return callObjectMethod(
			"setDefaultDataSpace",
			"(I)Landroid/media/ImageReader$Builder;",
			arg0
		);
	}
	inline android::media::ImageReader_Builder ImageReader_Builder::setDefaultHardwareBufferFormat(jint arg0) const
	{
		return callObjectMethod(
			"setDefaultHardwareBufferFormat",
			"(I)Landroid/media/ImageReader$Builder;",
			arg0
		);
	}
	inline android::media::ImageReader_Builder ImageReader_Builder::setImageFormat(jint arg0) const
	{
		return callObjectMethod(
			"setImageFormat",
			"(I)Landroid/media/ImageReader$Builder;",
			arg0
		);
	}
	inline android::media::ImageReader_Builder ImageReader_Builder::setMaxImages(jint arg0) const
	{
		return callObjectMethod(
			"setMaxImages",
			"(I)Landroid/media/ImageReader$Builder;",
			arg0
		);
	}
	inline android::media::ImageReader_Builder ImageReader_Builder::setUsage(jlong arg0) const
	{
		return callObjectMethod(
			"setUsage",
			"(J)Landroid/media/ImageReader$Builder;",
			arg0
		);
	}
} // namespace android::media

// Base class headers

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::media;
#endif
