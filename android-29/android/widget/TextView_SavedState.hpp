#pragma once

#ifndef ANDROID_WIDGET_TEXTVIEW_SAVEDSTATE
#define ANDROID_WIDGET_TEXTVIEW_SAVEDSTATE

#include "../../__JniBaseClass.hpp"
#include "../view/AbsSavedState.hpp"
#include "../view/View_BaseSavedState.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::widget
{
	class TextView_SavedState : public __jni_impl::android::view::View_BaseSavedState
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::widget

#include "../os/Parcel.hpp"

namespace __jni_impl::android::widget
{
	// Fields
	QAndroidJniObject TextView_SavedState::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.widget.TextView$SavedState",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;");
	}
	
	// Constructors
	void TextView_SavedState::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.widget.TextView$SavedState",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TextView_SavedState::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	void TextView_SavedState::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
} // namespace __jni_impl::android::widget

namespace android::widget
{
	class TextView_SavedState : public __jni_impl::android::widget::TextView_SavedState
	{
	public:
		TextView_SavedState(QAndroidJniObject obj) { __thiz = obj; }
		TextView_SavedState()
		{
			__constructor();
		}
	};
} // namespace android::widget

#endif // ANDROID_WIDGET_TEXTVIEW_SAVEDSTATE

