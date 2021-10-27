#pragma once

#ifndef ANDROID_SERVICE_AUTOFILL_USERDATA
#define ANDROID_SERVICE_AUTOFILL_USERDATA

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::service::autofill
{
	class UserData_Builder;
}

namespace __jni_impl::android::service::autofill
{
	class UserData : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		static jint getMaxCategoryCount();
		static jint getMaxFieldClassificationIdsSize();
		static jint getMaxUserDataSize();
		static jint getMaxValueLength();
		static jint getMinValueLength();
		jint describeContents();
		jstring getFieldClassificationAlgorithm();
		jstring getFieldClassificationAlgorithmForCategory(jstring arg0);
		jstring getFieldClassificationAlgorithmForCategory(const QString &arg0);
		jstring getId();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::service::autofill

#include "../../os/Parcel.hpp"
#include "UserData_Builder.hpp"

namespace __jni_impl::android::service::autofill
{
	// Fields
	QAndroidJniObject UserData::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.service.autofill.UserData",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void UserData::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.service.autofill.UserData",
			"(V)V");
	}
	
	// Methods
	jint UserData::getMaxCategoryCount()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxCategoryCount",
			"()I"
		);
	}
	jint UserData::getMaxFieldClassificationIdsSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxFieldClassificationIdsSize",
			"()I"
		);
	}
	jint UserData::getMaxUserDataSize()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxUserDataSize",
			"()I"
		);
	}
	jint UserData::getMaxValueLength()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMaxValueLength",
			"()I"
		);
	}
	jint UserData::getMinValueLength()
	{
		return QAndroidJniObject::callStaticMethod<jint>(
			"android.service.autofill.UserData",
			"getMinValueLength",
			"()I"
		);
	}
	jint UserData::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jstring UserData::getFieldClassificationAlgorithm()
	{
		return __thiz.callObjectMethod(
			"getFieldClassificationAlgorithm",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserData::getFieldClassificationAlgorithmForCategory(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getFieldClassificationAlgorithmForCategory",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring UserData::getFieldClassificationAlgorithmForCategory(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getFieldClassificationAlgorithmForCategory",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
	jstring UserData::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring UserData::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void UserData::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::service::autofill

namespace android::service::autofill
{
	class UserData : public __jni_impl::android::service::autofill::UserData
	{
	public:
		UserData(QAndroidJniObject obj) { __thiz = obj; }
		UserData()
		{
			__constructor();
		}
	};
} // namespace android::service::autofill

#endif // ANDROID_SERVICE_AUTOFILL_USERDATA

