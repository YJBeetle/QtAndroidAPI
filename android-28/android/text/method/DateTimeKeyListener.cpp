#include "../../../JCharArray.hpp"
#include "../../../java/util/Locale.hpp"
#include "./DateTimeKeyListener.hpp"

namespace android::text::method
{
	// Fields
	JCharArray DateTimeKeyListener::CHARACTERS()
	{
		return getStaticObjectField(
			"android.text.method.DateTimeKeyListener",
			"CHARACTERS",
			"[C"
		);
	}
	
	// QJniObject forward
	DateTimeKeyListener::DateTimeKeyListener(QJniObject obj) : android::text::method::NumberKeyListener(obj) {}
	
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
		return callStaticObjectMethod(
			"android.text.method.DateTimeKeyListener",
			"getInstance",
			"()Landroid/text/method/DateTimeKeyListener;"
		);
	}
	android::text::method::DateTimeKeyListener DateTimeKeyListener::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
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

