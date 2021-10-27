#include "./PrintAttributes_Resolution.hpp"

namespace android::print
{
	// Fields
	
	PrintAttributes_Resolution::PrintAttributes_Resolution(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	PrintAttributes_Resolution::PrintAttributes_Resolution(jstring &arg0, jstring &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintAttributes$Resolution",
			"(Ljava/lang/String;Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	PrintAttributes_Resolution::PrintAttributes_Resolution(const QString &arg0, const QString &arg1, jint &arg2, jint &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintAttributes$Resolution",
			"(Ljava/lang/String;Ljava/lang/String;II)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	
	// Methods
	jboolean PrintAttributes_Resolution::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint PrintAttributes_Resolution::getHorizontalDpi()
	{
		return __thiz.callMethod<jint>(
			"getHorizontalDpi",
			"()I"
		);
	}
	jstring PrintAttributes_Resolution::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring PrintAttributes_Resolution::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint PrintAttributes_Resolution::getVerticalDpi()
	{
		return __thiz.callMethod<jint>(
			"getVerticalDpi",
			"()I"
		);
	}
	jint PrintAttributes_Resolution::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring PrintAttributes_Resolution::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::print

