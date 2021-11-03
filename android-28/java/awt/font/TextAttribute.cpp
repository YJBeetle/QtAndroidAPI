#include "../../lang/Boolean.hpp"
#include "../../lang/Float.hpp"
#include "../../lang/Integer.hpp"
#include "../../../JObject.hpp"
#include "../../../JString.hpp"
#include "./TextAttribute.hpp"

namespace java::awt::font
{
	// Fields
	java::awt::font::TextAttribute TextAttribute::BACKGROUND()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"BACKGROUND",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::BIDI_EMBEDDING()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"BIDI_EMBEDDING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::CHAR_REPLACEMENT()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"CHAR_REPLACEMENT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::FAMILY()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FAMILY",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::FONT()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FONT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::FOREGROUND()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FOREGROUND",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::INPUT_METHOD_HIGHLIGHT()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"INPUT_METHOD_HIGHLIGHT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::INPUT_METHOD_UNDERLINE()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"INPUT_METHOD_UNDERLINE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::JUSTIFICATION()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"JUSTIFICATION",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Float TextAttribute::JUSTIFICATION_FULL()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"JUSTIFICATION_FULL",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::JUSTIFICATION_NONE()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"JUSTIFICATION_NONE",
			"Ljava/lang/Float;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::KERNING()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"KERNING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Integer TextAttribute::KERNING_ON()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"KERNING_ON",
			"Ljava/lang/Integer;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::LIGATURES()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"LIGATURES",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Integer TextAttribute::LIGATURES_ON()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"LIGATURES_ON",
			"Ljava/lang/Integer;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::NUMERIC_SHAPING()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"NUMERIC_SHAPING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::POSTURE()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"POSTURE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Float TextAttribute::POSTURE_OBLIQUE()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"POSTURE_OBLIQUE",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::POSTURE_REGULAR()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"POSTURE_REGULAR",
			"Ljava/lang/Float;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::RUN_DIRECTION()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"RUN_DIRECTION",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Boolean TextAttribute::RUN_DIRECTION_LTR()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"RUN_DIRECTION_LTR",
			"Ljava/lang/Boolean;"
		);
	}
	java::lang::Boolean TextAttribute::RUN_DIRECTION_RTL()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"RUN_DIRECTION_RTL",
			"Ljava/lang/Boolean;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::SIZE()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SIZE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::STRIKETHROUGH()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"STRIKETHROUGH",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Boolean TextAttribute::STRIKETHROUGH_ON()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"STRIKETHROUGH_ON",
			"Ljava/lang/Boolean;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::SUPERSCRIPT()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SUPERSCRIPT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Integer TextAttribute::SUPERSCRIPT_SUB()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SUPERSCRIPT_SUB",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::SUPERSCRIPT_SUPER()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SUPERSCRIPT_SUPER",
			"Ljava/lang/Integer;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::SWAP_COLORS()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SWAP_COLORS",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Boolean TextAttribute::SWAP_COLORS_ON()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SWAP_COLORS_ON",
			"Ljava/lang/Boolean;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::TRACKING()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRACKING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Float TextAttribute::TRACKING_LOOSE()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRACKING_LOOSE",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::TRACKING_TIGHT()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRACKING_TIGHT",
			"Ljava/lang/Float;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::TRANSFORM()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRANSFORM",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::UNDERLINE()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_LOW_DASHED()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_DASHED",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_LOW_DOTTED()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_DOTTED",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_LOW_GRAY()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_GRAY",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_LOW_ONE_PIXEL()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_ONE_PIXEL",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_LOW_TWO_PIXEL()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_TWO_PIXEL",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_ON()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_ON",
			"Ljava/lang/Integer;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::WEIGHT()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_BOLD()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_BOLD",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_DEMIBOLD()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_DEMIBOLD",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_DEMILIGHT()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_DEMILIGHT",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_EXTRABOLD()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_EXTRABOLD",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_EXTRA_LIGHT()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_EXTRA_LIGHT",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_HEAVY()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_HEAVY",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_LIGHT()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_LIGHT",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_MEDIUM()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_MEDIUM",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_REGULAR()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_REGULAR",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_SEMIBOLD()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_SEMIBOLD",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_ULTRABOLD()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_ULTRABOLD",
			"Ljava/lang/Float;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::WIDTH()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Float TextAttribute::WIDTH_CONDENSED()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_CONDENSED",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WIDTH_EXTENDED()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_EXTENDED",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WIDTH_REGULAR()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_REGULAR",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WIDTH_SEMI_CONDENSED()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_SEMI_CONDENSED",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WIDTH_SEMI_EXTENDED()
	{
		return getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_SEMI_EXTENDED",
			"Ljava/lang/Float;"
		);
	}
	
	// QJniObject forward
	TextAttribute::TextAttribute(QJniObject obj) : java::text::AttributedCharacterIterator_Attribute(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::awt::font

