#pragma once

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
		jstring convertResultToString(jobject arg0);
		void filter(jstring arg0);
		void filter(const QString &arg0);
		void filter(jstring arg0, __jni_impl::__JniBaseClass arg1);
		void filter(const QString &arg0, __jni_impl::__JniBaseClass arg1);
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
			"()V"
		);
	}
	
	// Methods
	jstring Filter::convertResultToString(jobject arg0)
	{
		return __thiz.callObjectMethod(
			"convertResultToString",
			"(Ljava/lang/Object;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	void Filter::filter(jstring arg0)
	{
		__thiz.callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;)V",
			arg0
		);
	}
	void Filter::filter(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Filter::filter(jstring arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;Landroid/widget/Filter$FilterListener;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Filter::filter(const QString &arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"filter",
			"(Ljava/lang/CharSequence;Landroid/widget/Filter$FilterListener;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
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

