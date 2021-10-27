#include "./Layout_Alignment.hpp"

namespace android::text
{
	// Fields
	QAndroidJniObject Layout_Alignment::ALIGN_CENTER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_CENTER",
			"Landroid/text/Layout$Alignment;"
		);
	}
	QAndroidJniObject Layout_Alignment::ALIGN_NORMAL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_NORMAL",
			"Landroid/text/Layout$Alignment;"
		);
	}
	QAndroidJniObject Layout_Alignment::ALIGN_OPPOSITE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.text.Layout$Alignment",
			"ALIGN_OPPOSITE",
			"Landroid/text/Layout$Alignment;"
		);
	}
	
	Layout_Alignment::Layout_Alignment(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Layout_Alignment::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Layout$Alignment",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/Layout$Alignment;",
			arg0
		);
	}
	QAndroidJniObject Layout_Alignment::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Layout$Alignment",
			"valueOf",
			"(Ljava/lang/String;)Landroid/text/Layout$Alignment;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Layout_Alignment::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.Layout$Alignment",
			"values",
			"()[Landroid/text/Layout$Alignment;"
		).object<jarray>();
	}
} // namespace android::text

