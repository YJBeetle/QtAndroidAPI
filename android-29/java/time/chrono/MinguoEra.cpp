#include "../format/TextStyle.hpp"
#include "../../util/Locale.hpp"
#include "./MinguoEra.hpp"

namespace java::time::chrono
{
	// Fields
	QAndroidJniObject MinguoEra::BEFORE_ROC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.MinguoEra",
			"BEFORE_ROC",
			"Ljava/time/chrono/MinguoEra;"
		);
	}
	QAndroidJniObject MinguoEra::ROC()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.chrono.MinguoEra",
			"ROC",
			"Ljava/time/chrono/MinguoEra;"
		);
	}
	
	MinguoEra::MinguoEra(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	QAndroidJniObject MinguoEra::of(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"of",
			"(I)Ljava/time/chrono/MinguoEra;",
			arg0
		);
	}
	QAndroidJniObject MinguoEra::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/chrono/MinguoEra;",
			arg0
		);
	}
	jarray MinguoEra::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.chrono.MinguoEra",
			"values",
			"()[Ljava/time/chrono/MinguoEra;"
		).object<jarray>();
	}
	jstring MinguoEra::getDisplayName(java::time::format::TextStyle arg0, java::util::Locale arg1)
	{
		return __thiz.callObjectMethod(
			"getDisplayName",
			"(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		).object<jstring>();
	}
	jint MinguoEra::getValue()
	{
		return __thiz.callMethod<jint>(
			"getValue",
			"()I"
		);
	}
} // namespace java::time::chrono

