#pragma once

#ifndef ANDROID_OS_STORAGE_STORAGEVOLUME
#define ANDROID_OS_STORAGE_STORAGEVOLUME

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::content
{
	class Intent;
}

namespace __jni_impl::android::os::storage
{
	class StorageVolume : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		static jstring EXTRA_STORAGE_VOLUME();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		jstring getState();
		jboolean isPrimary();
		jstring getDescription(__jni_impl::android::content::Context arg0);
		jstring getUuid();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jboolean isRemovable();
		jboolean isEmulated();
		QAndroidJniObject createAccessIntent(jstring arg0);
		QAndroidJniObject createAccessIntent(const QString &arg0);
		QAndroidJniObject createOpenDocumentTreeIntent();
	};
} // namespace __jni_impl::android::os::storage

#include "../Parcel.hpp"
#include "../../content/Context.hpp"
#include "../../content/Intent.hpp"

namespace __jni_impl::android::os::storage
{
	// Fields
	QAndroidJniObject StorageVolume::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.storage.StorageVolume",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring StorageVolume::EXTRA_STORAGE_VOLUME()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.os.storage.StorageVolume",
			"EXTRA_STORAGE_VOLUME",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	
	// Constructors
	void StorageVolume::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.os.storage.StorageVolume",
			"(V)V");
	}
	
	// Methods
	jboolean StorageVolume::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring StorageVolume::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint StorageVolume::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring StorageVolume::getState()
	{
		return __thiz.callObjectMethod(
			"getState",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean StorageVolume::isPrimary()
	{
		return __thiz.callMethod<jboolean>(
			"isPrimary",
			"()Z"
		);
	}
	jstring StorageVolume::getDescription(__jni_impl::android::content::Context arg0)
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"(Landroid/content/Context;)Ljava/lang/String;",
			arg0.__jniObject().object()
		).object<jstring>();
	}
	jstring StorageVolume::getUuid()
	{
		return __thiz.callObjectMethod(
			"getUuid",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint StorageVolume::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void StorageVolume::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean StorageVolume::isRemovable()
	{
		return __thiz.callMethod<jboolean>(
			"isRemovable",
			"()Z"
		);
	}
	jboolean StorageVolume::isEmulated()
	{
		return __thiz.callMethod<jboolean>(
			"isEmulated",
			"()Z"
		);
	}
	QAndroidJniObject StorageVolume::createAccessIntent(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"createAccessIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			arg0
		);
	}
	QAndroidJniObject StorageVolume::createAccessIntent(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"createAccessIntent",
			"(Ljava/lang/String;)Landroid/content/Intent;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject StorageVolume::createOpenDocumentTreeIntent()
	{
		return __thiz.callObjectMethod(
			"createOpenDocumentTreeIntent",
			"()Landroid/content/Intent;"
		);
	}
} // namespace __jni_impl::android::os::storage

namespace android::os::storage
{
	class StorageVolume : public __jni_impl::android::os::storage::StorageVolume
	{
	public:
		StorageVolume(QAndroidJniObject obj) { __thiz = obj; }
		StorageVolume()
		{
			__constructor();
		}
	};
} // namespace android::os::storage

#endif // ANDROID_OS_STORAGE_STORAGEVOLUME

