#include "../../../JCharArray.hpp"
#include "../../../java/util/Locale.hpp"
#include "./DateKeyListener.hpp"

namespace android::text::method
{
	// Fields
	JCharArray DateKeyListener::CHARACTERS()
	{
		return getStaticObjectField(
			"android.text.method.DateKeyListener",
			"CHARACTERS",
			"[C"
		);
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
	android::text::method::DateKeyListener DateKeyListener::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.DateKeyListener",
			"getInstance",
			"()Landroid/text/method/DateKeyListener;"
		);
	}
	android::text::method::DateKeyListener DateKeyListener::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.text.method.DateKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/DateKeyListener;",
			arg0.object()
		);
	}
	jint DateKeyListener::getInputType() const
	{
		return callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method

