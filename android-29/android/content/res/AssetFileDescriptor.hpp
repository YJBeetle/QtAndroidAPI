#pragma once

#ifndef ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR
#define ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}
namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::os
{
	class ParcelFileDescriptor;
}
namespace __jni_impl::java::io
{
	class FileDescriptor;
}
namespace __jni_impl::java::io
{
	class FileInputStream;
}
namespace __jni_impl::java::io
{
	class FileOutputStream;
}

namespace __jni_impl::android::content::res
{
	class AssetFileDescriptor : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jlong UNKNOWN_LENGTH();
		
		// Constructors
		void __constructor(__jni_impl::android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2);
		void __constructor(__jni_impl::android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2, __jni_impl::android::os::Bundle arg3);
		
		// Methods
		void close();
		QAndroidJniObject createInputStream();
		QAndroidJniObject createOutputStream();
		jint describeContents();
		jlong getDeclaredLength();
		QAndroidJniObject getExtras();
		QAndroidJniObject getFileDescriptor();
		jlong getLength();
		QAndroidJniObject getParcelFileDescriptor();
		jlong getStartOffset();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content::res

#include "../../os/Bundle.hpp"
#include "../../os/Parcel.hpp"
#include "../../os/ParcelFileDescriptor.hpp"
#include "../../../java/io/FileDescriptor.hpp"
#include "../../../java/io/FileInputStream.hpp"
#include "../../../java/io/FileOutputStream.hpp"

namespace __jni_impl::android::content::res
{
	// Fields
	QAndroidJniObject AssetFileDescriptor::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.res.AssetFileDescriptor",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong AssetFileDescriptor::UNKNOWN_LENGTH()
	{
		return QAndroidJniObject::getStaticField<jlong>(
			"android.content.res.AssetFileDescriptor",
			"UNKNOWN_LENGTH"
		);
	}
	
	// Constructors
	void AssetFileDescriptor::__constructor(__jni_impl::android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.AssetFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;JJ)V",
			arg0.__jniObject().object(),
			arg1,
			arg2
		);
	}
	void AssetFileDescriptor::__constructor(__jni_impl::android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2, __jni_impl::android::os::Bundle arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.res.AssetFileDescriptor",
			"(Landroid/os/ParcelFileDescriptor;JJLandroid/os/Bundle;)V",
			arg0.__jniObject().object(),
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	
	// Methods
	void AssetFileDescriptor::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject AssetFileDescriptor::createInputStream()
	{
		return __thiz.callObjectMethod(
			"createInputStream",
			"()Ljava/io/FileInputStream;"
		);
	}
	QAndroidJniObject AssetFileDescriptor::createOutputStream()
	{
		return __thiz.callObjectMethod(
			"createOutputStream",
			"()Ljava/io/FileOutputStream;"
		);
	}
	jint AssetFileDescriptor::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jlong AssetFileDescriptor::getDeclaredLength()
	{
		return __thiz.callMethod<jlong>(
			"getDeclaredLength",
			"()J"
		);
	}
	QAndroidJniObject AssetFileDescriptor::getExtras()
	{
		return __thiz.callObjectMethod(
			"getExtras",
			"()Landroid/os/Bundle;"
		);
	}
	QAndroidJniObject AssetFileDescriptor::getFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"getFileDescriptor",
			"()Ljava/io/FileDescriptor;"
		);
	}
	jlong AssetFileDescriptor::getLength()
	{
		return __thiz.callMethod<jlong>(
			"getLength",
			"()J"
		);
	}
	QAndroidJniObject AssetFileDescriptor::getParcelFileDescriptor()
	{
		return __thiz.callObjectMethod(
			"getParcelFileDescriptor",
			"()Landroid/os/ParcelFileDescriptor;"
		);
	}
	jlong AssetFileDescriptor::getStartOffset()
	{
		return __thiz.callMethod<jlong>(
			"getStartOffset",
			"()J"
		);
	}
	jstring AssetFileDescriptor::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void AssetFileDescriptor::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
} // namespace __jni_impl::android::content::res

namespace android::content::res
{
	class AssetFileDescriptor : public __jni_impl::android::content::res::AssetFileDescriptor
	{
	public:
		AssetFileDescriptor(QAndroidJniObject obj) { __thiz = obj; }
		AssetFileDescriptor(__jni_impl::android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		AssetFileDescriptor(__jni_impl::android::os::ParcelFileDescriptor arg0, jlong arg1, jlong arg2, __jni_impl::android::os::Bundle arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::content::res

#endif // ANDROID_CONTENT_RES_ASSETFILEDESCRIPTOR

