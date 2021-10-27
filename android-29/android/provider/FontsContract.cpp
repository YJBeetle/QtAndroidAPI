#include "../content/Context.hpp"
#include "../graphics/Typeface.hpp"
#include "../os/CancellationSignal.hpp"
#include "../os/Handler.hpp"
#include "./FontRequest.hpp"
#include "./FontsContract_FontFamilyResult.hpp"
#include "./FontsContract_FontRequestCallback.hpp"
#include "./FontsContract.hpp"

namespace android::provider
{
	// Fields
	
	FontsContract::FontsContract(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject FontsContract::buildTypeface(android::content::Context arg0, android::os::CancellationSignal arg1, jarray arg2)
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
	QAndroidJniObject FontsContract::fetchFonts(android::content::Context arg0, android::os::CancellationSignal arg1, android::provider::FontRequest arg2)
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
	void FontsContract::requestFonts(android::content::Context arg0, android::provider::FontRequest arg1, android::os::Handler arg2, android::os::CancellationSignal arg3, android::provider::FontsContract_FontRequestCallback arg4)
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
} // namespace android::provider

