#pragma once

#ifndef ANDROID_WIDGET_FILTER_FILTERRESULTS
#define ANDROID_WIDGET_FILTER_FILTERRESULTS

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::widget
{
	class Filter_FilterResults : public __JniBaseClass
	{
	public:
		// Fields
		jint count();
		jobject values();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::widget


namespace __jni_impl::android::widget
{
	// Fields
	jint Filter_FilterResults::count()
	{
		return __thiz.getField<jint>(
			"count"
		);
	}
	jobject Filter_FilterResults::values()
	{
		return __thiz.getObjectField(
			"values",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// Constructors
	void Filter_FilterResults::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.Filter$FilterResults",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class Filter_FilterResults : public __jni_impl::android::widget::Filter_FilterResults
	{
	public:
		Filter_FilterResults(QAndroidJniObject obj) { __thiz = obj; }
		Filter_FilterResults()
		{
			__constructor();
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_FILTER_FILTERRESULTS

