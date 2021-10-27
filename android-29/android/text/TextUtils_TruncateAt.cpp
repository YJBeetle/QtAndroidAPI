#include "./TextUtils_TruncateAt.hpp"

namespace android::text
{
	// Fields
	QAndroidJniObject TextUtils_TruncateAt::END()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"END",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	QAndroidJniObject TextUtils_TruncateAt::MARQUEE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"MARQUEE",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	QAndroidJniObject TextUtils_TruncateAt::MIDDLE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"MIDDLE",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	QAndroidJniObject TextUtils_TruncateAt::START()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.TextUtils$TruncateAt",
			"START",
			"Landroid/text/TextUtils$TruncateAt;"
		);
	}
	
	TextUtils_TruncateAt::TextUtils_TruncateAt(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject TextUtils_TruncateAt::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils$TruncateAt",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/TextUtils$TruncateAt;",
			arg0
		);
	}
	QAndroidJniObject TextUtils_TruncateAt::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils$TruncateAt",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/TextUtils$TruncateAt;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray TextUtils_TruncateAt::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils$TruncateAt",
			"values",
			"()[Landroid/text/TextUtils$TruncateAt;"
		).object<jarray>();
	}
} // namespace android::text

