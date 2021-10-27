#pragma once

#ifndef ANDROID_DRM_DRMRIGHTS
#define ANDROID_DRM_DRMRIGHTS

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::drm
{
	class ProcessedData;
}
namespace __jni_impl::java::io
{
	class File;
}

namespace __jni_impl::android::drm
{
	class DrmRights : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor(__jni_impl::android::drm::ProcessedData arg0, jstring arg1);
		void __constructor(__jni_impl::android::drm::ProcessedData arg0, const QString &arg1);
		void __constructor(__jni_impl::java::io::File arg0, jstring arg1);
		void __constructor(__jni_impl::java::io::File arg0, const QString &arg1);
		void __constructor(jstring arg0, jstring arg1);
		void __constructor(const QString &arg0, const QString &arg1);
		void __constructor(jstring arg0, jstring arg1, jstring arg2);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2);
		void __constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3);
		void __constructor(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3);
		
		// Methods
		jstring getAccountId();
		jbyteArray getData();
		jstring getMimeType();
		jstring getSubscriptionId();
	};
} // namespace __jni_impl::android::drm

#include "ProcessedData.hpp"
#include "../../java/io/File.hpp"

namespace __jni_impl::android::drm
{
	// Fields
	
	// Constructors
	void DrmRights::__constructor(__jni_impl::android::drm::ProcessedData arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Landroid/drm/ProcessedData;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DrmRights::__constructor(__jni_impl::android::drm::ProcessedData arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Landroid/drm/ProcessedData;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DrmRights::__constructor(__jni_impl::java::io::File arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			arg1
		);
	}
	void DrmRights::__constructor(__jni_impl::java::io::File arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/io/File;Ljava/lang/String;)V",
			arg0.__jniObject().object(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DrmRights::__constructor(jstring arg0, jstring arg1)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void DrmRights::__constructor(const QString &arg0, const QString &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	void DrmRights::__constructor(jstring arg0, jstring arg1, jstring arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2
		);
	}
	void DrmRights::__constructor(const QString &arg0, const QString &arg1, const QString &arg2)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>()
		);
	}
	void DrmRights::__constructor(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void DrmRights::__constructor(const QString &arg0, const QString &arg1, const QString &arg2, const QString &arg3)
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmRights",
			"(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>(),
			QAndroidJniObject::fromString(arg2).object<jstring>(),
			QAndroidJniObject::fromString(arg3).object<jstring>()
		);
	}
	
	// Methods
	jstring DrmRights::getAccountId()
	{
		return __thiz.callObjectMethod(
			"getAccountId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jbyteArray DrmRights::getData()
	{
		return __thiz.callObjectMethod(
			"getData",
			"()[B"
		).object<jbyteArray>();
	}
	jstring DrmRights::getMimeType()
	{
		return __thiz.callObjectMethod(
			"getMimeType",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring DrmRights::getSubscriptionId()
	{
		return __thiz.callObjectMethod(
			"getSubscriptionId",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmRights : public __jni_impl::android::drm::DrmRights
	{
	public:
		DrmRights(QAndroidJniObject obj) { __thiz = obj; }
		DrmRights(__jni_impl::android::drm::ProcessedData arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DrmRights(__jni_impl::java::io::File arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DrmRights(jstring arg0, jstring arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
		DrmRights(jstring arg0, jstring arg1, jstring arg2)
		{
			__constructor(
				arg0,
				arg1,
				arg2);
		}
		DrmRights(jstring arg0, jstring arg1, jstring arg2, jstring arg3)
		{
			__constructor(
				arg0,
				arg1,
				arg2,
				arg3);
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMRIGHTS

