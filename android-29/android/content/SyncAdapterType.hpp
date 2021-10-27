#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content
{
	class SyncAdapterType : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jstring accountType();
		jstring authority();
		jboolean isKey();
		
		// Constructors
		void __constructor(__jni_impl::android::os::Parcel arg0);
		void __constructor(jstring arg0, jstring arg1, jboolean arg2, jboolean arg3);
		void __constructor(const QString &arg0, const QString &arg1, jboolean arg2, jboolean arg3);
		
		// Methods
		static QAndroidJniObject newKey(jstring arg0, jstring arg1);
		static QAndroidJniObject newKey(const QString &arg0, const QString &arg1);
		jboolean allowParallelSyncs();
		jint describeContents();
		jboolean equals(jobject arg0);
		jstring getSettingsActivity();
		jint hashCode();
		jboolean isAlwaysSyncable();
		jboolean isUserVisible();
		jboolean supportsUploading();
		jstring toString();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "../os/Parcel.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject SyncAdapterType::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.SyncAdapterType",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jstring SyncAdapterType::accountType()
	{
		return __thiz.getObjectField(
			"accountType",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jstring SyncAdapterType::authority()
	{
		return __thiz.getObjectField(
			"authority",
			"Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SyncAdapterType::isKey()
	{
		return __thiz.getField<jboolean>(
			"isKey"
		);
	}
	
	// Constructors
	void SyncAdapterType::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncAdapterType",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object()
		);
	}
	void SyncAdapterType::__constructor(jstring arg0, jstring arg1, jboolean arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncAdapterType",
			"(Ljava/lang/String;Ljava/lang/String;ZZ)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void SyncAdapterType::__constructor(const QString &arg0, const QString &arg1, jboolean arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncAdapterType",
			"(Ljava/lang/String;Ljava/lang/String;ZZ)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			arg2,
			arg3
		);
	}
	
	// Methods
	QAndroidJniObject SyncAdapterType::newKey(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.SyncAdapterType",
			"newKey",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SyncAdapterType;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject SyncAdapterType::newKey(const QString &arg0, const QString &arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.SyncAdapterType",
			"newKey",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SyncAdapterType;",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jboolean SyncAdapterType::allowParallelSyncs()
	{
		return __thiz.callMethod<jboolean>(
			"allowParallelSyncs",
			"()Z"
		);
	}
	jint SyncAdapterType::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	jboolean SyncAdapterType::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring SyncAdapterType::getSettingsActivity()
	{
		return __thiz.callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint SyncAdapterType::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean SyncAdapterType::isAlwaysSyncable()
	{
		return __thiz.callMethod<jboolean>(
			"isAlwaysSyncable",
			"()Z"
		);
	}
	jboolean SyncAdapterType::isUserVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isUserVisible",
			"()Z"
		);
	}
	jboolean SyncAdapterType::supportsUploading()
	{
		return __thiz.callMethod<jboolean>(
			"supportsUploading",
			"()Z"
		);
	}
	jstring SyncAdapterType::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SyncAdapterType::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class SyncAdapterType : public __jni_impl::android::content::SyncAdapterType
	{
	public:
		SyncAdapterType(QAndroidJniObject obj) { __thiz = obj; }
		SyncAdapterType(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
		SyncAdapterType(jstring arg0, jstring arg1, jboolean arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::content

