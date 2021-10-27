#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::app
{
	class FragmentContainer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onFindViewById(jint arg0);
		jboolean onHasView();
	};
} // namespace __jni_impl::android::app

#include "../view/View.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void FragmentContainer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.FragmentContainer",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject FragmentContainer::onFindViewById(jint arg0)
	{
		return __thiz.callObjectMethod(
			"onFindViewById",
			"(I)Landroid/view/View;",
			arg0
		);
	}
	jboolean FragmentContainer::onHasView()
	{
		return __thiz.callMethod<jboolean>(
			"onHasView",
			"()Z"
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class FragmentContainer : public __jni_impl::android::app::FragmentContainer
	{
	public:
		FragmentContainer(QAndroidJniObject obj) { __thiz = obj; }
		FragmentContainer()
		{
			__constructor();
		}
	};
} // namespace android::app

