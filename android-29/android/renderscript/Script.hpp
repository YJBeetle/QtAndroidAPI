#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPT
#define ANDROID_RENDERSCRIPT_SCRIPT

#include "../../__JniBaseClass.hpp"
#include "BaseObj.hpp"

namespace __jni_impl::android::renderscript
{
	class Allocation;
}
namespace __jni_impl::android::renderscript
{
	class BaseObj;
}
namespace __jni_impl::android::renderscript
{
	class Element;
}
namespace __jni_impl::android::renderscript
{
	class FieldPacker;
}
namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Script_FieldID;
}
namespace __jni_impl::android::renderscript
{
	class Script_InvokeID;
}
namespace __jni_impl::android::renderscript
{
	class Script_KernelID;
}
namespace __jni_impl::android::renderscript
{
	class Script_LaunchOptions;
}

namespace __jni_impl::android::renderscript
{
	class Script : public __jni_impl::android::renderscript::BaseObj
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void bindAllocation(__jni_impl::android::renderscript::Allocation arg0, jint arg1);
		jboolean getVarB(jint arg0);
		jdouble getVarD(jint arg0);
		jfloat getVarF(jint arg0);
		jint getVarI(jint arg0);
		jlong getVarJ(jint arg0);
		void getVarV(jint arg0, __jni_impl::android::renderscript::FieldPacker arg1);
		void setTimeZone(jstring arg0);
		void setTimeZone(const QString &arg0);
		void setVar(jint arg0, __jni_impl::android::renderscript::BaseObj arg1);
		void setVar(jint arg0, __jni_impl::android::renderscript::FieldPacker arg1);
		void setVar(jint arg0, jboolean arg1);
		void setVar(jint arg0, jdouble arg1);
		void setVar(jint arg0, jfloat arg1);
		void setVar(jint arg0, jint arg1);
		void setVar(jint arg0, jlong arg1);
		void setVar(jint arg0, __jni_impl::android::renderscript::FieldPacker arg1, __jni_impl::android::renderscript::Element arg2, jintArray arg3);
	};
} // namespace __jni_impl::android::renderscript

#include "Allocation.hpp"
#include "BaseObj.hpp"
#include "Element.hpp"
#include "FieldPacker.hpp"
#include "RenderScript.hpp"
#include "Script_FieldID.hpp"
#include "Script_InvokeID.hpp"
#include "Script_KernelID.hpp"
#include "Script_LaunchOptions.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Script::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Script",
			"(V)V");
	}
	
	// Methods
	void Script::bindAllocation(__jni_impl::android::renderscript::Allocation arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"bindAllocation",
			"(Landroid/renderscript/Allocation;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean Script::getVarB(jint arg0)
	{
		return __thiz.callMethod<jboolean>(
			"getVarB",
			"(I)Z",
			arg0
		);
	}
	jdouble Script::getVarD(jint arg0)
	{
		return __thiz.callMethod<jdouble>(
			"getVarD",
			"(I)D",
			arg0
		);
	}
	jfloat Script::getVarF(jint arg0)
	{
		return __thiz.callMethod<jfloat>(
			"getVarF",
			"(I)F",
			arg0
		);
	}
	jint Script::getVarI(jint arg0)
	{
		return __thiz.callMethod<jint>(
			"getVarI",
			"(I)I",
			arg0
		);
	}
	jlong Script::getVarJ(jint arg0)
	{
		return __thiz.callMethod<jlong>(
			"getVarJ",
			"(I)J",
			arg0
		);
	}
	void Script::getVarV(jint arg0, __jni_impl::android::renderscript::FieldPacker arg1)
	{
		__thiz.callMethod<void>(
			"getVarV",
			"(ILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Script::setTimeZone(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Script::setTimeZone(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void Script::setVar(jint arg0, __jni_impl::android::renderscript::BaseObj arg1)
	{
		__thiz.callMethod<void>(
			"setVar",
			"(ILandroid/renderscript/BaseObj;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Script::setVar(jint arg0, __jni_impl::android::renderscript::FieldPacker arg1)
	{
		__thiz.callMethod<void>(
			"setVar",
			"(ILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1.__jniObject().object()
		);
	}
	void Script::setVar(jint arg0, jboolean arg1)
	{
		__thiz.callMethod<void>(
			"setVar",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Script::setVar(jint arg0, jdouble arg1)
	{
		__thiz.callMethod<void>(
			"setVar",
			"(ID)V",
			arg0,
			arg1
		);
	}
	void Script::setVar(jint arg0, jfloat arg1)
	{
		__thiz.callMethod<void>(
			"setVar",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void Script::setVar(jint arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"setVar",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Script::setVar(jint arg0, jlong arg1)
	{
		__thiz.callMethod<void>(
			"setVar",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void Script::setVar(jint arg0, __jni_impl::android::renderscript::FieldPacker arg1, __jni_impl::android::renderscript::Element arg2, jintArray arg3)
	{
		__thiz.callMethod<void>(
			"setVar",
			"(ILandroid/renderscript/FieldPacker;Landroid/renderscript/Element;[I)V",
			arg0,
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Script : public __jni_impl::android::renderscript::Script
	{
	public:
		Script(QAndroidJniObject obj) { __thiz = obj; }
		Script()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPT

