#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_CHARSEQUENCETRANSFORMATION_BUILDER
#define ANDROID_SERVICE_AUTOFILL_CHARSEQUENCETRANSFORMATION_BUILDER

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
	class CharSequenceTransformation;
}

namespace __jni_impl::android::service::autofill
{
	class CharSequenceTransformation_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2);
		void __constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, const QString &arg2);
		
		// Methods
		QAndroidJniObject build();
		QAndroidJniObject addField(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2);
		QAndroidJniObject addField(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, const QString &arg2);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../view/autofill/AutofillId.hpp"
#include "../../../java/util/regex/Pattern.hpp"
#include "CharSequenceTransformation.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void CharSequenceTransformation_Builder::__constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.CharSequenceTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	void CharSequenceTransformation_Builder::__constructor(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.CharSequenceTransformation$Builder",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject CharSequenceTransformation_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/CharSequenceTransformation;"
		);
	}
	QAndroidJniObject CharSequenceTransformation_Builder::addField(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2)
	{
		return __thiz.callObjectMethod(
			"addField",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)Landroid/service/autofill/CharSequenceTransformation$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject CharSequenceTransformation_Builder::addField(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, const QString &arg2)
	{
		return __thiz.callObjectMethod(
			"addField",
			"(Landroid/view/autofill/AutofillId;Ljava/util/regex/Pattern;Ljava/lang/String;)Landroid/service/autofill/CharSequenceTransformation$Builder;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class CharSequenceTransformation_Builder : public __jni_impl::android::service::autofill::CharSequenceTransformation_Builder
	{
	public:
		CharSequenceTransformation_Builder(QAndroidJniObject obj) { __thiz = obj; }
		CharSequenceTransformation_Builder(__jni_impl::android::view::autofill::AutofillId arg0, __jni_impl::java::util::regex::Pattern arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_CHARSEQUENCETRANSFORMATION_BUILDER

