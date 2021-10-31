#include "../../../java/util/Locale.hpp"
#include "./DateKeyListener.hpp"

namespace android::text::method
{
	// Fields
	jcharArray DateKeyListener::CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.DateKeyListener",
			"CHARACTERS",
			"[C"
		).object<jcharArray>();
	}
	
	// QAndroidJniObject forward
	DateKeyListener::DateKeyListener(QAndroidJniObject obj) : android::text::method::NumberKeyListener(obj) {}
	
	// Constructors
	DateKeyListener::DateKeyListener()
		: android::text::method::NumberKeyListener(
			"android.text.method.DateKeyListener",
			"()V"
		) {}
	DateKeyListener::DateKeyListener(java::util::Locale arg0)
		: android::text::method::NumberKeyListener(
			"android.text.method.DateKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.object()
		) {}
	
	// Methods
	QAndroidJniObject DateKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DateKeyListener",
			"getInstance",
			"()Landroid/text/method/DateKeyListener;"
		);
	}
	QAndroidJniObject DateKeyListener::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DateKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/DateKeyListener;",
			arg0.object()
		);
	}
	jint DateKeyListener::getInputType()
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method
