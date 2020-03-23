#pragma once

#ifndef ANDROID_DRM_DRMUTILS_EXTENDEDMETADATAPARSER
#define ANDROID_DRM_DRMUTILS_EXTENDEDMETADATAPARSER

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::drm
{
	class DrmUtils_ExtendedMetadataParser : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject get(jstring arg0);
		QAndroidJniObject iterator();
		QAndroidJniObject keyIterator();
	};
} // namespace __jni_impl::android::drm


namespace __jni_impl::android::drm
{
	// Fields
	
	// Constructors
	void DrmUtils_ExtendedMetadataParser::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.drm.DrmUtils$ExtendedMetadataParser",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DrmUtils_ExtendedMetadataParser::get(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0);
	}
	QAndroidJniObject DrmUtils_ExtendedMetadataParser::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;");
	}
	QAndroidJniObject DrmUtils_ExtendedMetadataParser::keyIterator()
	{
		return __thiz.callObjectMethod(
			"keyIterator",
			"()Ljava/util/Iterator;");
	}
} // namespace __jni_impl::android::drm

namespace android::drm
{
	class DrmUtils_ExtendedMetadataParser : public __jni_impl::android::drm::DrmUtils_ExtendedMetadataParser
	{
	public:
		DrmUtils_ExtendedMetadataParser(QAndroidJniObject obj) { __thiz = obj; }
		DrmUtils_ExtendedMetadataParser()
		{
			__constructor();
		}
	};
} // namespace android::drm

#endif // ANDROID_DRM_DRMUTILS_EXTENDEDMETADATAPARSER

