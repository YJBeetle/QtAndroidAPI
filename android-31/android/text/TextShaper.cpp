#include "./TextPaint.hpp"
#include "./TextShaper.hpp"

namespace android::text
{
	// Fields
	
	// QJniObject forward
	TextShaper::TextShaper(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	
	// Methods
	void TextShaper::shapeText(jstring arg0, jint arg1, jint arg2, __JniBaseClass arg3, android::text::TextPaint arg4, __JniBaseClass arg5)
	{
		callStaticMethod<void>(
			"android.text.TextShaper",
			"shapeText",
			"(Ljava/lang/CharSequence;IILandroid/text/TextDirectionHeuristic;Landroid/text/TextPaint;Landroid/text/TextShaper$GlyphsConsumer;)V",
			arg0,
			arg1,
			arg2,
			arg3.object(),
			arg4.object(),
			arg5.object()
		);
	}
} // namespace android::text

