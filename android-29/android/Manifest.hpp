#pragma once

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class Manifest : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
{
	// Fields
	
	// Constructors
	void Manifest::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.Manifest",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class Manifest : public __jni_impl::android::Manifest
	{
	public:
		Manifest(QAndroidJniObject obj) { __thiz = obj; }
		Manifest()
		{
			__constructor();
		}
	};
} // namespace android

