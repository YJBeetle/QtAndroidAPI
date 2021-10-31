#include "../../java/util/Locale.hpp"
#include "./BidiFormatter.hpp"

namespace android::text
{
	// Fields
	
	BidiFormatter::BidiFormatter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject BidiFormatter::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"()Landroid/text/BidiFormatter;"
		);
	}
	QAndroidJniObject BidiFormatter::getInstance(jboolean arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"(Z)Landroid/text/BidiFormatter;",
			arg0
		);
	}
	QAndroidJniObject BidiFormatter::getInstance(java::util::Locale arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/BidiFormatter;",
			arg0.__jniObject().object()
		);
	}
	jboolean BidiFormatter::getStereoReset()
	{
		return __thiz.callMethod<jboolean>(
			"getStereoReset",
			"()Z"
		);
	}
	jboolean BidiFormatter::isRtl(jstring arg0)
	{
		return __thiz.callMethod<jboolean>(
			"isRtl",
			"(Ljava/lang/CharSequence;)Z",
			arg0
		);
	}
	jboolean BidiFormatter::isRtlContext()
	{
		return __thiz.callMethod<jboolean>(
			"isRtlContext",
			"()Z"
		);
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0, __JniBaseClass arg1)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0, jboolean arg1)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Z)Ljava/lang/CharSequence;",
			arg0,
			arg1
		).object<jstring>();
	}
	jstring BidiFormatter::unicodeWrap(jstring arg0, __JniBaseClass arg1, jboolean arg2)
	{
		return __thiz.callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;Z)Ljava/lang/CharSequence;",
			arg0,
			arg1.__jniObject().object(),
			arg2
		).object<jstring>();
	}
} // namespace android::text

