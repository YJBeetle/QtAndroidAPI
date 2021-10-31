#include "./Allocation.hpp"
#include "./RenderScript.hpp"
#include "./Type.hpp"
#include "./Type_CubemapFace.hpp"
#include "./AllocationAdapter.hpp"

namespace android::renderscript
{
	// Fields
	
	// QAndroidJniObject forward
	AllocationAdapter::AllocationAdapter(QAndroidJniObject obj) : android::renderscript::Allocation(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject AllocationAdapter::create1D(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.AllocationAdapter",
			"create1D",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Allocation;)Landroid/renderscript/AllocationAdapter;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject AllocationAdapter::create2D(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.AllocationAdapter",
			"create2D",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Allocation;)Landroid/renderscript/AllocationAdapter;",
			arg0.object(),
			arg1.object()
		);
	}
	QAndroidJniObject AllocationAdapter::createTyped(android::renderscript::RenderScript arg0, android::renderscript::Allocation arg1, android::renderscript::Type arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.renderscript.AllocationAdapter",
			"createTyped",
			"(Landroid/renderscript/RenderScript;Landroid/renderscript/Allocation;Landroid/renderscript/Type;)Landroid/renderscript/AllocationAdapter;",
			arg0.object(),
			arg1.object(),
			arg2.object()
		);
	}
	void AllocationAdapter::resize(jint arg0)
	{
		callMethod<void>(
			"resize",
			"(I)V",
			arg0
		);
	}
	void AllocationAdapter::setFace(android::renderscript::Type_CubemapFace arg0)
	{
		callMethod<void>(
			"setFace",
			"(Landroid/renderscript/Type$CubemapFace;)V",
			arg0.object()
		);
	}
	void AllocationAdapter::setLOD(jint arg0)
	{
		callMethod<void>(
			"setLOD",
			"(I)V",
			arg0
		);
	}
	void AllocationAdapter::setX(jint arg0)
	{
		callMethod<void>(
			"setX",
			"(I)V",
			arg0
		);
	}
	void AllocationAdapter::setY(jint arg0)
	{
		callMethod<void>(
			"setY",
			"(I)V",
			arg0
		);
	}
	void AllocationAdapter::setZ(jint arg0)
	{
		callMethod<void>(
			"setZ",
			"(I)V",
			arg0
		);
	}
} // namespace android::renderscript
