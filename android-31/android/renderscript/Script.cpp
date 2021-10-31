#include "./Allocation.hpp"
#include "./BaseObj.hpp"
#include "./Element.hpp"
#include "./FieldPacker.hpp"
#include "./Script_FieldID.hpp"
#include "./Script_InvokeID.hpp"
#include "./Script_KernelID.hpp"
#include "./Script_LaunchOptions.hpp"
#include "./Script.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	Script::Script(QAndroidJniObject obj) : android::renderscript::BaseObj(obj) {}
	
	// Constructors
	
	// Methods
	void Script::bindAllocation(android::renderscript::Allocation arg0, jint arg1)
	{
		callMethod<void>(
			"bindAllocation",
			"(Landroid/renderscript/Allocation;I)V",
			arg0.object(),
			arg1
		);
	}
	jboolean Script::getVarB(jint arg0)
	{
		return callMethod<jboolean>(
			"getVarB",
			"(I)Z",
			arg0
		);
	}
	jdouble Script::getVarD(jint arg0)
	{
		return callMethod<jdouble>(
			"getVarD",
			"(I)D",
			arg0
		);
	}
	jfloat Script::getVarF(jint arg0)
	{
		return callMethod<jfloat>(
			"getVarF",
			"(I)F",
			arg0
		);
	}
	jint Script::getVarI(jint arg0)
	{
		return callMethod<jint>(
			"getVarI",
			"(I)I",
			arg0
		);
	}
	jlong Script::getVarJ(jint arg0)
	{
		return callMethod<jlong>(
			"getVarJ",
			"(I)J",
			arg0
		);
	}
	void Script::getVarV(jint arg0, android::renderscript::FieldPacker arg1)
	{
		callMethod<void>(
			"getVarV",
			"(ILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1.object()
		);
	}
	void Script::setTimeZone(jstring arg0)
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void Script::setVar(jint arg0, android::renderscript::BaseObj arg1)
	{
		callMethod<void>(
			"setVar",
			"(ILandroid/renderscript/BaseObj;)V",
			arg0,
			arg1.object()
		);
	}
	void Script::setVar(jint arg0, android::renderscript::FieldPacker arg1)
	{
		callMethod<void>(
			"setVar",
			"(ILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1.object()
		);
	}
	void Script::setVar(jint arg0, jboolean arg1)
	{
		callMethod<void>(
			"setVar",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	void Script::setVar(jint arg0, jdouble arg1)
	{
		callMethod<void>(
			"setVar",
			"(ID)V",
			arg0,
			arg1
		);
	}
	void Script::setVar(jint arg0, jfloat arg1)
	{
		callMethod<void>(
			"setVar",
			"(IF)V",
			arg0,
			arg1
		);
	}
	void Script::setVar(jint arg0, jint arg1)
	{
		callMethod<void>(
			"setVar",
			"(II)V",
			arg0,
			arg1
		);
	}
	void Script::setVar(jint arg0, jlong arg1)
	{
		callMethod<void>(
			"setVar",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	void Script::setVar(jint arg0, android::renderscript::FieldPacker arg1, android::renderscript::Element arg2, jintArray arg3)
	{
		callMethod<void>(
			"setVar",
			"(ILandroid/renderscript/FieldPacker;Landroid/renderscript/Element;[I)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3
		);
	}
} // namespace android::renderscript
