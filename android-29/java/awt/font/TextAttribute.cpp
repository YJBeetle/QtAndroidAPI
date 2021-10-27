#include "../../lang/Boolean.hpp"
#include "../../lang/Float.hpp"
#include "../../lang/Integer.hpp"
#include "./TextAttribute.hpp"

namespace java::awt::font
{
	// Fields
	QAndroidJniObject TextAttribute::BACKGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"BACKGROUND",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::BIDI_EMBEDDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"BIDI_EMBEDDING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::CHAR_REPLACEMENT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"CHAR_REPLACEMENT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::FAMILY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FAMILY",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::FONT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FONT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::FOREGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FOREGROUND",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::INPUT_METHOD_HIGHLIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"INPUT_METHOD_HIGHLIGHT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::INPUT_METHOD_UNDERLINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"INPUT_METHOD_UNDERLINE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::JUSTIFICATION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"JUSTIFICATION",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::JUSTIFICATION_FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"JUSTIFICATION_FULL",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::JUSTIFICATION_NONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"JUSTIFICATION_NONE",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::KERNING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"KERNING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::KERNING_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"KERNING_ON",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject TextAttribute::LIGATURES()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"LIGATURES",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::LIGATURES_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"LIGATURES_ON",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject TextAttribute::NUMERIC_SHAPING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"NUMERIC_SHAPING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::POSTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"POSTURE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::POSTURE_OBLIQUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"POSTURE_OBLIQUE",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::POSTURE_REGULAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"POSTURE_REGULAR",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::RUN_DIRECTION()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"RUN_DIRECTION",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::RUN_DIRECTION_LTR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"RUN_DIRECTION_LTR",
			"Ljava/lang/Boolean;"
		);
	}
	QAndroidJniObject TextAttribute::RUN_DIRECTION_RTL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"RUN_DIRECTION_RTL",
			"Ljava/lang/Boolean;"
		);
	}
	QAndroidJniObject TextAttribute::SIZE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SIZE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::STRIKETHROUGH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"STRIKETHROUGH",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::STRIKETHROUGH_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"STRIKETHROUGH_ON",
			"Ljava/lang/Boolean;"
		);
	}
	QAndroidJniObject TextAttribute::SUPERSCRIPT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SUPERSCRIPT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::SUPERSCRIPT_SUB()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SUPERSCRIPT_SUB",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject TextAttribute::SUPERSCRIPT_SUPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SUPERSCRIPT_SUPER",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject TextAttribute::SWAP_COLORS()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SWAP_COLORS",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::SWAP_COLORS_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SWAP_COLORS_ON",
			"Ljava/lang/Boolean;"
		);
	}
	QAndroidJniObject TextAttribute::TRACKING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRACKING",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::TRACKING_LOOSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRACKING_LOOSE",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::TRACKING_TIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRACKING_TIGHT",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::TRANSFORM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRANSFORM",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::UNDERLINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::UNDERLINE_LOW_DASHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_DASHED",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject TextAttribute::UNDERLINE_LOW_DOTTED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_DOTTED",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject TextAttribute::UNDERLINE_LOW_GRAY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_GRAY",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject TextAttribute::UNDERLINE_LOW_ONE_PIXEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_ONE_PIXEL",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject TextAttribute::UNDERLINE_LOW_TWO_PIXEL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_TWO_PIXEL",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject TextAttribute::UNDERLINE_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_ON",
			"Ljava/lang/Integer;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT_BOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_BOLD",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT_DEMIBOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_DEMIBOLD",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT_DEMILIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_DEMILIGHT",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT_EXTRABOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_EXTRABOLD",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT_EXTRA_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_EXTRA_LIGHT",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT_HEAVY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_HEAVY",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_LIGHT",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT_MEDIUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_MEDIUM",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT_REGULAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_REGULAR",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT_SEMIBOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_SEMIBOLD",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WEIGHT_ULTRABOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_ULTRABOLD",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WIDTH()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::WIDTH_CONDENSED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_CONDENSED",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WIDTH_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_EXTENDED",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WIDTH_REGULAR()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_REGULAR",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WIDTH_SEMI_CONDENSED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_SEMI_CONDENSED",
			"Ljava/lang/Float;"
		);
	}
	QAndroidJniObject TextAttribute::WIDTH_SEMI_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_SEMI_EXTENDED",
			"Ljava/lang/Float;"
		);
	}
	
	TextAttribute::TextAttribute(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
} // namespace java::awt::font

