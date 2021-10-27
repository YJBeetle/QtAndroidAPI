#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::drm
{
	class DrmStore_DrmObjectType : public __JniBaseClass
	{
	public:
		// Fields
		static jint CONTENT();
		static jint RIGHTS_OBJECT();
		static jint TRIGGER_OBJECT();
		static jint UNKNOWN();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::drm


namespace __jni_impl::android::drm
{
	// Fields
	jint DrmStore_DrmObjectType::CONTENT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"CONTENT"
		);
	}
	jint DrmStore_DrmObjectType::RIGHTS_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"RIGHTS_OBJECT"
		);
	}
	jint DrmStore_DrmObjectType::TRIGGER_OBJECT()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"TRIGGER_OBJECT"
		);
	}
	jint DrmStore_DrmObjectType::UNKNOWN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$DrmObjectType",
			"UNKNOWN"
		);
	}
	
	// Constructors
	void DrmStore_DrmObjectType::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmStore$DrmObjectType",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmStore_DrmObjectType : public __jni_impl::android::drm::DrmStore_DrmObjectType
	{
	public:
		DrmStore_DrmObjectType(QAndroidJniObject obj) { __thiz = obj; }
		DrmStore_DrmObjectType()
		{
			__constructor();
		}
	};
} // namespace android::drm

