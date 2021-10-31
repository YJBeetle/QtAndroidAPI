#include "../../../java/util/Locale.hpp"
#include "./DateTimeKeyListener.hpp"

namespace android::text::method
{
	// Fields
	jcharArray DateTimeKeyListener::CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.DateTimeKeyListener",
			"CHARACTERS",
			"[C"
		).object<jcharArray>();
	}
	
	// QAndroidJniObject forward
	DateTimeKeyListener::DateTimeKeyListener(QAndroidJniObject obj) : android::text::method::NumberKeyListener(obj) {}
	
	// Constructors
	DateTimeKeyListener::DateTimeKeyListener()
		: android::text::method::NumberKeyListener(
			"android.text.method.DateTimeKeyListener",
			"()V"
		) {}
	DateTimeKeyListener::DateTimeKeyListener(java::util::Locale arg0)
		: android::text::method::NumberKeyListener(
			"android.text.method.DateTimeKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	android::text::method::DateTimeKeyListener DateTimeKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DateTimeKeyListener",
			"getInstance",
			"()Landroid/text/method/DateTimeKeyListener;"
		);
	}
	android::text::method::DateTimeKeyListener DateTimeKeyListener::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DateTimeKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/DateTimeKeyListener;",
			arg0.object()
		);
	}
	jint DateTimeKeyListener::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method

