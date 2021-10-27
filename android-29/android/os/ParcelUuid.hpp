#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::java::util
{
	class UUID;
}

namespace __jni_impl::android::os
{
	class ParcelUuid : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(__jni_impl::java::util::UUID arg0);
		
		// Methods
		static QAndroidJniObject fromString(jstring arg0);
		static QAndroidJniObject fromString(const QString &arg0);
		jint describeContents();
		jboolean equals(jobject arg0);
		QAndroidJniObject getUuid();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::os

#include "Parcel.hpp"
#include "../../java/util/UUID.hpp"

namespace __jni_impl::android::os
{
	// Fields
	QAndroidJniObject ParcelUuid::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.ParcelUuid",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void ParcelUuid::__constructor(__jni_impl::java::util::UUID arg0)
	{
		__thiz = QAndroidJniObject(
			"android.os.ParcelUuid",
			"(Ljava/util/UUID;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject ParcelUuid::fromString(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelUuid",
			"fromString",
			"(Ljava/lang/String;)Landroid/os/ParcelUuid;",
			arg0
		);
	}
	QAndroidJniObject ParcelUuid::fromString(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.os.ParcelUuid",
			"fromString",
			"(Ljava/lang/String;)Landroid/os/ParcelUuid;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jint ParcelUuid::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean ParcelUuid::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	QAndroidJniObject ParcelUuid::getUuid()
	{
		return __thiz.callObjectMethod(
			"getUuid",
			"()Ljava/util/UUID;"
		);
	}
	jint ParcelUuid::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring ParcelUuid::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void ParcelUuid::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::os

namespace android::os
{
	class ParcelUuid : public __jni_impl::android::os::ParcelUuid
	{
	public:
		ParcelUuid(QAndroidJniObject obj) { __thiz = obj; }
		ParcelUuid(__jni_impl::java::util::UUID arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::os

