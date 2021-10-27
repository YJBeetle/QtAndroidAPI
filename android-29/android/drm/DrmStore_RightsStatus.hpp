#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::drm
{
	class DrmStore_RightsStatus : public __JniBaseClass
	{
	public:
		// Fields
		static jint RIGHTS_EXPIRED();
		static jint RIGHTS_INVALID();
		static jint RIGHTS_NOT_ACQUIRED();
		static jint RIGHTS_VALID();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::drm


namespace __jni_impl::android::drm
{
	// Fields
	jint DrmStore_RightsStatus::RIGHTS_EXPIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_EXPIRED"
		);
	}
	jint DrmStore_RightsStatus::RIGHTS_INVALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_INVALID"
		);
	}
	jint DrmStore_RightsStatus::RIGHTS_NOT_ACQUIRED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_NOT_ACQUIRED"
		);
	}
	jint DrmStore_RightsStatus::RIGHTS_VALID()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.drm.DrmStore$RightsStatus",
			"RIGHTS_VALID"
		);
	}
	
	// Constructors
	void DrmStore_RightsStatus::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmStore$RightsStatus",
			"()V"
		);
	}
	
	// Methods
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmStore_RightsStatus : public __jni_impl::android::drm::DrmStore_RightsStatus
	{
	public:
		DrmStore_RightsStatus(QAndroidJniObject obj) { __thiz = obj; }
		DrmStore_RightsStatus()
		{
			__constructor();
		}
	};
} // namespace android::drm

