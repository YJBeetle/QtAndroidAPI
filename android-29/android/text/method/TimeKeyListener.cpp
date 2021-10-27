#include "../../../java/util/Locale.hpp"
#include "./TimeKeyListener.hpp"

namespace android::text::method
{
	// Fields
	jcharArray TimeKeyListener::CHARACTERS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.method.TimeKeyListener",
			"CHARACTERS",
			"[C"
		).object<jcharArray>();
	}
	
	TimeKeyListener::TimeKeyListener(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TimeKeyListener::TimeKeyListener()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.TimeKeyListener",
			"()V"
		);
	}
	TimeKeyListener::TimeKeyListener(java::util::Locale &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.method.TimeKeyListener",
			"(Ljava/util/Locale;)V",
			arg0.__jniObject().object()
		);
	}
	
	// Methods
	QAndroidJniObject TimeKeyListener::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TimeKeyListener",
			"getInstance",
			"()Landroid/text/method/TimeKeyListener;"
		);
	}
	QAndroidJniObject TimeKeyListener::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.TimeKeyListener",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/method/TimeKeyListener;",
			arg0.__jniObject().object()
		);
	}
	jint TimeKeyListener::getInputType()
	{
		return __thiz.callMethod<jint>(
			"getInputType",
			"()I"
		);
	}
} // namespace android::text::method

