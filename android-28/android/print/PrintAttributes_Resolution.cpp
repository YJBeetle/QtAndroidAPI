#include "./PrintAttributes_Resolution.hpp"

namespace android::print
{
	// Fields
	
	// QAndroidJniObject forward
	PrintAttributes_Resolution::PrintAttributes_Resolution(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	PrintAttributes_Resolution::PrintAttributes_Resolution(jstring arg0, jstring arg1, jint arg2, jint arg3)
		: __JniBaseClass(
			"android.print.PrintAttributes$Resolution",
			"(Ljava/lang/String;Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3
		) {}
	
	// Methods
	jboolean PrintAttributes_Resolution::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrintAttributes_Resolution::getHorizontalDpi()
	{
		return callMethod<jint>(
			"getHorizontalDpi",
			"()I"
		);
	}
	jstring PrintAttributes_Resolution::getId()
	{
		return callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PrintAttributes_Resolution::getLabel()
	{
		return callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PrintAttributes_Resolution::getVerticalDpi()
	{
		return callMethod<jint>(
			"getVerticalDpi",
			"()I"
		);
	}
	jint PrintAttributes_Resolution::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrintAttributes_Resolution::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::print

