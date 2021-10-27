#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Outline;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::view
{
	class ViewOutlineProvider : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject BACKGROUND();
		static QAndroidJniObject BOUNDS();
		static QAndroidJniObject PADDED_BOUNDS();
		
		// Constructors
		void __constructor();
		
		// Methods
		void getOutline(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Outline arg1);
	};
} // namespace __jni_impl::android::view

#include "../graphics/Outline.hpp"
#include "./View.hpp"

namespace __jni_impl::android::view
{
	// Fields
	QAndroidJniObject ViewOutlineProvider::BACKGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewOutlineProvider",
			"BACKGROUND",
			"Landroid/view/ViewOutlineProvider;"
		);
	}
	QAndroidJniObject ViewOutlineProvider::BOUNDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewOutlineProvider",
			"BOUNDS",
			"Landroid/view/ViewOutlineProvider;"
		);
	}
	QAndroidJniObject ViewOutlineProvider::PADDED_BOUNDS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.view.ViewOutlineProvider",
			"PADDED_BOUNDS",
			"Landroid/view/ViewOutlineProvider;"
		);
	}
	
	// Constructors
	void ViewOutlineProvider::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.view.ViewOutlineProvider",
			"()V"
		);
	}
	
	// Methods
	void ViewOutlineProvider::getOutline(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Outline arg1)
	{
		__thiz.callMethod<void>(
			"getOutline",
			"(Landroid/view/View;Landroid/graphics/Outline;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::view

namespace android::view
{
	class ViewOutlineProvider : public __jni_impl::android::view::ViewOutlineProvider
	{
	public:
		ViewOutlineProvider(QAndroidJniObject obj) { __thiz = obj; }
		ViewOutlineProvider()
		{
			__constructor();
		}
	};
} // namespace android::view

