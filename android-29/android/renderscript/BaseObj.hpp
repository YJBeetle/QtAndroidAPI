#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::renderscript
{
	class RenderScript;
}

namespace __jni_impl::android::renderscript
{
	class BaseObj : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void destroy();
		jboolean equals(jobject arg0);
		jstring getName();
		jint hashCode();
		void setName(jstring arg0);
		void setName(const QString &arg0);
	};
} // namespace __jni_impl::android::renderscript

#include "./RenderScript.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	
	// Constructors
	void BaseObj::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.BaseObj",
			"(V)V");
	}
	
	// Methods
	void BaseObj::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	jboolean BaseObj::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring BaseObj::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint BaseObj::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void BaseObj::setName(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void BaseObj::setName(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setName",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class BaseObj : public __jni_impl::android::renderscript::BaseObj
	{
	public:
		BaseObj(QAndroidJniObject obj) { __thiz = obj; }
		BaseObj()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

