#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::drm
{
	class DrmUtils_ExtendedMetadataParser;
}

namespace __jni_impl::android::drm
{
	class DrmUtils : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject getExtendedMetadataParser(jbyteArray arg0);
	};
} // namespace __jni_impl::android::drm

#include "DrmUtils_ExtendedMetadataParser.hpp"

namespace __jni_impl::android::drm
{
	// Fields
	
	// Constructors
	void DrmUtils::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmUtils",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject DrmUtils::getExtendedMetadataParser(jbyteArray arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.drm.DrmUtils",
			"getExtendedMetadataParser",
			"([B)Landroid/drm/DrmUtils$ExtendedMetadataParser;",
			arg0
		);
	}
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmUtils : public __jni_impl::android::drm::DrmUtils
	{
	public:
		DrmUtils(QAndroidJniObject obj) { __thiz = obj; }
		DrmUtils()
		{
			__constructor();
		}
	};
} // namespace android::drm

