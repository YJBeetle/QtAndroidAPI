#pragma once

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
class JObject;
class JString;

namespace java::awt::font
{
	class TextAttribute : public java::text::AttributedCharacterIterator_Attribute
	{
	public:
		// Fields
		static java::awt::font::TextAttribute BACKGROUND();
		static java::awt::font::TextAttribute BIDI_EMBEDDING();
		static java::awt::font::TextAttribute CHAR_REPLACEMENT();
		static java::awt::font::TextAttribute FAMILY();
		static java::awt::font::TextAttribute FONT();
		static java::awt::font::TextAttribute FOREGROUND();
		static java::awt::font::TextAttribute INPUT_METHOD_HIGHLIGHT();
		static java::awt::font::TextAttribute INPUT_METHOD_UNDERLINE();
		static java::awt::font::TextAttribute JUSTIFICATION();
		static java::lang::Float JUSTIFICATION_FULL();
		static java::lang::Float JUSTIFICATION_NONE();
		static java::awt::font::TextAttribute KERNING();
		static java::lang::Integer KERNING_ON();
		static java::awt::font::TextAttribute LIGATURES();
		static java::lang::Integer LIGATURES_ON();
		static java::awt::font::TextAttribute NUMERIC_SHAPING();
		static java::awt::font::TextAttribute POSTURE();
		static java::lang::Float POSTURE_OBLIQUE();
		static java::lang::Float POSTURE_REGULAR();
		static java::awt::font::TextAttribute RUN_DIRECTION();
		static java::lang::Boolean RUN_DIRECTION_LTR();
		static java::lang::Boolean RUN_DIRECTION_RTL();
		static java::awt::font::TextAttribute SIZE();
		static java::awt::font::TextAttribute STRIKETHROUGH();
		static java::lang::Boolean STRIKETHROUGH_ON();
		static java::awt::font::TextAttribute SUPERSCRIPT();
		static java::lang::Integer SUPERSCRIPT_SUB();
		static java::lang::Integer SUPERSCRIPT_SUPER();
		static java::awt::font::TextAttribute SWAP_COLORS();
		static java::lang::Boolean SWAP_COLORS_ON();
		static java::awt::font::TextAttribute TRACKING();
		static java::lang::Float TRACKING_LOOSE();
		static java::lang::Float TRACKING_TIGHT();
		static java::awt::font::TextAttribute TRANSFORM();
		static java::awt::font::TextAttribute UNDERLINE();
		static java::lang::Integer UNDERLINE_LOW_DASHED();
		static java::lang::Integer UNDERLINE_LOW_DOTTED();
		static java::lang::Integer UNDERLINE_LOW_GRAY();
		static java::lang::Integer UNDERLINE_LOW_ONE_PIXEL();
		static java::lang::Integer UNDERLINE_LOW_TWO_PIXEL();
		static java::lang::Integer UNDERLINE_ON();
		static java::awt::font::TextAttribute WEIGHT();
		static java::lang::Float WEIGHT_BOLD();
		static java::lang::Float WEIGHT_DEMIBOLD();
		static java::lang::Float WEIGHT_DEMILIGHT();
		static java::lang::Float WEIGHT_EXTRABOLD();
		static java::lang::Float WEIGHT_EXTRA_LIGHT();
		static java::lang::Float WEIGHT_HEAVY();
		static java::lang::Float WEIGHT_LIGHT();
		static java::lang::Float WEIGHT_MEDIUM();
		static java::lang::Float WEIGHT_REGULAR();
		static java::lang::Float WEIGHT_SEMIBOLD();
		static java::lang::Float WEIGHT_ULTRABOLD();
		static java::awt::font::TextAttribute WIDTH();
		static java::lang::Float WIDTH_CONDENSED();
		static java::lang::Float WIDTH_EXTENDED();
		static java::lang::Float WIDTH_REGULAR();
		static java::lang::Float WIDTH_SEMI_CONDENSED();
		static java::lang::Float WIDTH_SEMI_EXTENDED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit TextAttribute(const char *className, const char *sig, Ts...agv) : java::text::AttributedCharacterIterator_Attribute(className, sig, std::forward<Ts>(agv)...) {}
		TextAttribute(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::awt::font

