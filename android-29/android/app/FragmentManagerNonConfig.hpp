#pragma once

#ifndef ANDROID_APP_FRAGMENTMANAGERNONCONFIG
#define ANDROID_APP_FRAGMENTMANAGERNONCONFIG

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::app
{
	class FragmentManagerNonConfig : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::app


namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void FragmentManagerNonConfig::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentManagerNonConfig",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::app

namespace android::app
{
	class FragmentManagerNonConfig : public __jni_impl::android::app::FragmentManagerNonConfig
	{
	public:
		FragmentManagerNonConfig(QAndroidJniObject obj) { __thiz = obj; }
		FragmentManagerNonConfig()
		{
			__constructor();
		}
	};
} // namespace android::app

#endif // ANDROID_APP_FRAGMENTMANAGERNONCONFIG

