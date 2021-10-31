#include "../../io/ObjectInputStream.hpp"
#include "../LocalDate.hpp"
#include "../format/TextStyle.hpp"
#include "../temporal/ValueRange.hpp"
#include "../../util/Locale.hpp"
#include "./JapaneseEra.hpp"

namespace java::time::chrono
{
	// Fields
	QAndroidJniObject JapaneseEra::HEISEI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"HEISEI",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	QAndroidJniObject JapaneseEra::MEIJI()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"MEIJI",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	QAndroidJniObject JapaneseEra::REIWA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"REIWA",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	QAndroidJniObject JapaneseEra::SHOWA()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"SHOWA",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	QAndroidJniObject JapaneseEra::TAISHO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.JapaneseEra",
			"TAISHO",
			"Ljava/time/chrono/JapaneseEra;"
		);
	}
	
	// QAndroidJniObject forward
	JapaneseEra::JapaneseEra(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject JapaneseEra::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"of",
			"(I)Ljava/time/chrono/JapaneseEra;",
			arg0
		);
	}
	QAndroidJniObject JapaneseEra::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/JapaneseEra;",
			arg0
		);
	}
	jarray JapaneseEra::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.JapaneseEra",
			"values",
			"()[Ljava/time/chrono/JapaneseEra;"
		).object<jarray>();
	}
	jstring JapaneseEra::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	jint JapaneseEra::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	QAndroidJniObject JapaneseEra::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
	jstring JapaneseEra::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::time::chrono

