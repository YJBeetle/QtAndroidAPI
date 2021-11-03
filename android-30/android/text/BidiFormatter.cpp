#include "../../JString.hpp"
#include "../../JString.hpp"
#include "../../java/util/Locale.hpp"
#include "./BidiFormatter.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	BidiFormatter::BidiFormatter(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	android::text::BidiFormatter BidiFormatter::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"()Landroid/text/BidiFormatter;"
		);
	}
	android::text::BidiFormatter BidiFormatter::getInstance(jboolean arg0)
	{
		return callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"(Z)Landroid/text/BidiFormatter;",
			arg0
		);
	}
	android::text::BidiFormatter BidiFormatter::getInstance(java::util::Locale arg0)
	{
		return callStaticObjectMethod(
			"android.text.BidiFormatter",
			"getInstance",
			"(Ljava/util/Locale;)Landroid/text/BidiFormatter;",
			arg0.object()
		);
	}
	jboolean BidiFormatter::getStereoReset()
	{
		return callMethod<jboolean>(
			"getStereoReset",
			"()Z"
		);
	}
	jboolean BidiFormatter::isRtl(JString arg0)
	{
		return callMethod<jboolean>(
			"isRtl",
			"(Ljava/lang/CharSequence;)Z",
			arg0.object<jstring>()
		);
	}
	jboolean BidiFormatter::isRtlContext()
	{
		return callMethod<jboolean>(
			"isRtlContext",
			"()Z"
		);
	}
	JString BidiFormatter::unicodeWrap(JString arg0)
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;)Ljava/lang/CharSequence;",
			arg0.object<jstring>()
		);
	}
	JString BidiFormatter::unicodeWrap(JString arg0, JObject arg1)
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object()
		);
	}
	JString BidiFormatter::unicodeWrap(JString arg0, jboolean arg1)
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Z)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1
		);
	}
	JString BidiFormatter::unicodeWrap(JString arg0, JObject arg1, jboolean arg2)
	{
		return callObjectMethod(
			"unicodeWrap",
			"(Ljava/lang/CharSequence;Landroid/text/TextDirectionHeuristic;Z)Ljava/lang/CharSequence;",
			arg0.object<jstring>(),
			arg1.object(),
			arg2
		);
	}
} // namespace android::text

