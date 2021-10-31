#include "../../lang/Boolean.hpp"
#include "../../lang/Float.hpp"
#include "../../lang/Integer.hpp"
#include "./TextAttribute.hpp"

namespace java::awt::font
{
	// Fields
	java::awt::font::TextAttribute TextAttribute::BACKGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"BACKGROUND",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::BIDI_EMBEDDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"BIDI_EMBEDDING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::CHAR_REPLACEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"CHAR_REPLACEMENT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::FAMILY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FAMILY",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::FONT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FONT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::FOREGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FOREGROUND",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::INPUT_METHOD_HIGHLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"INPUT_METHOD_HIGHLIGHT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::INPUT_METHOD_UNDERLINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"INPUT_METHOD_UNDERLINE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::JUSTIFICATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"JUSTIFICATION",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Float TextAttribute::JUSTIFICATION_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"JUSTIFICATION_FULL",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::JUSTIFICATION_NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"JUSTIFICATION_NONE",
			"Ljava/lang/Float;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::KERNING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"KERNING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Integer TextAttribute::KERNING_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"KERNING_ON",
			"Ljava/lang/Integer;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::LIGATURES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"LIGATURES",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Integer TextAttribute::LIGATURES_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"LIGATURES_ON",
			"Ljava/lang/Integer;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::NUMERIC_SHAPING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"NUMERIC_SHAPING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::POSTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"POSTURE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Float TextAttribute::POSTURE_OBLIQUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"POSTURE_OBLIQUE",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::POSTURE_REGULAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"POSTURE_REGULAR",
			"Ljava/lang/Float;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::RUN_DIRECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"RUN_DIRECTION",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Boolean TextAttribute::RUN_DIRECTION_LTR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"RUN_DIRECTION_LTR",
			"Ljava/lang/Boolean;"
		);
	}
	java::lang::Boolean TextAttribute::RUN_DIRECTION_RTL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"RUN_DIRECTION_RTL",
			"Ljava/lang/Boolean;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SIZE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::STRIKETHROUGH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"STRIKETHROUGH",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Boolean TextAttribute::STRIKETHROUGH_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"STRIKETHROUGH_ON",
			"Ljava/lang/Boolean;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::SUPERSCRIPT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SUPERSCRIPT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Integer TextAttribute::SUPERSCRIPT_SUB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SUPERSCRIPT_SUB",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::SUPERSCRIPT_SUPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SUPERSCRIPT_SUPER",
			"Ljava/lang/Integer;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::SWAP_COLORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SWAP_COLORS",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Boolean TextAttribute::SWAP_COLORS_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SWAP_COLORS_ON",
			"Ljava/lang/Boolean;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::TRACKING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRACKING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Float TextAttribute::TRACKING_LOOSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRACKING_LOOSE",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::TRACKING_TIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRACKING_TIGHT",
			"Ljava/lang/Float;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::TRANSFORM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRANSFORM",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::UNDERLINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_LOW_DASHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_DASHED",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_LOW_DOTTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_DOTTED",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_LOW_GRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_GRAY",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_LOW_ONE_PIXEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_ONE_PIXEL",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_LOW_TWO_PIXEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_TWO_PIXEL",
			"Ljava/lang/Integer;"
		);
	}
	java::lang::Integer TextAttribute::UNDERLINE_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_ON",
			"Ljava/lang/Integer;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::WEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_BOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_BOLD",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_DEMIBOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_DEMIBOLD",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_DEMILIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_DEMILIGHT",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_EXTRABOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_EXTRABOLD",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_EXTRA_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_EXTRA_LIGHT",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_HEAVY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_HEAVY",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_LIGHT",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_MEDIUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_MEDIUM",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_REGULAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_REGULAR",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_SEMIBOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_SEMIBOLD",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WEIGHT_ULTRABOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_ULTRABOLD",
			"Ljava/lang/Float;"
		);
	}
	java::awt::font::TextAttribute TextAttribute::WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	java::lang::Float TextAttribute::WIDTH_CONDENSED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_CONDENSED",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WIDTH_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_EXTENDED",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WIDTH_REGULAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_REGULAR",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WIDTH_SEMI_CONDENSED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_SEMI_CONDENSED",
			"Ljava/lang/Float;"
		);
	}
	java::lang::Float TextAttribute::WIDTH_SEMI_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_SEMI_EXTENDED",
			"Ljava/lang/Float;"
		);
	}
	
	// QAndroidJniObject forward
	TextAttribute::TextAttribute(QAndroidJniObject obj) : java::text::AttributedCharacterIterator_Attribute(obj) {}
	
	// Constructors
	
	// Methods
} // namespace java::awt::font

