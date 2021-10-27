#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::graphics
{
	class ImageDecoder_Source : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	
	// Constructors
	void ImageDecoder_Source::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.ImageDecoder$Source",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class ImageDecoder_Source : public __jni_impl::android::graphics::ImageDecoder_Source
	{
	public:
		ImageDecoder_Source(QAndroidJniObject obj) { __thiz = obj; }
		ImageDecoder_Source()
		{
			__constructor();
		}
	};
} // namespace android::graphics

