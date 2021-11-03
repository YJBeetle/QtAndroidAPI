#include "./NumericShaper_Range.hpp"
#include "../../io/ObjectOutputStream.hpp"
#include "./NumericShaper.hpp"

namespace java::awt::font
{
	// Fields
	jint NumericShaper::ALL_RANGES()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ALL_RANGES"
		);
	}
	jint NumericShaper::ARABIC()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ARABIC"
		);
	}
	jint NumericShaper::BENGALI()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"BENGALI"
		);
	}
	jint NumericShaper::DEVANAGARI()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"DEVANAGARI"
		);
	}
	jint NumericShaper::EASTERN_ARABIC()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"EASTERN_ARABIC"
		);
	}
	jint NumericShaper::ETHIOPIC()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ETHIOPIC"
		);
	}
	jint NumericShaper::EUROPEAN()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"EUROPEAN"
		);
	}
	jint NumericShaper::GUJARATI()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"GUJARATI"
		);
	}
	jint NumericShaper::GURMUKHI()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"GURMUKHI"
		);
	}
	jint NumericShaper::KANNADA()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"KANNADA"
		);
	}
	jint NumericShaper::KHMER()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"KHMER"
		);
	}
	jint NumericShaper::LAO()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"LAO"
		);
	}
	jint NumericShaper::MALAYALAM()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MALAYALAM"
		);
	}
	jint NumericShaper::MONGOLIAN()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MONGOLIAN"
		);
	}
	jint NumericShaper::MYANMAR()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MYANMAR"
		);
	}
	jint NumericShaper::ORIYA()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ORIYA"
		);
	}
	jint NumericShaper::TAMIL()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TAMIL"
		);
	}
	jint NumericShaper::TELUGU()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TELUGU"
		);
	}
	jint NumericShaper::THAI()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"THAI"
		);
	}
	jint NumericShaper::TIBETAN()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TIBETAN"
		);
	}
	
	// QJniObject forward
	NumericShaper::NumericShaper(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	
	// Methods
	java::awt::font::NumericShaper NumericShaper::getContextualShaper(jint arg0)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(I)Ljava/awt/font/NumericShaper;",
			arg0
		);
	}
	java::awt::font::NumericShaper NumericShaper::getContextualShaper(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(Ljava/util/Set;)Ljava/awt/font/NumericShaper;",
			arg0.object()
		);
	}
	java::awt::font::NumericShaper NumericShaper::getContextualShaper(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(II)Ljava/awt/font/NumericShaper;",
			arg0,
			arg1
		);
	}
	java::awt::font::NumericShaper NumericShaper::getContextualShaper(JObject arg0, java::awt::font::NumericShaper_Range arg1)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(Ljava/util/Set;Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;",
			arg0.object(),
			arg1.object()
		);
	}
	java::awt::font::NumericShaper NumericShaper::getShaper(jint arg0)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getShaper",
			"(I)Ljava/awt/font/NumericShaper;",
			arg0
		);
	}
	java::awt::font::NumericShaper NumericShaper::getShaper(java::awt::font::NumericShaper_Range arg0)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getShaper",
			"(Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;",
			arg0.object()
		);
	}
	jboolean NumericShaper::equals(jobject arg0)
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	JObject NumericShaper::getRangeSet()
	{
		return callObjectMethod(
			"getRangeSet",
			"()Ljava/util/Set;"
		);
	}
	jint NumericShaper::getRanges()
	{
		return callMethod<jint>(
			"getRanges",
			"()I"
		);
	}
	jint NumericShaper::hashCode()
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jboolean NumericShaper::isContextual()
	{
		return callMethod<jboolean>(
			"isContextual",
			"()Z"
		);
	}
	void NumericShaper::shape(jcharArray arg0, jint arg1, jint arg2)
	{
		callMethod<void>(
			"shape",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void NumericShaper::shape(jcharArray arg0, jint arg1, jint arg2, jint arg3)
	{
		callMethod<void>(
			"shape",
			"([CIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void NumericShaper::shape(jcharArray arg0, jint arg1, jint arg2, java::awt::font::NumericShaper_Range arg3)
	{
		callMethod<void>(
			"shape",
			"([CIILjava/awt/font/NumericShaper$Range;)V",
			arg0,
			arg1,
			arg2,
			arg3.object()
		);
	}
	jstring NumericShaper::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace java::awt::font

