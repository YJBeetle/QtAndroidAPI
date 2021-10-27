#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::media
{
	class MicrophoneInfo_Coordinate3F : public __JniBaseClass
	{
	public:
		// Fields
		jfloat x();
		jfloat y();
		jfloat z();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
	};
} // namespace __jni_impl::android::media


namespace __jni_impl::android::media
{
	// Fields
	jfloat MicrophoneInfo_Coordinate3F::x()
	{
		return __thiz.getField<jfloat>(
			"x"
		);
	}
	jfloat MicrophoneInfo_Coordinate3F::y()
	{
		return __thiz.getField<jfloat>(
			"y"
		);
	}
	jfloat MicrophoneInfo_Coordinate3F::z()
	{
		return __thiz.getField<jfloat>(
			"z"
		);
	}
	
	// Constructors
	void MicrophoneInfo_Coordinate3F::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.MicrophoneInfo$Coordinate3F",
			"(V)V");
	}
	
	// Methods
	jboolean MicrophoneInfo_Coordinate3F::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class MicrophoneInfo_Coordinate3F : public __jni_impl::android::media::MicrophoneInfo_Coordinate3F
	{
	public:
		MicrophoneInfo_Coordinate3F(QAndroidJniObject obj) { __thiz = obj; }
		MicrophoneInfo_Coordinate3F()
		{
			__constructor();
		}
	};
} // namespace android::media

