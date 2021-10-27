#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::drm
{
	class DrmStore : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::drm


namespace __jni_impl::android::drm
{
	// Fields
	
	// Constructors
	void DrmStore::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmStore",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmStore : public __jni_impl::android::drm::DrmStore
	{
	public:
		DrmStore(QAndroidJniObject obj) { __thiz = obj; }
		DrmStore()
		{
			__constructor();
		}
	};
} // namespace android::drm

