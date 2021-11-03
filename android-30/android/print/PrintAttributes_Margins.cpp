#include "../../JObject.hpp"
#include "../../JString.hpp"
#include "./PrintAttributes_Margins.hpp"

namespace android::print
{
	// Fields
	android::print::PrintAttributes_Margins PrintAttributes_Margins::NO_MARGINS()
	{
		return getStaticObjectField(
			"android.print.PrintAttributes$Margins",
			"NO_MARGINS",
			"Landroid/print/PrintAttributes$Margins;"
		);
	}
	
	// QAndroidJniObject forward
	PrintAttributes_Margins::PrintAttributes_Margins(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	PrintAttributes_Margins::PrintAttributes_Margins(jint arg0, jint arg1, jint arg2, jint arg3)
		: JObject(
			"android.print.PrintAttributes$Margins",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean PrintAttributes_Margins::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	jint PrintAttributes_Margins::getBottomMils()
	{
		return callMethod<jint>(
			"getBottomMils",
			"()I"
		);
	}
	jint PrintAttributes_Margins::getLeftMils()
	{
		return callMethod<jint>(
			"getLeftMils",
			"()I"
		);
	}
	jint PrintAttributes_Margins::getRightMils()
	{
		return callMethod<jint>(
			"getRightMils",
			"()I"
		);
	}
	jint PrintAttributes_Margins::getTopMils()
	{
		return callMethod<jint>(
			"getTopMils",
			"()I"
		);
	}
	jint PrintAttributes_Margins::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JString PrintAttributes_Margins::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::print

