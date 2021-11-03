#include "./TextPaint.hpp"
#include "../../JString.hpp"
#include "./TextShaper.hpp"

namespace android::text
{
	// Fields
	
	// QAndroidJniObject forward
	TextShaper::TextShaper(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	void TextShaper::shapeText(JString arg0, jint arg1, jint arg2, JObject arg3, android::text::TextPaint arg4, JObject arg5)
	{
		callStaticMethod<void>(
			"android.text.TextShaper",
			"shapeText",
			"(Ljava/lang/CharSequence;IILandroid/text/TextDirectionHeuristic;Landroid/text/TextPaint;Landroid/text/TextShaper$GlyphsConsumer;)V",
			arg0.object<jstring>(),
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
} // namespace android::text

