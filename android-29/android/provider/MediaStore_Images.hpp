#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::provider
{
	class MediaStore_Images : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::provider


namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void MediaStore_Images::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.MediaStore$Images",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class MediaStore_Images : public __jni_impl::android::provider::MediaStore_Images
	{
	public:
		MediaStore_Images(QAndroidJniObject obj) { __thiz = obj; }
		MediaStore_Images()
		{
			__constructor();
		}
	};
} // namespace android::provider

