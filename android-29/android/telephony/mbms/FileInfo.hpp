#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::telephony::mbms
{
	class FileInfo : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		
		// Constructors
		void __constructor();
		
		// Methods
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getMimeType();
		QAndroidJniObject getUri();
		jint hashCode();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::telephony::mbms

#include "../../net/Uri.hpp"
#include "../../os/Parcel.hpp"

namespace __jni_impl::android::telephony::mbms
{
	// Fields
	QAndroidJniObject FileInfo::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.telephony.mbms.FileInfo",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	
	// Constructors
	void FileInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telephony.mbms.FileInfo",
			"(V)V");
	}
	
	// Methods
	jint FileInfo::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean FileInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring FileInfo::getMimeType()
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	QAndroidJniObject FileInfo::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;"
		);
	}
	jint FileInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void FileInfo::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::telephony::mbms

namespace android::telephony::mbms
{
	class FileInfo : public __jni_impl::android::telephony::mbms::FileInfo
	{
	public:
		FileInfo(QAndroidJniObject obj) { __thiz = obj; }
		FileInfo()
		{
			__constructor();
		}
	};
} // namespace android::telephony::mbms

