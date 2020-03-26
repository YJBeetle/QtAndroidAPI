#pragma once

#ifndef ANDROID_CONTENT_SYNCRESULT
#define ANDROID_CONTENT_SYNCRESULT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class SyncStats;
}
namespace __jni_impl::android::os
{
	class Parcel;
}

namespace __jni_impl::android::content
{
	class SyncResult : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ALREADY_IN_PROGRESS();
		static QAndroidJniObject CREATOR();
		jboolean databaseError();
		jlong delayUntil();
		jboolean fullSyncRequested();
		jboolean moreRecordsToGet();
		jboolean partialSyncUnavailable();
		QAndroidJniObject stats();
		jboolean syncAlreadyInProgress();
		jboolean tooManyDeletions();
		jboolean tooManyRetries();
		
		// Constructors
		void __constructor();
		
		// Methods
		jstring toString();
		void clear();
		jint describeContents();
		void writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1);
		jboolean hasHardError();
		jboolean hasSoftError();
		jboolean madeSomeProgress();
		jstring toDebugString();
		jboolean hasError();
	};
} // namespace __jni_impl::android::content

#include "SyncStats.hpp"
#include "../os/Parcel.hpp"

namespace __jni_impl::android::content
{
	// Fields
	QAndroidJniObject SyncResult::ALREADY_IN_PROGRESS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.SyncResult",
			"ALREADY_IN_PROGRESS",
			"Landroid/content/SyncResult;"
		);
	}
	QAndroidJniObject SyncResult::CREATOR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.content.SyncResult",
			"CREATOR",
			"Landroid/os/Parcelable$Creator;"
		);
	}
	jboolean SyncResult::databaseError()
	{
		return __thiz.getField<jboolean>(
			"databaseError"
		);
	}
	jlong SyncResult::delayUntil()
	{
		return __thiz.getField<jlong>(
			"delayUntil"
		);
	}
	jboolean SyncResult::fullSyncRequested()
	{
		return __thiz.getField<jboolean>(
			"fullSyncRequested"
		);
	}
	jboolean SyncResult::moreRecordsToGet()
	{
		return __thiz.getField<jboolean>(
			"moreRecordsToGet"
		);
	}
	jboolean SyncResult::partialSyncUnavailable()
	{
		return __thiz.getField<jboolean>(
			"partialSyncUnavailable"
		);
	}
	QAndroidJniObject SyncResult::stats()
	{
		return __thiz.getObjectField(
			"stats",
			"Landroid/content/SyncStats;"
		);
	}
	jboolean SyncResult::syncAlreadyInProgress()
	{
		return __thiz.getField<jboolean>(
			"syncAlreadyInProgress"
		);
	}
	jboolean SyncResult::tooManyDeletions()
	{
		return __thiz.getField<jboolean>(
			"tooManyDeletions"
		);
	}
	jboolean SyncResult::tooManyRetries()
	{
		return __thiz.getField<jboolean>(
			"tooManyRetries"
		);
	}
	
	// Constructors
	void SyncResult::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.content.SyncResult",
			"()V");
	}
	
	// Methods
	jstring SyncResult::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void SyncResult::clear()
	{
		__thiz.callMethod<void>(
			"clear",
			"()V"
		);
	}
	jint SyncResult::describeContents()
	{
		return __thiz.callMethod<jint>(
			"describeContents",
			"()I"
		);
	}
	void SyncResult::writeToParcel(__jni_impl::android::os::Parcel arg0, jint arg1)
	{
		__thiz.callMethod<void>(
			"writeToParcel",
			"(Landroid/os/Parcel;I)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	jboolean SyncResult::hasHardError()
	{
		return __thiz.callMethod<jboolean>(
			"hasHardError",
			"()Z"
		);
	}
	jboolean SyncResult::hasSoftError()
	{
		return __thiz.callMethod<jboolean>(
			"hasSoftError",
			"()Z"
		);
	}
	jboolean SyncResult::madeSomeProgress()
	{
		return __thiz.callMethod<jboolean>(
			"madeSomeProgress",
			"()Z"
		);
	}
	jstring SyncResult::toDebugString()
	{
		return __thiz.callObjectMethod(
			"toDebugString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jboolean SyncResult::hasError()
	{
		return __thiz.callMethod<jboolean>(
			"hasError",
			"()Z"
		);
	}
} // namespace __jni_impl::android::content

namespace android::content
{
	class SyncResult : public __jni_impl::android::content::SyncResult
	{
	public:
		SyncResult(QAndroidJniObject obj) { __thiz = obj; }
		SyncResult()
		{
			__constructor();
		}
	};
} // namespace android::content

#endif // ANDROID_CONTENT_SYNCRESULT

