#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}

namespace __jni_impl::android::app
{
	class StatusBarManager : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void StatusBarManager::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.StatusBarManager",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::app

namespace android::app
{
	class StatusBarManager : public __jni_impl::android::app::StatusBarManager
	{
	public:
		StatusBarManager(QAndroidJniObject obj) { __thiz = obj; }
		StatusBarManager()
		{
			__constructor();
		}
	};
} // namespace android::app

