#pragma once

#ifndef ANDROID_RENDERSCRIPT_SCRIPT_FIELDBASE
#define ANDROID_RENDERSCRIPT_SCRIPT_FIELDBASE

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::renderscript
{
	class Allocation;
}
namespace __jni_impl::android::renderscript
{
	class Element;
}
namespace __jni_impl::android::renderscript
{
	class RenderScript;
}
namespace __jni_impl::android::renderscript
{
	class Type;
}

namespace __jni_impl::android::renderscript
{
	class Script_FieldBase : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getType();
		QAndroidJniObject getElement();
		QAndroidJniObject getAllocation();
		void updateAllocation();
	};
} // namespace __jni_impl::android::renderscript

#include "Allocation.hpp"
#include "Element.hpp"
#include "RenderScript.hpp"
#include "Type.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void Script_FieldBase::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Script$FieldBase",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Script_FieldBase::getType()
	{
		return __thiz.callObjectMethod(
			"getType",
			"()Landroid/renderscript/Type;"
		);
	}
	QAndroidJniObject Script_FieldBase::getElement()
	{
		return __thiz.callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;"
		);
	}
	QAndroidJniObject Script_FieldBase::getAllocation()
	{
		return __thiz.callObjectMethod(
			"getAllocation",
			"()Landroid/renderscript/Allocation;"
		);
	}
	void Script_FieldBase::updateAllocation()
	{
		__thiz.callMethod<void>(
			"updateAllocation",
			"()V"
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class Script_FieldBase : public __jni_impl::android::renderscript::Script_FieldBase
	{
	public:
		Script_FieldBase(QAndroidJniObject obj) { __thiz = obj; }
		Script_FieldBase()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_SCRIPT_FIELDBASE

