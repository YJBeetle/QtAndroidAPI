#pragma once

#ifndef ANDROID_MEDIA_SESSION2COMMAND_RESULT
#define ANDROID_MEDIA_SESSION2COMMAND_RESULT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Bundle;
}

namespace __jni_impl::android::media
{
	class Session2Command_Result : public __JniBaseClass
	{
	public:
		// Fields
		static jint RESULT_ERROR_UNKNOWN_ERROR();
		static jint RESULT_INFO_SKIPPED();
		static jint RESULT_SUCCESS();
		
		// Constructors
		void __constructor(jint arg0, __jni_impl::android::os::Bundle arg1);
		
		// Methods
		jint getResultCode();
		QAndroidJniObject getResultData();
	};
} // namespace __jni_impl::android::media

#include "../os/Bundle.hpp"

namespace __jni_impl::android::media
{
	// Fields
	jint Session2Command_Result::RESULT_ERROR_UNKNOWN_ERROR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_ERROR_UNKNOWN_ERROR"
		);
	}
	jint Session2Command_Result::RESULT_INFO_SKIPPED()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_INFO_SKIPPED"
		);
	}
	jint Session2Command_Result::RESULT_SUCCESS()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.media.Session2Command$Result",
			"RESULT_SUCCESS"
		);
	}
	
	// Constructors
	void Session2Command_Result::__constructor(jint arg0, __jni_impl::android::os::Bundle arg1)
	{
		__thiz = QAndroidJniObject(
			"android.media.Session2Command$Result",
			"(ILandroid/os/Bundle;)V",
			arg0,
			arg1.__jniObject().object());
	}
	
	// Methods
	jint Session2Command_Result::getResultCode()
	{
		return __thiz.callMethod<jint>(
			"getResultCode",
			"()I"
		);
	}
	QAndroidJniObject Session2Command_Result::getResultData()
	{
		return __thiz.callObjectMethod(
			"getResultData",
			"()Landroid/os/Bundle;"
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class Session2Command_Result : public __jni_impl::android::media::Session2Command_Result
	{
	public:
		Session2Command_Result(QAndroidJniObject obj) { __thiz = obj; }
		Session2Command_Result(jint arg0, __jni_impl::android::os::Bundle arg1)
		{
			__constructor(
				arg0,
				arg1);
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_SESSION2COMMAND_RESULT

