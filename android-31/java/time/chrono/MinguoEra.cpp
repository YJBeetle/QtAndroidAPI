#include "../../../JArray.hpp"
#include "../../../JString.hpp"
#include "../format/TextStyle.hpp"
#include "../../util/Locale.hpp"
#include "./MinguoEra.hpp"

namespace java::time::chrono
{
	// Fields
	java::time::chrono::MinguoEra MinguoEra::BEFORE_ROC()
	{
		return getStaticObjectField(
			"java.time.chrono.MinguoEra",
			"BEFORE_ROC",
			"Ljava/time/chrono/MinguoEra;"
		);
	}
	java::time::chrono::MinguoEra MinguoEra::ROC()
	{
		return getStaticObjectField(
			"java.time.chrono.MinguoEra",
			"ROC",
			"Ljava/time/chrono/MinguoEra;"
		);
	}
	
	// QAndroidJniObject forward
	MinguoEra::MinguoEra(QAndroidJniObject obj) : java::lang::Enum(obj) {}
	
	// Constructors
	
	// Methods
	java::time::chrono::MinguoEra MinguoEra::of(jint arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"of",
			"(I)Ljava/time/chrono/MinguoEra;",
			arg0
		);
	}
	java::time::chrono::MinguoEra MinguoEra::valueOf(JString arg0)
	{
		return callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/MinguoEra;",
			arg0.object<jstring>()
		);
	}
	JArray MinguoEra::values()
	{
		return callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"values",
			"()[Ljava/time/chrono/MinguoEra;"
		);
	}
	JString MinguoEra::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1) const
	{
		return callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.object(),
			arg1.object()
		);
	}
	jint MinguoEra::getValue() const
	{
		return callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace java::time::chrono

