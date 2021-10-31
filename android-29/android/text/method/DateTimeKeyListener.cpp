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
	
	DateTimeKeyListener::DateTimeKeyListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateTimeKeyListener::DateTimeKeyListener()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DateTimeKeyListener",
			"()V"
		);
	}
	DateTimeKeyListener::DateTimeKeyListener(java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DateTimeKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject DateTimeKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DateTimeKeyListener",
			"getInstance",
			"()Landroid/text/method/DateTimeKeyListener;"
		);
	}
	QAndroidJniObject DateTimeKeyListener::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.DateTimeKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/DateTimeKeyListener;",
			arg0.__jniObject().object()
		);
	}
	jint DateTimeKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method

