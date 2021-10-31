#include "./RenderScript_ContextType.hpp"

namespace android::renderscript
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
	
	RenderScript_ContextType::RenderScript_ContextType(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
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
	jarray RenderScript_ContextType::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript$ContextType",
			"values",
			"()[Landroid/renderscript/RenderScript$ContextType;"
		).object<jarray>();
	}
} // namespace android::renderscript

