#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../app/Service.hpp"

namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::widget
{
	class RemoteViewsService : public __jni_impl::android::app::Service
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onBind(__jni_impl::android::content::Intent arg0);
		QAndroidJniObject onGetViewFactory(__jni_impl::android::content::Intent arg0);
	};
} // namespace __jni_impl::android::widget

#include "../content/Intent.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void RemoteViewsService::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.RemoteViewsService",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject RemoteViewsService::onBind(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onBind",
			"(Landroid/content/Intent;)Landroid/os/IBinder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RemoteViewsService::onGetViewFactory(__jni_impl::android::content::Intent arg0)
	{
		return __thiz.callObjectMethod(
			"onGetViewFactory",
			"(Landroid/content/Intent;)Landroid/widget/RemoteViewsService$RemoteViewsFactory;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class RemoteViewsService : public __jni_impl::android::widget::RemoteViewsService
	{
	public:
		RemoteViewsService(QAndroidJniObject obj) { __thiz = obj; }
		RemoteViewsService()
		{
			__constructor();
		}
	};
} // namespace android::widget

