#pragma once

#ifndef ANDROID_WIDGET_ADAPTERVIEW_ADAPTERCONTEXTMENUINFO
#define ANDROID_WIDGET_ADAPTERVIEW_ADAPTERCONTEXTMENUINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::widget
{
	class AdapterView_AdapterContextMenuInfo : public __JniBaseClass
	{
	public:
		// Fields
		jlong id();
		jint position();
		QAndroidJniObject targetView();
		
		// Constructors
		void __constructor(__jni_impl::android::view::View arg0, jint arg1, jlong arg2);
		
		// Methods
	};
} // namespace __jni_impl::android::widget

#include "../view/View.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	jlong AdapterView_AdapterContextMenuInfo::id()
	{
		return __thiz.getField<jlong>(
			"id"
		);
	}
	jint AdapterView_AdapterContextMenuInfo::position()
	{
		return __thiz.getField<jint>(
			"position"
		);
	}
	QAndroidJniObject AdapterView_AdapterContextMenuInfo::targetView()
	{
		return __thiz.getObjectField(
			"targetView",
			"Landroid/view/View;"
		);
	}
	
	// Constructors
	void AdapterView_AdapterContextMenuInfo::__constructor(__jni_impl::android::view::View arg0, jint arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.widget.AdapterView$AdapterContextMenuInfo",
			"(Landroid/view/View;IJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2);
	}
	
	// Methods
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class AdapterView_AdapterContextMenuInfo : public __jni_impl::android::widget::AdapterView_AdapterContextMenuInfo
	{
	public:
		AdapterView_AdapterContextMenuInfo(QAndroidJniObject obj) { __thiz = obj; }
		AdapterView_AdapterContextMenuInfo(__jni_impl::android::view::View arg0, jint arg1, jlong arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_ADAPTERVIEW_ADAPTERCONTEXTMENUINFO

