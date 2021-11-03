#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "./RelativeDateTimeFormatter_Direction.hpp"

namespace android::icu::text
{
	// Fields
	android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::LAST()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"LAST",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::LAST_2()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"LAST_2",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::NEXT()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"NEXT",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::NEXT_2()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"NEXT_2",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::PLAIN()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"PLAIN",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::THIS()
	{
		return getStaticObjectField(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"THIS",
			"Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
	
	// QAndroidJniObject forward
	RelativeDateTimeFormatter_Direction::RelativeDateTimeFormatter_Direction(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	android::icu::text::RelativeDateTimeFormatter_Direction RelativeDateTimeFormatter_Direction::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"valueOf",
			"(Ljava/lang/String;)Landroid/icu/text/RelativeDateTimeFormatter$Direction;",
			arg0.object<jstring>()
		);
	}
	JArray RelativeDateTimeFormatter_Direction::values()
	{
		return callStaticObjectMethod(
			"android.icu.text.RelativeDateTimeFormatter$Direction",
			"values",
			"()[Landroid/icu/text/RelativeDateTimeFormatter$Direction;"
		);
	}
} // namespace android::icu::text

