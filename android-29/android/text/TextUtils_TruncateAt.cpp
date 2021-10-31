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
	
	// QAndroidJniObject forward
	TextUtils_TruncateAt::TextUtils_TruncateAt(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
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
	jarray TextUtils_TruncateAt::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.TextUtils$TruncateAt",
			"values",
			"()[Landroid/text/TextUtils$TruncateAt;"
		).object<jarray>();
	}
} // namespace android::text

