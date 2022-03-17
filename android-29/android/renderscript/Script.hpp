#pragma once

#include "../../JIntArray.hpp"
#include "../../JArray.hpp"
#include "./Allocation.def.hpp"
#include "./BaseObj.def.hpp"
#include "./Element.def.hpp"
#include "./FieldPacker.def.hpp"
#include "./RenderScript.def.hpp"
#include "./Script_FieldID.def.hpp"
#include "./Script_InvokeID.def.hpp"
#include "./Script_KernelID.def.hpp"
#include "./Script_LaunchOptions.def.hpp"
#include "../../JString.hpp"
#include "./Script.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	inline void Script::bindAllocation(android::renderscript::Allocation arg0, jint arg1) const
	{
		callMethod<void>(
			"bindAllocation",
			"(Landroid/renderscript/Allocation;I)V",
			arg0.object(),
			arg1
		);
	}
	inline jboolean Script::getVarB(jint arg0) const
	{
		return callMethod<jboolean>(
			"getVarB",
			"(I)Z",
			arg0
		);
	}
	inline jdouble Script::getVarD(jint arg0) const
	{
		return callMethod<jdouble>(
			"getVarD",
			"(I)D",
			arg0
		);
	}
	inline jfloat Script::getVarF(jint arg0) const
	{
		return callMethod<jfloat>(
			"getVarF",
			"(I)F",
			arg0
		);
	}
	inline jint Script::getVarI(jint arg0) const
	{
		return callMethod<jint>(
			"getVarI",
			"(I)I",
			arg0
		);
	}
	inline jlong Script::getVarJ(jint arg0) const
	{
		return callMethod<jlong>(
			"getVarJ",
			"(I)J",
			arg0
		);
	}
	inline void Script::getVarV(jint arg0, android::renderscript::FieldPacker arg1) const
	{
		callMethod<void>(
			"getVarV",
			"(ILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Script::setTimeZone(JString arg0) const
	{
		callMethod<void>(
			"setTimeZone",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	inline void Script::setVar(jint arg0, android::renderscript::BaseObj arg1) const
	{
		callMethod<void>(
			"setVar",
			"(ILandroid/renderscript/BaseObj;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Script::setVar(jint arg0, android::renderscript::FieldPacker arg1) const
	{
		callMethod<void>(
			"setVar",
			"(ILandroid/renderscript/FieldPacker;)V",
			arg0,
			arg1.object()
		);
	}
	inline void Script::setVar(jint arg0, jboolean arg1) const
	{
		callMethod<void>(
			"setVar",
			"(IZ)V",
			arg0,
			arg1
		);
	}
	inline void Script::setVar(jint arg0, jdouble arg1) const
	{
		callMethod<void>(
			"setVar",
			"(ID)V",
			arg0,
			arg1
		);
	}
	inline void Script::setVar(jint arg0, jfloat arg1) const
	{
		callMethod<void>(
			"setVar",
			"(IF)V",
			arg0,
			arg1
		);
	}
	inline void Script::setVar(jint arg0, jint arg1) const
	{
		callMethod<void>(
			"setVar",
			"(II)V",
			arg0,
			arg1
		);
	}
	inline void Script::setVar(jint arg0, jlong arg1) const
	{
		callMethod<void>(
			"setVar",
			"(IJ)V",
			arg0,
			arg1
		);
	}
	inline void Script::setVar(jint arg0, android::renderscript::FieldPacker arg1, android::renderscript::Element arg2, JIntArray arg3) const
	{
		callMethod<void>(
			"setVar",
			"(ILandroid/renderscript/FieldPacker;Landroid/renderscript/Element;[I)V",
			arg0,
			arg1.object(),
			arg2.object(),
			arg3.object<jintArray>()
		);
	}
} // namespace android::renderscript

// Base class headers
#include "./BaseObj.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
