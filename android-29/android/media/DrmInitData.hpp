#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::media
{
	class DrmInitData_SchemeInitData;
}
namespace __jni_impl::java::util
{
	class UUID;
}

namespace __jni_impl::android::media
{
	class DrmInitData : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject get(__jni_impl::java::util::UUID arg0);
	};
} // namespace __jni_impl::android::media

#include "./DrmInitData_SchemeInitData.hpp"
#include "../../java/util/UUID.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void DrmInitData::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.DrmInitData",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DrmInitData::get(__jni_impl::java::util::UUID arg0)
	{
		return __thiz.callObjectMethod(
			"get",
			"(Ljava/util/UUID;)Landroid/media/DrmInitData$SchemeInitData;",
			arg0.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class DrmInitData : public __jni_impl::android::media::DrmInitData
	{
	public:
		DrmInitData(QAndroidJniObject obj) { __thiz = obj; }
		DrmInitData()
		{
			__constructor();
		}
	};
} // namespace android::media

