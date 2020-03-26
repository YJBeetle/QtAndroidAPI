#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX
#define ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"
#include "Script.hpp"
#include "ScriptIntrinsic.hpp"

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
	class Script_LaunchOptions;
}
namespace __jni_impl::android::renderscript
{
	class Element;
}
namespace __jni_impl::android::renderscript
{
	class Script_KernelID;
}
namespace __jni_impl::android::renderscript
{
	class Float4;
}
namespace __jni_impl::android::renderscript
{
	class Matrix4f;
}
namespace __jni_impl::android::renderscript
{
	class Matrix3f;
}

namespace __jni_impl::android::renderscript
{
	class ScriptIntrinsicColorMatrix : public __jni_impl::android::renderscript::ScriptIntrinsic
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1);
		void forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2);
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0);
		static QAndroidJniObject create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1);
		QAndroidJniObject getKernelID();
		void setAdd(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		void setAdd(__jni_impl::android::renderscript::Float4 arg0);
		void setGreyscale();
		void setYUVtoRGB();
		void setColorMatrix(__jni_impl::android::renderscript::Matrix4f arg0);
		void setColorMatrix(__jni_impl::android::renderscript::Matrix3f arg0);
		void setRGBtoYUV();
	};
} // namespace __jni_impl::android::renderscript

#include "RenderScript.hpp"
#include "Allocation.hpp"
#include "Script_LaunchOptions.hpp"
#include "Element.hpp"
#include "Script_KernelID.hpp"
#include "Float4.hpp"
#include "Matrix4f.hpp"
#include "Matrix3f.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void ScriptIntrinsicColorMatrix::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.ScriptIntrinsicColorMatrix",
			"(V)V");
	}
	
	// Methods
	void ScriptIntrinsicColorMatrix::forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void ScriptIntrinsicColorMatrix::forEach(__jni_impl::android::renderscript::Allocation arg0, __jni_impl::android::renderscript::Allocation arg1, __jni_impl::android::renderscript::Script_LaunchOptions arg2)
	{
		__thiz.callMethod<void>(
			"forEach",
			"(Landroid/renderscript/Allocation;Landroid/renderscript/Allocation;Landroid/renderscript/Script$LaunchOptions;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicColorMatrix::create(__jni_impl::android::renderscript::RenderScript arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicColorMatrix",
			"create",
			"(Landroid/renderscript/RenderScript;)Landroid/renderscript/ScriptIntrinsicColorMatrix;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicColorMatrix::create(__jni_impl::android::renderscript::RenderScript arg0, __jni_impl::android::renderscript::Element arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.ScriptIntrinsicColorMatrix",
			"create",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)Landroid/renderscript/ScriptIntrinsicColorMatrix;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject ScriptIntrinsicColorMatrix::getKernelID()
	{
		return __thiz.callObjectMethod(
			"getKernelID",
			"()Landroid/renderscript/Script$KernelID;"
		);
	}
	void ScriptIntrinsicColorMatrix::setAdd(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3)
	{
		__thiz.callMethod<void>(
			"setAdd",
			"(FFFF)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void ScriptIntrinsicColorMatrix::setAdd(__jni_impl::android::renderscript::Float4 arg0)
	{
		__thiz.callMethod<void>(
			"setAdd",
			"(Landroid/renderscript/Float4;)V",
			arg0.__jniObject().object()
		);
	}
	void ScriptIntrinsicColorMatrix::setGreyscale()
	{
		__thiz.callMethod<void>(
			"setGreyscale",
			"()V"
		);
	}
	void ScriptIntrinsicColorMatrix::setYUVtoRGB()
	{
		__thiz.callMethod<void>(
			"setYUVtoRGB",
			"()V"
		);
	}
	void ScriptIntrinsicColorMatrix::setColorMatrix(__jni_impl::android::renderscript::Matrix4f arg0)
	{
		__thiz.callMethod<void>(
			"setColorMatrix",
			"(Landroid/renderscript/Matrix4f;)V",
			arg0.__jniObject().object()
		);
	}
	void ScriptIntrinsicColorMatrix::setColorMatrix(__jni_impl::android::renderscript::Matrix3f arg0)
	{
		__thiz.callMethod<void>(
			"setColorMatrix",
			"(Landroid/renderscript/Matrix3f;)V",
			arg0.__jniObject().object()
		);
	}
	void ScriptIntrinsicColorMatrix::setRGBtoYUV()
	{
		__thiz.callMethod<void>(
			"setRGBtoYUV",
			"()V"
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class ScriptIntrinsicColorMatrix : public __jni_impl::android::renderscript::ScriptIntrinsicColorMatrix
	{
	public:
		ScriptIntrinsicColorMatrix(QAndroidJniObject obj) { __thiz = obj; }
		ScriptIntrinsicColorMatrix()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPTINTRINSICCOLORMATRIX

