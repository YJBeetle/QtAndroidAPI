#pragma once

#ifndef ANDROID_RENDERSCRIPT_ALLOCATIONADAPTER
#define ANDROID_RENDERSCRIPT_ALLOCATIONADAPTER

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"
#include "Allocation.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Allocation;
}
namespace __jni_impl::android::renderscript
{
	class Type;
}
namespace __jni_impl::android::renderscript
{
	class Type_CubemapFace;
}

namespace __jni_impl::android::renderscript
{
	class AllocationAdapter : public __jni_impl::android::renderscript::Allocation
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void resize(jint arg0);
		static QAndroidJniObject createTyped(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Type arg2);
		void setX(jint arg0);
		void setY(jint arg0);
		void setZ(jint arg0);
		void setLOD(jint arg0);
		void setFace(__jni_impl::android::renderscript::Type_CubemapFace arg0);
		static QAndroidJniObject create1D(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Allocation arg1);
		static QAndroidJniObject create2D(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Allocation arg1);
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Allocation.hpp"
#include "Type.hpp"
#include "Type_CubemapFace.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void AllocationAdapter::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.AllocationAdapter",
			"(V)V");
	}
	
	// Methods
	void AllocationAdapter::resize(jint arg0)
	{
		__thiz.callMethod<void>(
			"resize",
			"(I)V",
			arg0);
	}
	QAndroidJniObject AllocationAdapter::createTyped(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Type arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.AllocationAdapter",
			"createTyped",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Allocation;Landroid/renderscript/Type;)Landroid/renderscript/AllocationAdapter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object());
	}
	void AllocationAdapter::setX(jint arg0)
	{
		__thiz.callMethod<void>(
			"setX",
			"(I)V",
			arg0);
	}
	void AllocationAdapter::setY(jint arg0)
	{
		__thiz.callMethod<void>(
			"setY",
			"(I)V",
			arg0);
	}
	void AllocationAdapter::setZ(jint arg0)
	{
		__thiz.callMethod<void>(
			"setZ",
			"(I)V",
			arg0);
	}
	void AllocationAdapter::setLOD(jint arg0)
	{
		__thiz.callMethod<void>(
			"setLOD",
			"(I)V",
			arg0);
	}
	void AllocationAdapter::setFace(__jni_impl::android::renderscript::Type_CubemapFace arg0)
	{
		__thiz.callMethod<void>(
			"setFace",
			"(Landroid/renderscript/Type$CubemapFace;)V",
			arg0.__jniObject().object());
	}
	QAndroidJniObject AllocationAdapter::create1D(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.AllocationAdapter",
			"create1D",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Allocation;)Landroid/renderscript/AllocationAdapter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
	QAndroidJniObject AllocationAdapter::create2D(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.AllocationAdapter",
			"create2D",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Allocation;)Landroid/renderscript/AllocationAdapter;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object());
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class AllocationAdapter : public __jni_impl::android::renderscript::AllocationAdapter
	{
	public:
		AllocationAdapter(QAndroidJniObject obj) { __thiz = obj; }
		AllocationAdapter()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_ALLOCATIONADAPTER

