#pragma once

#ifndef ANDROID_CONTENT_SYNCSTATS
#define ANDROID_CONTENT_SYNCSTATS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content
{
	class SyncStats : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject CREATOR();
		jlong numAuthExceptions();
		jlong numConflictDetectedExceptions();
		jlong numDeletes();
		jlong numEntries();
		jlong numInserts();
		jlong numIoExceptions();
		jlong numParseExceptions();
		jlong numSkippedEntries();
		jlong numUpdates();
		
		// Constructors
		void __constructor();
		void __constructor(__jni_impl::android::os::Parcel arg0);
		
		// Methods
		jstring toString();
		void clear();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
	};
} // namespace __jni_impl::android::content

#include "../os/Parcel.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject SyncStats::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.SyncStats",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jlong SyncStats::numAuthExceptions()
	{
		return __thiz.getField<jlong>(
			"numAuthExceptions"
		);
	}
	jlong SyncStats::numConflictDetectedExceptions()
	{
		return __thiz.getField<jlong>(
			"numConflictDetectedExceptions"
		);
	}
	jlong SyncStats::numDeletes()
	{
		return __thiz.getField<jlong>(
			"numDeletes"
		);
	}
	jlong SyncStats::numEntries()
	{
		return __thiz.getField<jlong>(
			"numEntries"
		);
	}
	jlong SyncStats::numInserts()
	{
		return __thiz.getField<jlong>(
			"numInserts"
		);
	}
	jlong SyncStats::numIoExceptions()
	{
		return __thiz.getField<jlong>(
			"numIoExceptions"
		);
	}
	jlong SyncStats::numParseExceptions()
	{
		return __thiz.getField<jlong>(
			"numParseExceptions"
		);
	}
	jlong SyncStats::numSkippedEntries()
	{
		return __thiz.getField<jlong>(
			"numSkippedEntries"
		);
	}
	jlong SyncStats::numUpdates()
	{
		return __thiz.getField<jlong>(
			"numUpdates"
		);
	}
	
	// Constructors
	void SyncStats::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncStats",
			"()V");
	}
	void SyncStats::__constructor(__jni_impl::android::os::Parcel arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncStats",
			"(Landroid/os/Parcel;)V",
			arg0.__jniObject().object());
	}
	
	// Methods
	jstring SyncStats::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SyncStats::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint SyncStats::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SyncStats::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
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
	class SyncStats : public __jni_impl::android::content::SyncStats
	{
	public:
		SyncStats(QAndroidJniObject obj) { __thiz = obj; }
		SyncStats()
		{
			__constructor();
		}
		SyncStats(__jni_impl::android::os::Parcel arg0)
		{
			__constructor(
				arg0);
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_SYNCSTATS

