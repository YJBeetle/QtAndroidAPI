#include "../../../java/util/Locale.hpp"
#include "./DigitsKeyListener.hpp"

namespace android::text::method
{
	// Fields
	
	// QAndroidJniObject forward
	DigitsKeyListener::DigitsKeyListener(QAndroidJniObject obj) : android::text::method::NumberKeyListener(obj) {}
	
	// Constructors
	DigitsKeyListener::DigitsKeyListener()
		: android::text::method::NumberKeyListener(
			"android.text.method.DigitsKeyListener",
			"()V"
		) {}
	DigitsKeyListener::DigitsKeyListener(java::util::Locale arg0)
		: android::text::method::NumberKeyListener(
			"android.text.method.DigitsKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	DigitsKeyListener::DigitsKeyListener(jboolean arg0, jboolean arg1)
		: android::text::method::NumberKeyListener(
			"android.text.method.DigitsKeyListener",
			"(ZZ)V",
			arg0,
			arg1
		) {}
	DigitsKeyListener::DigitsKeyListener(java::util::Locale arg0, jboolean arg1, jboolean arg2)
		: android::text::method::NumberKeyListener(
			"android.text.method.DigitsKeyListener",
			"(Ljava/util/Locale;ZZ)V",
			arg0.object(),
			arg1,
			arg2
		) {}
	
	// Methods
	QAndroidJniObject DigitsKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"()Landroid/text/method/DigitsKeyListener;"
		);
	}
	QAndroidJniObject DigitsKeyListener::getInstance(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(Ljava/lang/String;)Landroid/text/method/DigitsKeyListener;",
			arg0
		);
	}
	QAndroidJniObject DigitsKeyListener::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/DigitsKeyListener;",
			arg0.object()
		);
	}
	QAndroidJniObject DigitsKeyListener::getInstance(jboolean arg0, jboolean arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(ZZ)Landroid/text/method/DigitsKeyListener;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject DigitsKeyListener::getInstance(java::util::Locale arg0, jboolean arg1, jboolean arg2)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DigitsKeyListener",
			"getInstance",
			"(Ljava/util/Locale;ZZ)Landroid/text/method/DigitsKeyListener;",
			arg0.object(),
			arg1,
			arg2
		);
	}
	jstring DigitsKeyListener::filter(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, jint arg4, jint arg5)
	{
		return callObjectMethod(
			"filter",
			"(Ljava/lang/CharSequence;IILandroid/text/Spanned;II)Ljava/lang/CharSequence;",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4,
			arg5
		).object<jstring>();
	}
	jint DigitsKeyListener::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method

