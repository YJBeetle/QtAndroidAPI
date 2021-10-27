#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class ContentProvider;
}

namespace __jni_impl::android::content
{
	class ContentProvider_CallingIdentity : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::content

#include "ContentProvider.hpp"

namespace __jni_impl::android::content
{
	// Fields
	
	// Constructors
	void ContentProvider_CallingIdentity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.ContentProvider$CallingIdentity",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::content

namespace android::content
{
	class ContentProvider_CallingIdentity : public __jni_impl::android::content::ContentProvider_CallingIdentity
	{
	public:
		ContentProvider_CallingIdentity(QAndroidJniObject obj) { __thiz = obj; }
		ContentProvider_CallingIdentity()
		{
			__constructor();
		}
	};
} // namespace android::content

