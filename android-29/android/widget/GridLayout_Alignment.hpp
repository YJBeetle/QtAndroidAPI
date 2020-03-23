#pragma once

#ifndef ANDROID_WIDGET_GRIDLAYOUT_ALIGNMENT
#define ANDROID_WIDGET_GRIDLAYOUT_ALIGNMENT

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::widget
{
	class GridLayout_Alignment : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::widget


namespace __jni_impl::android::widget
{
	// Fields
	
	// Constructors
	void GridLayout_Alignment::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.GridLayout$Alignment",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class GridLayout_Alignment : public __jni_impl::android::widget::GridLayout_Alignment
	{
	public:
		GridLayout_Alignment(QAndroidJniObject obj) { __thiz = obj; }
		GridLayout_Alignment()
		{
			__constructor();
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_GRIDLAYOUT_ALIGNMENT

