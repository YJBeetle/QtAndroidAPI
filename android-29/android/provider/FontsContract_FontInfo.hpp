#pragma once

#ifndef ANDROID_PROVIDER_FONTSCONTRACT_FONTINFO
#define ANDROID_PROVIDER_FONTSCONTRACT_FONTINFO

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::net
{
	class Uri;
}

namespace __jni_impl::android::provider
{
	class FontsContract_FontInfo : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		jint getWeight();
		jboolean isItalic();
		QAndroidJniObject getUri();
		jint getTtcIndex();
		QAndroidJniObject getAxes();
		jint getResultCode();
	};
} // namespace __jni_impl::android::provider

#include "../net/Uri.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void FontsContract_FontInfo::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.FontsContract$FontInfo",
			"(V)V");
	}
	
	// Methods
	jint FontsContract_FontInfo::getWeight()
	{
		return __thiz.callMethod<jint>(
			"getWeight",
			"()I");
	}
	jboolean FontsContract_FontInfo::isItalic()
	{
		return __thiz.callMethod<jboolean>(
			"isItalic",
			"()Z");
	}
	QAndroidJniObject FontsContract_FontInfo::getUri()
	{
		return __thiz.callObjectMethod(
			"getUri",
			"()Landroid/net/Uri;");
	}
	jint FontsContract_FontInfo::getTtcIndex()
	{
		return __thiz.callMethod<jint>(
			"getTtcIndex",
			"()I");
	}
	QAndroidJniObject FontsContract_FontInfo::getAxes()
	{
		return __thiz.callObjectMethod(
			"getAxes",
			"()[Landroid/graphics/fonts/FontVariationAxis;");
	}
	jint FontsContract_FontInfo::getResultCode()
	{
		return __thiz.callMethod<jint>(
			"getResultCode",
			"()I");
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class FontsContract_FontInfo : public __jni_impl::android::provider::FontsContract_FontInfo
	{
	public:
		FontsContract_FontInfo(QAndroidJniObject obj) { __thiz = obj; }
		FontsContract_FontInfo()
		{
			__constructor();
		}
	};
} // namespace android::provider

#endif // ANDROID_PROVIDER_FONTSCONTRACT_FONTINFO

