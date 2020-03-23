#pragma once

#ifndef ANDROID_PRINT_PRINTATTRIBUTES_RESOLUTION
#define ANDROID_PRINT_PRINTATTRIBUTES_RESOLUTION

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::print
{
	class PrintAttributes_Resolution : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jint arg2, jint arg3);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		QAndroidJniObject getId();
		QAndroidJniObject getLabel();
		jint getHorizontalDpi();
		jint getVerticalDpi();
	};
} // namespace __jni_impl::android::print


namespace __jni_impl::android::print
{
	// Fields
	
	// Constructors
	void PrintAttributes_Resolution::__constructor(jstring arg0, jstring arg1, jint arg2, jint arg3)
	{
		__thiz = QAndroidJniObject(
			"android.print.PrintAttributes$Resolution",
			"(Ljava/lang/String;Ljava/lang/String;II)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	
	// Methods
	jboolean PrintAttributes_Resolution::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject PrintAttributes_Resolution::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint PrintAttributes_Resolution::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	QAndroidJniObject PrintAttributes_Resolution::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;");
	}
	QAndroidJniObject PrintAttributes_Resolution::getLabel()
	{
		return __thiz.callObjectMethod(
			"getLabel",
			"()Ljava/lang/String;");
	}
	jint PrintAttributes_Resolution::getHorizontalDpi()
	{
		return __thiz.callMethod<jint>(
			"getHorizontalDpi",
			"()I");
	}
	jint PrintAttributes_Resolution::getVerticalDpi()
	{
		return __thiz.callMethod<jint>(
			"getVerticalDpi",
			"()I");
	}
} // namespace __jni_impl::android::print

namespace android::print
{
	class PrintAttributes_Resolution : public __jni_impl::android::print::PrintAttributes_Resolution
	{
	public:
		PrintAttributes_Resolution(QAndroidJniObject obj) { __thiz = obj; }
		PrintAttributes_Resolution(jstring arg0, jstring arg1, jint arg2, jint arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::print

#endif // ANDROID_PRINT_PRINTATTRIBUTES_RESOLUTION

