#include "./Element.hpp"
#include "./RenderScript.hpp"
#include "./Type.hpp"

namespace android::renderscript
{
	// Fields
	
	Type::Type(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Type::createX(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type",
			"createX",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;I)Landroid/renderscript/Type;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject Type::createXY(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type",
			"createXY",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;II)Landroid/renderscript/Type;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	QAndroidJniObject Type::createXYZ(android::renderscript::RenderScript arg0, android::renderscript::Element arg1, jint arg2, jint arg3, jint arg4)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.Type",
			"createXYZ",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Element;III)Landroid/renderscript/Type;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3,
			arg4
		);
	}
	jint Type::getCount()
	{
		return __thiz.callMethod<jint>(
			"getCount",
			"()I"
		);
	}
	QAndroidJniObject Type::getElement()
	{
		return __thiz.callObjectMethod(
			"getElement",
			"()Landroid/renderscript/Element;"
		);
	}
	jint Type::getX()
	{
		return __thiz.callMethod<jint>(
			"getX",
			"()I"
		);
	}
	jint Type::getY()
	{
		return __thiz.callMethod<jint>(
			"getY",
			"()I"
		);
	}
	jint Type::getYuv()
	{
		return __thiz.callMethod<jint>(
			"getYuv",
			"()I"
		);
	}
	jint Type::getZ()
	{
		return __thiz.callMethod<jint>(
			"getZ",
			"()I"
		);
	}
	jboolean Type::hasFaces()
	{
		return __thiz.callMethod<jboolean>(
			"hasFaces",
			"()Z"
		);
	}
	jboolean Type::hasMipmaps()
	{
		return __thiz.callMethod<jboolean>(
			"hasMipmaps",
			"()Z"
		);
	}
} // namespace android::renderscript

