#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::renderscript
{
	class RenderScript_Priority : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LOW();
		static QAndroidJniObject NORMAL();
		
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
	QAndroidJniObject RenderScript_Priority::LOW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.RenderScript$Priority",
			"LOW",
			"Landroid/renderscript/RenderScript$Priority;"
		);
	}
	QAndroidJniObject RenderScript_Priority::NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.renderscript.RenderScript$Priority",
			"NORMAL",
			"Landroid/renderscript/RenderScript$Priority;"
		);
	}
	
	// Constructors
	void RenderScript_Priority::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.RenderScript$Priority",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject RenderScript_Priority::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript$Priority",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/RenderScript$Priority;",
			arg0
		);
	}
	QAndroidJniObject RenderScript_Priority::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript$Priority",
			"valueOf",
			"(Ljava/lang/String;)Landroid/renderscript/RenderScript$Priority;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray RenderScript_Priority::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.RenderScript$Priority",
			"values",
			"()[Landroid/renderscript/RenderScript$Priority;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::renderscript

namespace android::renderscript
{
	class RenderScript_Priority : public __jni_impl::android::renderscript::RenderScript_Priority
	{
	public:
		RenderScript_Priority(QAndroidJniObject obj) { __thiz = obj; }
		RenderScript_Priority()
		{
			__constructor();
		}
	};
} // namespace android::renderscript

