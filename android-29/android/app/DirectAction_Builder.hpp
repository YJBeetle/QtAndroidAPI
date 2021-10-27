#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::app
{
	class DirectAction;
}
namespace __jni_impl::android::content
{
	class LocusId;
}
namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::app
{
	class DirectAction_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject setExtras(__jni_impl::android::os::Bundle arg0);
		QAndroidJniObject setLocusId(__jni_impl::android::content::LocusId arg0);
	};
} // namespace __jni_impl::android::app

#include "DirectAction.hpp"
#include "../content/LocusId.hpp"
#include "../os/Bundle.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void DirectAction_Builder::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.DirectAction$Builder",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DirectAction_Builder::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.app.DirectAction$Builder",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject DirectAction_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/app/DirectAction;"
		);
	}
	QAndroidJniObject DirectAction_Builder::setExtras(__jni_impl::android::os::Bundle arg0)
	{
		return __thiz.callObjectMethod(
			"setExtras",
			"(Landroid/os/Bundle;)Landroid/app/DirectAction$Builder;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject DirectAction_Builder::setLocusId(__jni_impl::android::content::LocusId arg0)
	{
		return __thiz.callObjectMethod(
			"setLocusId",
			"(Landroid/content/LocusId;)Landroid/app/DirectAction$Builder;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class DirectAction_Builder : public __jni_impl::android::app::DirectAction_Builder
	{
	public:
		DirectAction_Builder(QAndroidJniObject obj) { __thiz = obj; }
		DirectAction_Builder(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::app

