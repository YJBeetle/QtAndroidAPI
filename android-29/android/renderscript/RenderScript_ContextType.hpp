#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::renderscript
{
	class RenderScript_ContextType : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject DEBUG();
		static QAndroidJniObject NORMAL();
		static QAndroidJniObject PROFILE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::renderscript


namespace __jni_impl::android::renderscript
{
	// Fields
	QAndroidJniObject RenderScript_ContextType::DEBUG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.RenderScript$ContextType",
			"DEBUG",
			"Landroid/renderscript/RenderScript$ContextType;"
		);
	}
	QAndroidJniObject RenderScript_ContextType::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.RenderScript$ContextType",
			"NORMAL",
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
	QAndroidJniObject RenderScript_ContextType::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript$ContextType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/RenderScript$ContextType;",
			arg0
		);
	}
	QAndroidJniObject RenderScript_ContextType::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript$ContextType",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/RenderScript$ContextType;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray RenderScript_ContextType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript$ContextType",
			"values",
			"()[Landroid/renderscript/RenderScript$ContextType;"
		).object<jarray>();
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

