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
	
	DateKeyListener::DateKeyListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	DateKeyListener::DateKeyListener()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DateKeyListener",
			"()V"
		);
	}
	DateKeyListener::DateKeyListener(java::util::Locale arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.DateKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
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
			arg0.__jniObject().object()
		);
	}
	jint DateKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method

