#pragma once

#ifndef ANDROID_RENDERSCRIPT_RENDERSCRIPT_CONTEXTTYPE
#define ANDROID_RENDERSCRIPT_RENDERSCRIPT_CONTEXTTYPE

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::renderscript
{
	class RenderScript_ContextType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject DEBUG();
		static QAndroidJniObject PROFILE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jarray values();
		static QAndroidJniObject valueOf(jstring arg0);
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	QAndroidJniObject RenderScript_ContextType::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.RenderScript$ContextType",
			"NORMAL",
			"Landroid/renderscript/RenderScript$ContextType;"
		);
	}
	QAndroidJniObject RenderScript_ContextType::DEBUG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.RenderScript$ContextType",
			"DEBUG",
			"Landroid/renderscript/RenderScript$ContextType;"
		);
	}
	QAndroidJniObject RenderScript_ContextType::PROFILE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.RenderScript$ContextType",
			"PROFILE",
			"Landroid/renderscript/RenderScript$ContextType;"
		);
	}
	
	// Constructors
	void RenderScript_ContextType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RenderScript$ContextType",
			"(V)V");
	}
	
	// Methods
	jarray RenderScript_ContextType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript$ContextType",
			"values",
			"()[Landroid/renderscript/RenderScript$ContextType;"
		).object<jarray>();
	}
	QAndroidJniObject RenderScript_ContextType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript$ContextType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/RenderScript$ContextType;",
			arg0
		);
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class RenderScript_ContextType : public __jni_impl::android::renderscript::RenderScript_ContextType
	{
	public:
		RenderScript_ContextType(QAndroidJniObject obj) { __thiz = obj; }
		RenderScript_ContextType()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

#endif // ANDROID_RENDERSCRIPT_RENDERSCRIPT_CONTEXTTYPE

