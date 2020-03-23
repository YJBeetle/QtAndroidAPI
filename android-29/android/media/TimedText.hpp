#pragma once

#ifndef ANDROID_MEDIA_TIMEDTEXT
#define ANDROID_MEDIA_TIMEDTEXT

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::os
{
	class Parcel;
}
namespace __jni_impl::android::graphics
{
	class Rect;
}

namespace __jni_impl::android::media
{
	class TimedText : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject getBounds();
		QAndroidJniObject getText();
	};
} // namespace __jni_impl::android::media

#include "../os/Parcel.hpp"
#include "../graphics/Rect.hpp"

namespace __jni_impl::android::media
{
	// Fields
	
	// Constructors
	void TimedText::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.media.TimedText",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TimedText::getBounds()
	{
		return __thiz.callObjectMethod(
			"getBounds",
			"()Landroid/graphics/Rect;");
	}
	QAndroidJniObject TimedText::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/String;");
	}
} // namespace __jni_impl::android::media

namespace android::media
{
	class TimedText : public __jni_impl::android::media::TimedText
	{
	public:
		TimedText(QAndroidJniObject obj) { __thiz = obj; }
		TimedText()
		{
			__constructor();
		}
	};
} // namespace android::media

#endif // ANDROID_MEDIA_TIMEDTEXT

