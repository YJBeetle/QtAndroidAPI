#pragma once

#ifndef ANDROID_CONTENT_SYNCADAPTERTYPE
#define ANDROID_CONTENT_SYNCADAPTERTYPE

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
		QAndroidJniObject accountType();
		QAndroidJniObject authority();
		jboolean isKey();
		
		// Constructors
		void __constructor(jstring arg0, jstring arg1, jboolean arg2, jboolean arg3);
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jboolean equals(jobject arg0);
		QAndroidJniObject toString();
		jint hashCode();
		jboolean isUserVisible();
		jboolean allowParallelSyncs();
		jboolean isAlwaysSyncable();
		jboolean supportsUploading();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		static QAndroidJniObject newKey(jstring arg0, jstring arg1);
		QAndroidJniObject getSettingsActivity();
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
			"Landroid/os/Parcelable$Creator;");
	}
	QAndroidJniObject SyncAdapterType::accountType()
	{
		return __thiz.getObjectField(
			"accountType",
			"Ljava/lang/String;");
	}
	QAndroidJniObject SyncAdapterType::authority()
	{
		return __thiz.getObjectField(
			"authority",
			"Ljava/lang/String;");
	}
	jboolean SyncAdapterType::isKey()
	{
		return __thiz.getField<jboolean>(
			"isKey");
	}
	
	// Constructors
	void SyncAdapterType::__constructor(jstring arg0, jstring arg1, jboolean arg2, jboolean arg3)
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncAdapterType",
			"(Ljava/lang/String;Ljava/lang/String;ZZ)V",
			arg0,
			arg1,
			arg2,
			arg3);
	}
	void SyncAdapterType::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncAdapterType",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jboolean SyncAdapterType::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	QAndroidJniObject SyncAdapterType::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint SyncAdapterType::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
	jboolean SyncAdapterType::isUserVisible()
	{
		return __thiz.callMethod<jboolean>(
			"isUserVisible",
			"()Z");
	}
	jboolean SyncAdapterType::allowParallelSyncs()
	{
		return __thiz.callMethod<jboolean>(
			"allowParallelSyncs",
			"()Z");
	}
	jboolean SyncAdapterType::isAlwaysSyncable()
	{
		return __thiz.callMethod<jboolean>(
			"isAlwaysSyncable",
			"()Z");
	}
	jboolean SyncAdapterType::supportsUploading()
	{
		return __thiz.callMethod<jboolean>(
			"supportsUploading",
			"()Z");
	}
	jint SyncAdapterType::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I");
	}
	void SyncAdapterType::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1);
	}
	QAndroidJniObject SyncAdapterType::newKey(jstring arg0, jstring arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.content.SyncAdapterType",
			"newKey",
			"(Ljava/lang/String;Ljava/lang/String;)Landroid/content/SyncAdapterType;",
			arg0,
			arg1);
	}
	QAndroidJniObject SyncAdapterType::getSettingsActivity()
	{
		return __thiz.callObjectMethod(
			"getSettingsActivity",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class SyncAdapterType : public __jni_impl::android::content::SyncAdapterType
	{
	public:
		SyncAdapterType(QAndroidJniObject obj) { __thiz = obj; }
		SyncAdapterType(jstring arg0, jstring arg1, jboolean arg2, jboolean arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
		SyncAdapterType(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_SYNCADAPTERTYPE

