#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "../../../java/lang/StringBuffer.hpp"
#include "../../../java/text/FieldPosition.hpp"
#include "../../../java/text/ParsePosition.hpp"
#include "./SelectFormat.hpp"

namespace android::icu::text
{
	// Fields
	
	// QJniObject forward
	SelectFormat::SelectFormat(QJniObject obj) : java::text::Format(obj) {}
	
	// Constructors
	SelectFormat::SelectFormat(JString arg0)
		: java::text::Format(
			"android.icu.text.SelectFormat",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
	void SelectFormat::applyPattern(JString arg0)
	{
		callMethod<void>(
			"applyPattern",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		);
	}
	jboolean SelectFormat::equals(JObject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	JString SelectFormat::format(JString arg0)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0.object<jstring>()
		);
	}
	java::lang::StringBuffer SelectFormat::format(JObject arg0, java::lang::StringBuffer arg1, java::text::FieldPosition arg2)
	{
		return callObjectMethod(
			"format",
			"(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;",
			arg0.object<jobject>(),
			arg1.object(),
			arg2.object()
		);
	}
	jint SelectFormat::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	JObject SelectFormat::parseObject(JString arg0, java::text::ParsePosition arg1)
	{
		return callObjectMethod(
			"parseObject",
			"(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString SelectFormat::toPattern()
	{
		return callObjectMethod(
			"toPattern",
			"()Ljava/lang/String;"
		);
	}
	JString SelectFormat::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::icu::text

