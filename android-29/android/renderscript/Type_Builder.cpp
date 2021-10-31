#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Type.hpp"
#include "./Type_Builder.hpp"

namespace android::renderscript
{
	// Fields
	
	Type_Builder::Type_Builder(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Type_Builder::Type_Builder(android::renderscript::RenderScript arg0, android::renderscript::Element arg1)
	{
		__thiz = QAndroidJniObject(
			"android.renderscript.Type$Builder",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject Type_Builder::create()
	{
		return __thiz.callObjectMethod(
			"create",
			"()Landroid/renderscript/Type;"
		);
	}
	QAndroidJniObject Type_Builder::setFaces(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setFaces",
			"(Z)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	QAndroidJniObject Type_Builder::setMipmaps(jboolean arg0)
	{
		return __thiz.callObjectMethod(
			"setMipmaps",
			"(Z)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	QAndroidJniObject Type_Builder::setX(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setX",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	QAndroidJniObject Type_Builder::setY(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setY",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	QAndroidJniObject Type_Builder::setYuvFormat(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setYuvFormat",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
	QAndroidJniObject Type_Builder::setZ(jint arg0)
	{
		return __thiz.callObjectMethod(
			"setZ",
			"(I)Landroid/renderscript/Type$Builder;",
			arg0
		);
	}
} // namespace android::renderscript

