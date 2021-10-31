#include "../format/TextStyle.hpp"
#include "../../util/Locale.hpp"
#include "./ThaiBuddhistEra.hpp"

namespace java::time::chrono
{
	// Fields
	QAndroidJniObject ThaiBuddhistEra::BE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.ThaiBuddhistEra",
			"BE",
			"Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	QAndroidJniObject ThaiBuddhistEra::BEFORE_BE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.ThaiBuddhistEra",
			"BEFORE_BE",
			"Ljava/time/chrono/ThaiBuddhistEra;"
		);
	}
	
	// QAndroidJniObject forward
	ThaiBuddhistEra::ThaiBuddhistEra(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	QAndroidJniObject ThaiBuddhistEra::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"of",
			"(I)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0
		);
	}
	QAndroidJniObject ThaiBuddhistEra::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/ThaiBuddhistEra;",
			arg0
		);
	}
	jarray ThaiBuddhistEra::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.ThaiBuddhistEra",
			"values",
			"()[Ljava/time/chrono/ThaiBuddhistEra;"
		).object<jarray>();
	}
	jstring ThaiBuddhistEra::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		).object<jstring>();
	}
	jint ThaiBuddhistEra::getValue()
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace java::time::chrono
