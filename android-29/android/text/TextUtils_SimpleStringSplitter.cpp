#include "./TextUtils_SimpleStringSplitter.hpp"

namespace android::text
{
	// Fields
	
	TextUtils_SimpleStringSplitter::TextUtils_SimpleStringSplitter(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	TextUtils_SimpleStringSplitter::TextUtils_SimpleStringSplitter(jchar &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.text.TextUtils$SimpleStringSplitter",
			"(C)V",
			arg0
		);
	}
	
	// Methods
	jboolean TextUtils_SimpleStringSplitter::hasNext()
	{
		return __thiz.callMethod<jboolean>(
			"hasNext",
			"()Z"
		);
	}
	QAndroidJniObject TextUtils_SimpleStringSplitter::iterator()
	{
		return __thiz.callObjectMethod(
			"iterator",
			"()Ljava/util/Iterator;"
		);
	}
	jstring TextUtils_SimpleStringSplitter::next()
	{
		return __thiz.callObjectMethod(
			"next",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	void TextUtils_SimpleStringSplitter::remove()
	{
		__thiz.callMethod<void>(
			"remove",
			"()V"
		);
	}
	void TextUtils_SimpleStringSplitter::setString(jstring arg0)
	{
		__thiz.callMethod<void>(
			"setString",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	void TextUtils_SimpleStringSplitter::setString(const QString &arg0)
	{
		__thiz.callMethod<void>(
			"setString",
			"(Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
} // namespace android::text

