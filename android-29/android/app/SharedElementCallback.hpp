#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Matrix;
}
namespace __jni_impl::android::graphics
{
	class RectF;
}
namespace __jni_impl::android::view
{
	class View;
}

namespace __jni_impl::android::app
{
	class SharedElementCallback : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject onCaptureSharedElementSnapshot(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Matrix arg1, __jni_impl::android::graphics::RectF arg2);
		QAndroidJniObject onCreateSnapshotView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1);
		void onMapSharedElements(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void onRejectSharedElements(__jni_impl::__JniBaseClass arg0);
		void onSharedElementEnd(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void onSharedElementStart(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
		void onSharedElementsArrived(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2);
	};
} // namespace __jni_impl::android::app

#include "../content/Context.hpp"
#include "../graphics/Matrix.hpp"
#include "../graphics/RectF.hpp"
#include "../view/View.hpp"

namespace __jni_impl::android::app
{
	// Fields
	
	// Constructors
	void SharedElementCallback::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.app.SharedElementCallback",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SharedElementCallback::onCaptureSharedElementSnapshot(__jni_impl::android::view::View arg0, __jni_impl::android::graphics::Matrix arg1, __jni_impl::android::graphics::RectF arg2)
	{
		return __thiz.callObjectMethod(
			"onCaptureSharedElementSnapshot",
			"(Landroid/view/View;Landroid/graphics/Matrix;Landroid/graphics/RectF;)Landroid/os/Parcelable;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject SharedElementCallback::onCreateSnapshotView(__jni_impl::android::content::Context arg0, __jni_impl::__JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"onCreateSnapshotView",
			"(Landroid/content/Context;Landroid/os/Parcelable;)Landroid/view/View;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SharedElementCallback::onMapSharedElements(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"onMapSharedElements",
			"(Ljava/util/List;Ljava/util/Map;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void SharedElementCallback::onRejectSharedElements(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"onRejectSharedElements",
			"(Ljava/util/List;)V",
			arg0.__jniObject().object()
		);
	}
	void SharedElementCallback::onSharedElementEnd(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onSharedElementEnd",
			"(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void SharedElementCallback::onSharedElementStart(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onSharedElementStart",
			"(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void SharedElementCallback::onSharedElementsArrived(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1, __jni_impl::__JniBaseClass arg2)
	{
		__thiz.callMethod<void>(
			"onSharedElementsArrived",
			"(Ljava/util/List;Ljava/util/List;Landroid/app/SharedElementCallback$OnSharedElementsReadyListener;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::app

namespace android::app
{
	class SharedElementCallback : public __jni_impl::android::app::SharedElementCallback
	{
	public:
		SharedElementCallback(QAndroidJniObject obj) { __thiz = obj; }
		SharedElementCallback()
		{
			__constructor();
		}
	};
} // namespace android::app

