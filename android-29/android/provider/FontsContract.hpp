#pragma once

#include "../../__JniBaseClass.hpp"

namespace __jni_impl::android::content
{
	class Context;
}
namespace __jni_impl::android::graphics
{
	class Typeface;
}
namespace __jni_impl::android::os
{
	class CancellationSignal;
}
namespace __jni_impl::android::os
{
	class Handler;
}
namespace __jni_impl::android::provider
{
	class FontRequest;
}
namespace __jni_impl::android::provider
{
	class FontsContract_FontFamilyResult;
}
namespace __jni_impl::android::provider
{
	class FontsContract_FontRequestCallback;
}

namespace __jni_impl::android::provider
{
	class FontsContract : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject buildTypeface(__jni_impl::android::content::Context arg0, __jni_impl::android::os::CancellationSignal arg1, jarray arg2);
		static QAndroidJniObject fetchFonts(__jni_impl::android::content::Context arg0, __jni_impl::android::os::CancellationSignal arg1, __jni_impl::android::provider::FontRequest arg2);
		static void requestFonts(__jni_impl::android::content::Context arg0, __jni_impl::android::provider::FontRequest arg1, __jni_impl::android::os::Handler arg2, __jni_impl::android::os::CancellationSignal arg3, __jni_impl::android::provider::FontsContract_FontRequestCallback arg4);
	};
} // namespace __jni_impl::android::provider

#include "../content/Context.hpp"
#include "../graphics/Typeface.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/Handler.hpp"
#include "FontRequest.hpp"
#include "FontsContract_FontFamilyResult.hpp"
#include "FontsContract_FontRequestCallback.hpp"

namespace __jni_impl::android::provider
{
	// Fields
	
	// Constructors
	void FontsContract::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.provider.FontsContract",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject FontsContract::buildTypeface(__jni_impl::android::content::Context arg0, __jni_impl::android::os::CancellationSignal arg1, jarray arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.FontsContract",
			"buildTypeface",
			"(Landroid/content/Context;Landroid/os/CancellationSignal;[Landroid/provider/FontsContract$FontInfo;)Landroid/graphics/Typeface;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2
		);
	}
	QAndroidJniObject FontsContract::fetchFonts(__jni_impl::android::content::Context arg0, __jni_impl::android::os::CancellationSignal arg1, __jni_impl::android::provider::FontRequest arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.provider.FontsContract",
			"fetchFonts",
			"(Landroid/content/Context;Landroid/os/CancellationSignal;Landroid/provider/FontRequest;)Landroid/provider/FontsContract$FontFamilyResult;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object()
		);
	}
	void FontsContract::requestFonts(__jni_impl::android::content::Context arg0, __jni_impl::android::provider::FontRequest arg1, __jni_impl::android::os::Handler arg2, __jni_impl::android::os::CancellationSignal arg3, __jni_impl::android::provider::FontsContract_FontRequestCallback arg4)
	{
		QAndroidJniObject::callStaticMethod<void>(
			"android.provider.FontsContract",
			"requestFonts",
			"(Landroid/content/Context;Landroid/provider/FontRequest;Landroid/os/Handler;Landroid/os/CancellationSignal;Landroid/provider/FontsContract$FontRequestCallback;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object(),
			arg2.__jniObject().object(),
			arg3.__jniObject().object(),
			arg4.__jniObject().object()
		);
	}
} // namespace __jni_impl::android::provider

namespace android::provider
{
	class FontsContract : public __jni_impl::android::provider::FontsContract
	{
	public:
		FontsContract(QAndroidJniObject obj) { __thiz = obj; }
		FontsContract()
		{
			__constructor();
		}
	};
} // namespace android::provider

