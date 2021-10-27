#include "./Normalizer2_Mode.hpp"

namespace android::icu::text
{
	// Fields
	QAndroidJniObject Normalizer2_Mode::COMPOSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"COMPOSE",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	QAndroidJniObject Normalizer2_Mode::COMPOSE_CONTIGUOUS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"COMPOSE_CONTIGUOUS",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	QAndroidJniObject Normalizer2_Mode::DECOMPOSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"DECOMPOSE",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	QAndroidJniObject Normalizer2_Mode::FCD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.icu.text.Normalizer2$Mode",
			"FCD",
			"Landroid/icu/text/Normalizer2$Mode;"
		);
	}
	
	Normalizer2_Mode::Normalizer2_Mode(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject Normalizer2_Mode::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2$Mode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/Normalizer2$Mode;",
			arg0
		);
	}
	QAndroidJniObject Normalizer2_Mode::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2$Mode",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/Normalizer2$Mode;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Normalizer2_Mode::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.icu.text.Normalizer2$Mode",
			"values",
			"()[Landroid/icu/text/Normalizer2$Mode;"
		).object<jarray>();
	}
} // namespace android::icu::text

