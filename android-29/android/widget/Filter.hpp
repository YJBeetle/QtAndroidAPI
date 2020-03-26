#pragma once

#ifndef ANDROID_WIDGET_FILTER
#define ANDROID_WIDGET_FILTER

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::widget
{
	class Filter_FilterResults;
}

namespace __jni_impl::android::widget
{
	class Filter : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void filter(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void filter(jstring arg0);
		jstring convertResultToString(jobject arg0);
	};
} // namespace __jni_impl::android::widget

#include "Filter_FilterResults.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void Filter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.Filter",
			"()V");
	}
	
	// Methods
	void Filter::filter(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;Landroid/widget/Filter$FilterListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Filter::filter(jstring arg0)
	{
		__thiz.callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	jstring Filter::convertResultToString(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"convertResultToString",
			"(Ljava/lang/Object;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Filter : public __jni_impl::android::widget::Filter
	{
	public:
		Filter(QAndroidJniObject obj) { __thiz = obj; }
		Filter()
		{
			__constructor();
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_FILTER

