#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::graphics
{
	class Rect;
}
namespace __jni_impl::android::os
{
	class Parcel;
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
		jstring getText();
	};
} // namespace __jni_impl::android::media

#include "../graphics/Rect.hpp"
#include "../os/Parcel.hpp"

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
			"()Landroid/graphics/Rect;"
		);
	}
	jstring TimedText::getText()
	{
		return __thiz.callObjectMethod(
			"getText",
			"()Ljava/lang/String;"
		).object<jstring>();
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

