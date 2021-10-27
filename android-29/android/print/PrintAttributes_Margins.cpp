#include "./PrintAttributes_Margins.hpp"

namespace android::print
{
	// Fields
	QAndroidJniObject PrintAttributes_Margins::NO_MARGINS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.print.PrintAttributes$Margins",
			"NO_MARGINS",
			"Landroid/print/PrintAttributes$Margins;"
		);
	}
	
	PrintAttributes_Margins::PrintAttributes_Margins(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrintAttributes_Margins::PrintAttributes_Margins(jint &arg0, jint &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintAttributes$Margins",
			"(IIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean PrintAttributes_Margins::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrintAttributes_Margins::getBottomMils()
	{
		return __thiz.callMethod<jint>(
			"getBottomMils",
			"()I"
		);
	}
	jint PrintAttributes_Margins::getLeftMils()
	{
		return __thiz.callMethod<jint>(
			"getLeftMils",
			"()I"
		);
	}
	jint PrintAttributes_Margins::getRightMils()
	{
		return __thiz.callMethod<jint>(
			"getRightMils",
			"()I"
		);
	}
	jint PrintAttributes_Margins::getTopMils()
	{
		return __thiz.callMethod<jint>(
			"getTopMils",
			"()I"
		);
	}
	jint PrintAttributes_Margins::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrintAttributes_Margins::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::print

