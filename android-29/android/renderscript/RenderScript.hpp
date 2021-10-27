#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::renderscript
{
	class RenderScript_ContextType;
}
namespace __jni_impl::android::renderscript
{
	class RenderScript_Priority;
}
namespace __jni_impl::android::renderscript
{
	class RenderScript_RSErrorHandler;
}
namespace __jni_impl::android::renderscript
{
	class RenderScript_RSMessageHandler;
}

namespace __jni_impl::android::renderscript
{
	class RenderScript : public __JniBaseClass
	{
	public:
		// Fields
		static jint CREATE_FLAG_LOW_LATENCY();
		static jint CREATE_FLAG_LOW_POWER();
		static jint CREATE_FLAG_NONE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::android::renderscript::RenderScript_ContextType arg1);
		static QAndroidJniObject create(__jni_impl::android::content::Context arg0, __jni_impl::android::renderscript::RenderScript_ContextType arg1, jint arg2);
		static QAndroidJniObject createMultiContext(__jni_impl::android::content::Context arg0, __jni_impl::android::renderscript::RenderScript_ContextType arg1, jint arg2, jint arg3);
		static jlong getMinorVersion();
		static void releaseAllContexts();
		void contextDump();
		void destroy();
		void finish();
		QAndroidJniObject getApplicationContext();
		QAndroidJniObject getErrorHandler();
		QAndroidJniObject getMessageHandler();
		void sendMessage(jint arg0, jintArray arg1);
		void setErrorHandler(__jni_impl::android::renderscript::RenderScript_RSErrorHandler arg0);
		void setMessageHandler(__jni_impl::android::renderscript::RenderScript_RSMessageHandler arg0);
		void setPriority(__jni_impl::android::renderscript::RenderScript_Priority arg0);
	};
} // namespace __jni_impl::android::renderscript

#include "../content/Context.hpp"
#include "RenderScript_ContextType.hpp"
#include "RenderScript_Priority.hpp"
#include "RenderScript_RSErrorHandler.hpp"
#include "RenderScript_RSMessageHandler.hpp"

namespace __jni_impl::android::renderscript
{
	// Fields
	jint RenderScript::CREATE_FLAG_LOW_LATENCY()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.RenderScript",
			"CREATE_FLAG_LOW_LATENCY"
		);
	}
	jint RenderScript::CREATE_FLAG_LOW_POWER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.RenderScript",
			"CREATE_FLAG_LOW_POWER"
		);
	}
	jint RenderScript::CREATE_FLAG_NONE()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.renderscript.RenderScript",
			"CREATE_FLAG_NONE"
		);
	}
	
	// Constructors
	void RenderScript::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RenderScript",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RenderScript::create(__jni_impl::android::content::Context arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"create",
			"(Landroid/content/Context;)Landroid/renderscript/RenderScript;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject RenderScript::create(__jni_impl::android::content::Context arg0, __jni_impl::android::renderscript::RenderScript_ContextType arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"create",
			"(Landroid/content/Context;Landroid/renderscript/RenderScript$ContextType;)Landroid/renderscript/RenderScript;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject RenderScript::create(__jni_impl::android::content::Context arg0, __jni_impl::android::renderscript::RenderScript_ContextType arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"create",
			"(Landroid/content/Context;Landroid/renderscript/RenderScript$ContextType;I)Landroid/renderscript/RenderScript;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject RenderScript::createMultiContext(__jni_impl::android::content::Context arg0, __jni_impl::android::renderscript::RenderScript_ContextType arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript",
			"createMultiContext",
			"(Landroid/content/Context;Landroid/renderscript/RenderScript$ContextType;II)Landroid/renderscript/RenderScript;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	jlong RenderScript::getMinorVersion()
	{
		return QAndroidJniObject::callStaticMethod<jlong>(
			"android.renderscript.RenderScript",
			"getMinorVersion",
			"()J"
		);
	}
	void RenderScript::releaseAllContexts()
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.renderscript.RenderScript",
			"releaseAllContexts",
			"()V"
		);
	}
	void RenderScript::contextDump()
	{
		__thiz.callMethod<void>(
			"contextDump",
			"()V"
		);
	}
	void RenderScript::destroy()
	{
		__thiz.callMethod<void>(
			"destroy",
			"()V"
		);
	}
	void RenderScript::finish()
	{
		__thiz.callMethod<void>(
			"finish",
			"()V"
		);
	}
	QAndroidJniObject RenderScript::getApplicationContext()
	{
		return __thiz.callObjectMethod(
			"getApplicationContext",
			"()Landroid/content/Context;"
		);
	}
	QAndroidJniObject RenderScript::getErrorHandler()
	{
		return __thiz.callObjectMethod(
			"getErrorHandler",
			"()Landroid/renderscript/RenderScript$RSErrorHandler;"
		);
	}
	QAndroidJniObject RenderScript::getMessageHandler()
	{
		return __thiz.callObjectMethod(
			"getMessageHandler",
			"()Landroid/renderscript/RenderScript$RSMessageHandler;"
		);
	}
	void RenderScript::sendMessage(jint arg0, jintArray arg1)
	{
		__thiz.callMethod<void>(
			"sendMessage",
			"(I[I)V",
			arg0,
			arg1
		);
	}
	void RenderScript::setErrorHandler(__jni_impl::android::renderscript::RenderScript_RSErrorHandler arg0)
	{
		__thiz.callMethod<void>(
			"setErrorHandler",
			"(Landroid/renderscript/RenderScript$RSErrorHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void RenderScript::setMessageHandler(__jni_impl::android::renderscript::RenderScript_RSMessageHandler arg0)
	{
		__thiz.callMethod<void>(
			"setMessageHandler",
			"(Landroid/renderscript/RenderScript$RSMessageHandler;)V",
			arg0.__jniObject().object()
		);
	}
	void RenderScript::setPriority(__jni_impl::android::renderscript::RenderScript_Priority arg0)
	{
		__thiz.callMethod<void>(
			"setPriority",
			"(Landroid/renderscript/RenderScript$Priority;)V",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class RenderScript : public __jni_impl::android::renderscript::RenderScript
	{
	public:
		RenderScript(QAndroidJniObject obj) { __thiz = obj; }
		RenderScript()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

