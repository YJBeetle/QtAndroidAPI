#pragma once

#ifndef ANDROID_MEDIA_DRMINITDATA_SCHEMEINITDATA
#define ANDROID_MEDIA_DRMINITDATA_SCHEMEINITDATA

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class DrmInitData_SchemeInitData : public __JniBaseClass
	{
	public:
		// Fields
		QAndroidJniObject data();
		QAndroidJniObject mimeType();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	QAndroidJniObject DrmInitData_SchemeInitData::data()
	{
		return __thiz.getObjectField(
			"data",
			"[B");
	}
	QAndroidJniObject DrmInitData_SchemeInitData::mimeType()
	{
		return __thiz.getObjectField(
			"mimeType",
			"Ljava/lang/String;");
	}
	
	// Constructors
	void DrmInitData_SchemeInitData::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.DrmInitData$SchemeInitData",
			"(V)V");
	}
	
	// Methods
	jboolean DrmInitData_SchemeInitData::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0);
	}
	jint DrmInitData_SchemeInitData::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class DrmInitData_SchemeInitData : public __jni_impl::android::media::DrmInitData_SchemeInitData
	{
	public:
		DrmInitData_SchemeInitData(QAndroidJniObject obj) { __thiz = obj; }
		DrmInitData_SchemeInitData()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_DRMINITDATA_SCHEMEINITDATA

