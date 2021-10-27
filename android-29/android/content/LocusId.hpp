#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content
{
	class LocusId : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor(jstring arg0);
		void __constructor(const QString &arg0);
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getId();
		jint hashCode();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "../os/Parcel.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject LocusId::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.LocusId",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void LocusId::__constructor(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.LocusId",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void LocusId::__constructor(const QString &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.LocusId",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	
	// Methods
	jint LocusId::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean LocusId::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring LocusId::getId()
	{
		return __thiz.callObjectMethod(
			"getId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint LocusId::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring LocusId::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void LocusId::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class LocusId : public __jni_impl::android::content::LocusId
	{
	public:
		LocusId(QAndroidJniObject obj) { __thiz = obj; }
		LocusId(jstring arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

