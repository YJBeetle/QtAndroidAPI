#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION_BUILDER
#define ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION_BUILDER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::view::autofill
{
	class AutofillId;
}
namespace __jni_impl::java::util::regex
{
	class Pattern;
}
namespace __jni_impl::android::service::autofill
{
	class ImageTransformation;
}

namespace __jni_impl::android::service::autofill
{
	class ImageTransformation_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jint arg2);
		void __constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jint arg2, jstring arg3);
		void __constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jint arg2, const QString &arg3);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject addOption(__jni_impl::java::util::regex::Pattern arg0, jint arg1, jstring arg2);
		QAndroidJniObject addOption(__jni_impl::java::util::regex::Pattern arg0, jint arg1, const QString &arg2);
		QAndroidJniObject addOption(__jni_impl::java::util::regex::Pattern arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../view/autofill/AutofillId.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "ImageTransformation.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void ImageTransformation_Builder::__constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jint arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.ImageTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;I)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void ImageTransformation_Builder::__constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jint arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.ImageTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;ILjava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			arg3
		);
	}
	void ImageTransformation_Builder::__constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jint arg2, const QString &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.ImageTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;ILjava/lang/CharSequence;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2,
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject ImageTransformation_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/ImageTransformation;"
		);
	}
	QAndroidJniObject ImageTransformation_Builder::addOption(__jni_impl::java::util::regex::Pattern arg0, jint arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"addOption",
			"(Ljava/util/regex/Pattern;ILjava/lang/CharSequence;)Landroid/service/autofill/ImageTransformation$Builder;",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	QAndroidJniObject ImageTransformation_Builder::addOption(__jni_impl::java::util::regex::Pattern arg0, jint arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"addOption",
			"(Ljava/util/regex/Pattern;ILjava/lang/CharSequence;)Landroid/service/autofill/ImageTransformation$Builder;",
			arg0.__jniObject().object(),
			arg1,
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	QAndroidJniObject ImageTransformation_Builder::addOption(__jni_impl::java::util::regex::Pattern arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"addOption",
			"(Ljava/util/regex/Pattern;I)Landroid/service/autofill/ImageTransformation$Builder;",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class ImageTransformation_Builder : public __jni_impl::android::service::autofill::ImageTransformation_Builder
	{
	public:
		ImageTransformation_Builder(QAndroidJniObject obj) { __thiz = obj; }
		ImageTransformation_Builder(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jint arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		ImageTransformation_Builder(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jint arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_IMAGETRANSFORMATION_BUILDER

