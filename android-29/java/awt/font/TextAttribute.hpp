#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../text/AttributedCharacterIterator_Attribute.hpp"

namespace java::lang
{
	class Boolean;
}
namespace java::lang
{
	class Float;
}
namespace java::lang
{
	class Integer;
}

namespace java::awt::font
{
	class TextAttribute : public java::text::AttributedCharacterIterator_Attribute
	{
	public:
		// Fields
		static QAndroidJniObject BACKGROUND();
		static QAndroidJniObject BIDI_EMBEDDING();
		static QAndroidJniObject CHAR_REPLACEMENT();
		static QAndroidJniObject FAMILY();
		static QAndroidJniObject FONT();
		static QAndroidJniObject FOREGROUND();
		static QAndroidJniObject INPUT_METHOD_HIGHLIGHT();
		static QAndroidJniObject INPUT_METHOD_UNDERLINE();
		static QAndroidJniObject JUSTIFICATION();
		static QAndroidJniObject JUSTIFICATION_FULL();
		static QAndroidJniObject JUSTIFICATION_NONE();
		static QAndroidJniObject KERNING();
		static QAndroidJniObject KERNING_ON();
		static QAndroidJniObject LIGATURES();
		static QAndroidJniObject LIGATURES_ON();
		static QAndroidJniObject NUMERIC_SHAPING();
		static QAndroidJniObject POSTURE();
		static QAndroidJniObject POSTURE_OBLIQUE();
		static QAndroidJniObject POSTURE_REGULAR();
		static QAndroidJniObject RUN_DIRECTION();
		static QAndroidJniObject RUN_DIRECTION_LTR();
		static QAndroidJniObject RUN_DIRECTION_RTL();
		static QAndroidJniObject SIZE();
		static QAndroidJniObject STRIKETHROUGH();
		static QAndroidJniObject STRIKETHROUGH_ON();
		static QAndroidJniObject SUPERSCRIPT();
		static QAndroidJniObject SUPERSCRIPT_SUB();
		static QAndroidJniObject SUPERSCRIPT_SUPER();
		static QAndroidJniObject SWAP_COLORS();
		static QAndroidJniObject SWAP_COLORS_ON();
		static QAndroidJniObject TRACKING();
		static QAndroidJniObject TRACKING_LOOSE();
		static QAndroidJniObject TRACKING_TIGHT();
		static QAndroidJniObject TRANSFORM();
		static QAndroidJniObject UNDERLINE();
		static QAndroidJniObject UNDERLINE_LOW_DASHED();
		static QAndroidJniObject UNDERLINE_LOW_DOTTED();
		static QAndroidJniObject UNDERLINE_LOW_GRAY();
		static QAndroidJniObject UNDERLINE_LOW_ONE_PIXEL();
		static QAndroidJniObject UNDERLINE_LOW_TWO_PIXEL();
		static QAndroidJniObject UNDERLINE_ON();
		static QAndroidJniObject WEIGHT();
		static QAndroidJniObject WEIGHT_BOLD();
		static QAndroidJniObject WEIGHT_DEMIBOLD();
		static QAndroidJniObject WEIGHT_DEMILIGHT();
		static QAndroidJniObject WEIGHT_EXTRABOLD();
		static QAndroidJniObject WEIGHT_EXTRA_LIGHT();
		static QAndroidJniObject WEIGHT_HEAVY();
		static QAndroidJniObject WEIGHT_LIGHT();
		static QAndroidJniObject WEIGHT_MEDIUM();
		static QAndroidJniObject WEIGHT_REGULAR();
		static QAndroidJniObject WEIGHT_SEMIBOLD();
		static QAndroidJniObject WEIGHT_ULTRABOLD();
		static QAndroidJniObject WIDTH();
		static QAndroidJniObject WIDTH_CONDENSED();
		static QAndroidJniObject WIDTH_EXTENDED();
		static QAndroidJniObject WIDTH_REGULAR();
		static QAndroidJniObject WIDTH_SEMI_CONDENSED();
		static QAndroidJniObject WIDTH_SEMI_EXTENDED();
		
		TextAttribute(QAndroidJniObject obj);
		// Constructors
		TextAttribute() = default;
		
		// Methods
	};
} // namespace java::awt::font

