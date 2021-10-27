#pragma once

#include "../../__JniBaseClass.hpp"
#include "../content/Context.hpp"
#include "../content/ContextWrapper.hpp"
#include "../view/ContextThemeWrapper.hpp"
#include "Activity.hpp"
#include "ListActivity.hpp"

namespace __jni_impl::android::app
{
	class LauncherActivity_ListItem;
}
namespace __jni_impl::android::content
{
	class Intent;
}
namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::view
{
	class View;
}
namespace __jni_impl::android::widget
{
	class ListView;
}

namespace __jni_impl::android::app
{
	class LauncherActivity : public __jni_impl::android::app::ListActivity
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject makeListItems();
		void setTitle(jint arg0);
		void setTitle(jstring arg0);
		void setTitle(const QString &arg0);
	};
} // namespace __jni_impl::android::app

#include "LauncherActivity_ListItem.hpp"
#include "../content/Intent.hpp"
#include "../os/Bundle.hpp"
#include "../view/View.hpp"
#include "../widget/ListView.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void LauncherActivity::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.LauncherActivity",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject LauncherActivity::makeListItems()
	{
		return __thiz.callObjectMethod(
			"makeListItems",
			"()Ljava/util/List;"
		);
	}
	void LauncherActivity::setTitle(jint arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(I)V",
			arg0
		);
	}
	void LauncherActivity::setTitle(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void LauncherActivity::setTitle(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTitle",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class LauncherActivity : public __jni_impl::android::app::LauncherActivity
	{
	public:
		LauncherActivity(QAndroidJniObject obj) { __thiz = obj; }
		LauncherActivity()
		{
			__constructor();
		}
	};
} // namespace android::app

