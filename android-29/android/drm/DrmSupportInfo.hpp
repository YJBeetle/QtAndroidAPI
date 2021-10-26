#pragma once

#ifndef ANDROID_DRM_DRMSUPPORTINFO
#define ANDROID_DRM_DRMSUPPORTINFO

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::drm
{
	class DrmSupportInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring getDescription();
		void setDescription(jstring arg0);
		void setDescription(const QString &arg0);
		void addMimeType(jstring arg0);
		void addMimeType(const QString &arg0);
		void addFileSuffix(jstring arg0);
		void addFileSuffix(const QString &arg0);
		QAndroidJniObject getMimeTypeIterator();
		QAndroidJniObject getFileSuffixIterator();
		jstring getDescriprition();
	};
} // namespace __jni_impl::android::drm


namespace __jni_impl::android::drm
{
	// Fields
	
	// Constructors
	void DrmSupportInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmSupportInfo",
			"()V"
		);
	}
	
	// Methods
	jboolean DrmSupportInfo::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jint DrmSupportInfo::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring DrmSupportInfo::getDescription()
	{
		return __thiz.callObjectMethod(
			"getDescription",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void DrmSupportInfo::setDescription(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DrmSupportInfo::setDescription(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setDescription",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DrmSupportInfo::addMimeType(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addMimeType",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DrmSupportInfo::addMimeType(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"addMimeType",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	void DrmSupportInfo::addFileSuffix(jstring arg0)
	{
		__thiz.callMethod<void>(
			"addFileSuffix",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void DrmSupportInfo::addFileSuffix(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"addFileSuffix",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	QAndroidJniObject DrmSupportInfo::getMimeTypeIterator()
	{
		return __thiz.callObjectMethod(
			"getMimeTypeIterator",
			"()Ljava/util/Iterator;"
		);
	}
	QAndroidJniObject DrmSupportInfo::getFileSuffixIterator()
	{
		return __thiz.callObjectMethod(
			"getFileSuffixIterator",
			"()Ljava/util/Iterator;"
		);
	}
	jstring DrmSupportInfo::getDescriprition()
	{
		return __thiz.callObjectMethod(
			"getDescriprition",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmSupportInfo : public __jni_impl::android::drm::DrmSupportInfo
	{
	public:
		DrmSupportInfo(QAndroidJniObject obj) { __thiz = obj; }
		DrmSupportInfo()
		{
			__constructor();
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMSUPPORTINFO

