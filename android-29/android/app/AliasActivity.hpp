#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "Activity.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::app
{
	class AliasActivity : public __jni_impl::android::app::Activity
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::app

#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void AliasActivity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.AliasActivity",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::app

namespace android::app
{
	class AliasActivity : public __jni_impl::android::app::AliasActivity
	{
	public:
		AliasActivity(QAndroidJniObject obj) { __thiz = obj; }
		AliasActivity()
		{
			__constructor();
		}
	};
} // namespace android::app

