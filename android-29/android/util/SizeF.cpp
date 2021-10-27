#include "./SizeF.hpp"

namespace android::util
{
	// Fields
	
	SizeF::SizeF(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SizeF::SizeF(jfloat &arg0, jfloat &arg1)
	{
		__thiz = QAndroidJniObject(
			"android.util.SizeF",
			"(FF)V",
			arg0,
			arg1
		);
	}
	
	// Methods
	QAndroidJniObject SizeF::parseSizeF(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.SizeF",
			"parseSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			arg0
		);
	}
	QAndroidJniObject SizeF::parseSizeF(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.util.SizeF",
			"parseSizeF",
			"(Ljava/lang/String;)Landroid/util/SizeF;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean SizeF::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jfloat SizeF::getHeight()
	{
		return __thiz.callMethod<jfloat>(
			"getHeight",
			"()F"
		);
	}
	jfloat SizeF::getWidth()
	{
		return __thiz.callMethod<jfloat>(
			"getWidth",
			"()F"
		);
	}
	jint SizeF::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jstring SizeF::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::util

