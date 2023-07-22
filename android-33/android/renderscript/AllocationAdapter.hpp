#pragma once

#include "./Allocation.def.hpp"
#include "./RenderScript.def.hpp"
#include "./Type.def.hpp"
#include "./Type_CubemapFace.def.hpp"
#include "./AllocationAdapter.def.hpp"

namespace android::renderscript
{
	// Fields
	
	// Constructors
	
	// Methods
	inline android::renderscript::AllocationAdapter AllocationAdapter::create1D(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.AllocationAdapter",
			"create1D",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Allocation;)Landroid/renderscript/AllocationAdapter;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::renderscript::AllocationAdapter AllocationAdapter::create2D(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1)
	{
		return callStaticObjectMethod(
			"android.renderscript.AllocationAdapter",
			"create2D",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Allocation;)Landroid/renderscript/AllocationAdapter;",
			arg0.object(),
			arg1.object()
		);
	}
	inline android::renderscript::AllocationAdapter AllocationAdapter::createTyped(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1, android::renderscript::Type arg2)
	{
		return callStaticObjectMethod(
			"android.renderscript.AllocationAdapter",
			"createTyped",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Allocation;Landroid/renderscript/Type;)Landroid/renderscript/AllocationAdapter;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	inline void AllocationAdapter::resize(jint arg0) const
	{
		callMethod<void>(
			"resize",
			"(I)V",
			arg0
		);
	}
	inline void AllocationAdapter::setFace(android::renderscript::Type_CubemapFace arg0) const
	{
		callMethod<void>(
			"setFace",
			"(Landroid/renderscript/Type$CubemapFace;)V",
			arg0.object()
		);
	}
	inline void AllocationAdapter::setLOD(jint arg0) const
	{
		callMethod<void>(
			"setLOD",
			"(I)V",
			arg0
		);
	}
	inline void AllocationAdapter::setX(jint arg0) const
	{
		callMethod<void>(
			"setX",
			"(I)V",
			arg0
		);
	}
	inline void AllocationAdapter::setY(jint arg0) const
	{
		callMethod<void>(
			"setY",
			"(I)V",
			arg0
		);
	}
	inline void AllocationAdapter::setZ(jint arg0) const
	{
		callMethod<void>(
			"setZ",
			"(I)V",
			arg0
		);
	}
} // namespace android::renderscript

// Base class headers
#include "./BaseObj.hpp"
#include "./Allocation.hpp"

#ifdef QT_ANDROID_API_AUTOUSE
using namespace android::renderscript;
#endif
