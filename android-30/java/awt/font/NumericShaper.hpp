#pragma once

#include "../../../JCharArray.hpp"
#include "../../../JIntArray.hpp"
#include "../../../JArray.hpp"
#include "./NumericShaper_Range.def.hpp"
#include "../../io/ObjectOutputStream.def.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./NumericShaper.def.hpp"

namespace java::awt::font
{
	// Fields
	inline jint NumericShaper::ALL_RANGES()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ALL_RANGES"
		);
	}
	inline jint NumericShaper::ARABIC()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ARABIC"
		);
	}
	inline jint NumericShaper::BENGALI()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"BENGALI"
		);
	}
	inline jint NumericShaper::DEVANAGARI()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"DEVANAGARI"
		);
	}
	inline jint NumericShaper::EASTERN_ARABIC()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"EASTERN_ARABIC"
		);
	}
	inline jint NumericShaper::ETHIOPIC()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ETHIOPIC"
		);
	}
	inline jint NumericShaper::EUROPEAN()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"EUROPEAN"
		);
	}
	inline jint NumericShaper::GUJARATI()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"GUJARATI"
		);
	}
	inline jint NumericShaper::GURMUKHI()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"GURMUKHI"
		);
	}
	inline jint NumericShaper::KANNADA()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"KANNADA"
		);
	}
	inline jint NumericShaper::KHMER()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"KHMER"
		);
	}
	inline jint NumericShaper::LAO()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"LAO"
		);
	}
	inline jint NumericShaper::MALAYALAM()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MALAYALAM"
		);
	}
	inline jint NumericShaper::MONGOLIAN()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MONGOLIAN"
		);
	}
	inline jint NumericShaper::MYANMAR()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MYANMAR"
		);
	}
	inline jint NumericShaper::ORIYA()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ORIYA"
		);
	}
	inline jint NumericShaper::TAMIL()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TAMIL"
		);
	}
	inline jint NumericShaper::TELUGU()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TELUGU"
		);
	}
	inline jint NumericShaper::THAI()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"THAI"
		);
	}
	inline jint NumericShaper::TIBETAN()
	{
		return getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TIBETAN"
		);
	}
	
	// Constructors
	
	// Methods
	inline java::awt::font::NumericShaper NumericShaper::getContextualShaper(jint arg0)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(I)Ljava/awt/font/NumericShaper;",
			arg0
		);
	}
	inline java::awt::font::NumericShaper NumericShaper::getContextualShaper(JObject arg0)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(Ljava/util/Set;)Ljava/awt/font/NumericShaper;",
			arg0.object()
		);
	}
	inline java::awt::font::NumericShaper NumericShaper::getContextualShaper(jint arg0, jint arg1)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(II)Ljava/awt/font/NumericShaper;",
			arg0,
			arg1
		);
	}
	inline java::awt::font::NumericShaper NumericShaper::getContextualShaper(JObject arg0, java::awt::font::NumericShaper_Range arg1)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(Ljava/util/Set;Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;",
			arg0.object(),
			arg1.object()
		);
	}
	inline java::awt::font::NumericShaper NumericShaper::getShaper(jint arg0)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getShaper",
			"(I)Ljava/awt/font/NumericShaper;",
			arg0
		);
	}
	inline java::awt::font::NumericShaper NumericShaper::getShaper(java::awt::font::NumericShaper_Range arg0)
	{
		return callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getShaper",
			"(Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;",
			arg0.object()
		);
	}
	inline jboolean NumericShaper::equals(JObject arg0) const
	{
		return callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0.object<jobject>()
		);
	}
	inline JObject NumericShaper::getRangeSet() const
	{
		return callObjectMethod(
			"getRangeSet",
			"()Ljava/util/Set;"
		);
	}
	inline jint NumericShaper::getRanges() const
	{
		return callMethod<jint>(
			"getRanges",
			"()I"
		);
	}
	inline jint NumericShaper::hashCode() const
	{
		return callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	inline jboolean NumericShaper::isContextual() const
	{
		return callMethod<jboolean>(
			"isContextual",
			"()Z"
		);
	}
	inline void NumericShaper::shape(JCharArray arg0, jint arg1, jint arg2) const
	{
		callMethod<void>(
			"shape",
			"([CII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2
		);
	}
	inline void NumericShaper::shape(JCharArray arg0, jint arg1, jint arg2, jint arg3) const
	{
		callMethod<void>(
			"shape",
			"([CIII)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3
		);
	}
	inline void NumericShaper::shape(JCharArray arg0, jint arg1, jint arg2, java::awt::font::NumericShaper_Range arg3) const
	{
		callMethod<void>(
			"shape",
			"([CIILjava/awt/font/NumericShaper$Range;)V",
			arg0.object<jcharArray>(),
			arg1,
			arg2,
			arg3.object()
		);
	}
	inline JString NumericShaper::toString() const
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace java::awt::font

// Base class headers

