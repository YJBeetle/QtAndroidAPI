#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Element_Builder.hpp"

namespace android::renderscript
{
	// Fields
	
	Element_Builder::Element_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Element_Builder::Element_Builder(android::renderscript::RenderScript &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Element$Builder",
			"(Landroid/renderscript/RenderScript;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Element_Builder::add(android::renderscript::Element arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/renderscript/Element;Ljava/lang/String;)Landroid/renderscript/Element$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject Element_Builder::add(android::renderscript::Element arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/renderscript/Element;Ljava/lang/String;)Landroid/renderscript/Element$Builder;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject Element_Builder::add(android::renderscript::Element arg0, jstring arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/renderscript/Element;Ljava/lang/String;I)Landroid/renderscript/Element$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject Element_Builder::add(android::renderscript::Element arg0, const QString &arg1, jint arg2)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Landroid/renderscript/Element;Ljava/lang/String;I)Landroid/renderscript/Element$Builder;",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2
		);
	}
	QAndroidJniObject Element_Builder::create()
	{
		return __thiz.callObjectMethod(
			"create",
			"()Landroid/renderscript/Element;"
		);
	}
} // namespace android::renderscript

