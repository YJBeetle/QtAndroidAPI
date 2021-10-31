#include "../format/TextStyle.hpp"
#include "../temporal/ValueRange.hpp"
#include "../../util/Locale.hpp"
#include "./HijrahEra.hpp"

namespace java::time::chrono
{
	// Fields
	QAndroidJniObject HijrahEra::AH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.HijrahEra",
			"AH",
			"Ljava/time/chrono/HijrahEra;"
		);
	}
	
	// QAndroidJniObject forward
	HijrahEra::HijrahEra(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject HijrahEra::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahEra",
			"of",
			"(I)Ljava/time/chrono/HijrahEra;",
			arg0
		);
	}
	QAndroidJniObject HijrahEra::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/HijrahEra;",
			arg0
		);
	}
	jarray HijrahEra::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.HijrahEra",
			"values",
			"()[Ljava/time/chrono/HijrahEra;"
		).object<jarray>();
	}
	jstring HijrahEra::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	jint HijrahEra::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
	QAndroidJniObject HijrahEra::range(__JniBaseClass arg0)
	{
		return callObjectMethod(
			"range",
			"(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;",
			arg0.object()
		);
	}
} // namespace java::time::chrono

