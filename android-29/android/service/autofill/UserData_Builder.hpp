#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::service::autofill
{
	class UserData;
}

namespace __jni_impl::android::service::autofill
{
	class UserData_Builder : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2);
		
		// Methods
		QAndroidJniObject add(jstring arg0, jstring arg1);
		QAndroidJniObject add(const QString &arg0, const QString &arg1);
		QAndroidJniObject build();
		QAndroidJniObject setFieldClassificationAlgorithm(jstring arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject setFieldClassificationAlgorithm(const QString &arg0, __jni_impl::android::os::Bundle arg1);
		QAndroidJniObject setFieldClassificationAlgorithmForCategory(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2);
		QAndroidJniObject setFieldClassificationAlgorithmForCategory(const QString &arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Bundle.hpp"
#include "./UserData.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	
	// Constructors
	void UserData_Builder::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.UserData$Builder",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void UserData_Builder::__constructor(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.UserData$Builder",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	
	// Methods
	QAndroidJniObject UserData_Builder::add(jstring arg0, jstring arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/service/autofill/UserData$Builder;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject UserData_Builder::add(const QString &arg0, const QString &arg1)
	{
		return __thiz.callObjectMethod(
			"add",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/service/autofill/UserData$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	QAndroidJniObject UserData_Builder::build()
	{
		return __thiz.callObjectMethod(
			"build",
			"()Landroid/service/autofill/UserData;"
		);
	}
	QAndroidJniObject UserData_Builder::setFieldClassificationAlgorithm(jstring arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"setFieldClassificationAlgorithm",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/service/autofill/UserData$Builder;",
			arg0,
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject UserData_Builder::setFieldClassificationAlgorithm(const QString &arg0, __jni_impl::android::os::Bundle arg1)
	{
		return __thiz.callObjectMethod(
			"setFieldClassificationAlgorithm",
			"(Ljava/lang/String;Landroid/os/Bundle;)Landroid/service/autofill/UserData$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject UserData_Builder::setFieldClassificationAlgorithmForCategory(jstring arg0, jstring arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"setFieldClassificationAlgorithmForCategory",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/service/autofill/UserData$Builder;",
			arg0,
			arg1,
			arg2.__jniObject().object()
		);
	}
	QAndroidJniObject UserData_Builder::setFieldClassificationAlgorithmForCategory(const QString &arg0, const QString &arg1, __jni_impl::android::os::Bundle arg2)
	{
		return __thiz.callObjectMethod(
			"setFieldClassificationAlgorithmForCategory",
			"(Ljava/lang/String;Ljava/lang/String;Landroid/os/Bundle;)Landroid/service/autofill/UserData$Builder;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class UserData_Builder : public __jni_impl::android::service::autofill::UserData_Builder
	{
	public:
		UserData_Builder(QAndroidJniObject obj) { __thiz = obj; }
		UserData_Builder(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
	};
} // namespace android::service::autofill

