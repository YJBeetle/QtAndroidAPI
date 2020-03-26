#pragma once

#ifndef ANDROID_TEXT_AUTOTEXT
#define ANDROID_TEXT_AUTOTEXT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content::res
{
	class Resources;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::text
{
	class AutoText : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static jstring get(jstring arg0, jint arg1, jint arg2, __jni_impl::android::view::View arg3);
		static jint getSize(__jni_impl::android::view::View arg0);
	};
} // namespace __jni_impl::android::text

#include "../content/res/Resources.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::text
{
	// Fields
	
	// Constructors
	void AutoText::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.text.AutoText",
			"(V)V");
	}
	
	// Methods
	jstring AutoText::get(jstring arg0, jint arg1, jint arg2, __jni_impl::android::view::View arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.AutoText",
			"get",
			"(Ljava/lang/CharSequence;IILandroid/view/View;)Ljava/lang/String;",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		).object<jstring>();
	}
	jint AutoText::getSize(__jni_impl::android::view::View arg0)
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.text.AutoText",
			"getSize",
			"(Landroid/view/View;)I",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::text

namespace android::text
{
	class AutoText : public __jni_impl::android::text::AutoText
	{
	public:
		AutoText(QAndroidJniObject obj) { __thiz = obj; }
		AutoText()
		{
			__constructor();
		}
	};
} // namespace android::text

#endif // ANDROID_TEXT_AUTOTEXT

