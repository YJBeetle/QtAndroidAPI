#pragma once

#ifndef JAVA_AWT_FONT_TEXTATTRIBUTE
#define JAVA_AWT_FONT_TEXTATTRIBUTE

#include "../../../__JniBaseClass.hpp"
#include "../../text/AttributedCharacterIterator_Attribute.hpp"

namespace __jni_impl::java::lang
{
	class Float;
}
namespace __jni_impl::java::lang
{
	class Integer;
}
namespace __jni_impl::java::lang
{
	class Boolean;
}

namespace __jni_impl::java::awt::font
{
	class TextAttribute : public __jni_impl::java::text::AttributedCharacterIterator_Attribute
	{
	public:
		// Fields
		static QAndroidJniObject FAMILY();
		static QAndroidJniObject WEIGHT();
		static QAndroidJniObject WEIGHT_EXTRA_LIGHT();
		static QAndroidJniObject WEIGHT_LIGHT();
		static QAndroidJniObject WEIGHT_DEMILIGHT();
		static QAndroidJniObject WEIGHT_REGULAR();
		static QAndroidJniObject WEIGHT_SEMIBOLD();
		static QAndroidJniObject WEIGHT_MEDIUM();
		static QAndroidJniObject WEIGHT_DEMIBOLD();
		static QAndroidJniObject WEIGHT_BOLD();
		static QAndroidJniObject WEIGHT_HEAVY();
		static QAndroidJniObject WEIGHT_EXTRABOLD();
		static QAndroidJniObject WEIGHT_ULTRABOLD();
		static QAndroidJniObject WIDTH();
		static QAndroidJniObject WIDTH_CONDENSED();
		static QAndroidJniObject WIDTH_SEMI_CONDENSED();
		static QAndroidJniObject WIDTH_REGULAR();
		static QAndroidJniObject WIDTH_SEMI_EXTENDED();
		static QAndroidJniObject WIDTH_EXTENDED();
		static QAndroidJniObject POSTURE();
		static QAndroidJniObject POSTURE_REGULAR();
		static QAndroidJniObject POSTURE_OBLIQUE();
		static QAndroidJniObject SIZE();
		static QAndroidJniObject TRANSFORM();
		static QAndroidJniObject SUPERSCRIPT();
		static QAndroidJniObject SUPERSCRIPT_SUPER();
		static QAndroidJniObject SUPERSCRIPT_SUB();
		static QAndroidJniObject FONT();
		static QAndroidJniObject CHAR_REPLACEMENT();
		static QAndroidJniObject FOREGROUND();
		static QAndroidJniObject BACKGROUND();
		static QAndroidJniObject UNDERLINE();
		static QAndroidJniObject UNDERLINE_ON();
		static QAndroidJniObject STRIKETHROUGH();
		static QAndroidJniObject STRIKETHROUGH_ON();
		static QAndroidJniObject RUN_DIRECTION();
		static QAndroidJniObject RUN_DIRECTION_LTR();
		static QAndroidJniObject RUN_DIRECTION_RTL();
		static QAndroidJniObject BIDI_EMBEDDING();
		static QAndroidJniObject JUSTIFICATION();
		static QAndroidJniObject JUSTIFICATION_FULL();
		static QAndroidJniObject JUSTIFICATION_NONE();
		static QAndroidJniObject INPUT_METHOD_HIGHLIGHT();
		static QAndroidJniObject INPUT_METHOD_UNDERLINE();
		static QAndroidJniObject UNDERLINE_LOW_ONE_PIXEL();
		static QAndroidJniObject UNDERLINE_LOW_TWO_PIXEL();
		static QAndroidJniObject UNDERLINE_LOW_DOTTED();
		static QAndroidJniObject UNDERLINE_LOW_GRAY();
		static QAndroidJniObject UNDERLINE_LOW_DASHED();
		static QAndroidJniObject SWAP_COLORS();
		static QAndroidJniObject SWAP_COLORS_ON();
		static QAndroidJniObject NUMERIC_SHAPING();
		static QAndroidJniObject KERNING();
		static QAndroidJniObject KERNING_ON();
		static QAndroidJniObject LIGATURES();
		static QAndroidJniObject LIGATURES_ON();
		static QAndroidJniObject TRACKING();
		static QAndroidJniObject TRACKING_TIGHT();
		static QAndroidJniObject TRACKING_LOOSE();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::java::awt::font

#include "../../lang/Float.hpp"
#include "../../lang/Integer.hpp"
#include "../../lang/Boolean.hpp"

namespace __jni_impl::java::awt::font
{
	// Fields
	QAndroidJniObject TextAttribute::FAMILY()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FAMILY",
			"Ljava/awt/font/TextAttribute;"
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
	QAndroidJniObject TextAttribute::WEIGHT_EXTRA_LIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_EXTRA_LIGHT",
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
	QAndroidJniObject TextAttribute::WEIGHT_DEMILIGHT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_DEMILIGHT",
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
	QAndroidJniObject TextAttribute::WEIGHT_MEDIUM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_MEDIUM",
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
	QAndroidJniObject TextAttribute::WEIGHT_BOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_BOLD",
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
	QAndroidJniObject TextAttribute::WEIGHT_EXTRABOLD()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WEIGHT_EXTRABOLD",
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
	QAndroidJniObject TextAttribute::WIDTH_SEMI_CONDENSED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_SEMI_CONDENSED",
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
	QAndroidJniObject TextAttribute::WIDTH_SEMI_EXTENDED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"WIDTH_SEMI_EXTENDED",
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
	QAndroidJniObject TextAttribute::POSTURE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"POSTURE",
			"Ljava/awt/font/TextAttribute;"
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
	QAndroidJniObject TextAttribute::POSTURE_OBLIQUE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"POSTURE_OBLIQUE",
			"Ljava/lang/Float;"
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
	QAndroidJniObject TextAttribute::TRANSFORM()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRANSFORM",
			"Ljava/awt/font/TextAttribute;"
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
	QAndroidJniObject TextAttribute::SUPERSCRIPT_SUPER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"SUPERSCRIPT_SUPER",
			"Ljava/lang/Integer;"
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
	QAndroidJniObject TextAttribute::FONT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FONT",
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
	QAndroidJniObject TextAttribute::FOREGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"FOREGROUND",
			"Ljava/awt/font/TextAttribute;"
		);
	}
	QAndroidJniObject TextAttribute::BACKGROUND()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"BACKGROUND",
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
	QAndroidJniObject TextAttribute::UNDERLINE_ON()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_ON",
			"Ljava/lang/Integer;"
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
	QAndroidJniObject TextAttribute::BIDI_EMBEDDING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"BIDI_EMBEDDING",
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
	QAndroidJniObject TextAttribute::UNDERLINE_LOW_DASHED()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"UNDERLINE_LOW_DASHED",
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
	QAndroidJniObject TextAttribute::NUMERIC_SHAPING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"NUMERIC_SHAPING",
			"Ljava/awt/font/TextAttribute;"
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
	QAndroidJniObject TextAttribute::TRACKING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRACKING",
			"Ljava/awt/font/TextAttribute;"
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
	QAndroidJniObject TextAttribute::TRACKING_LOOSE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.awt.font.TextAttribute",
			"TRACKING_LOOSE",
			"Ljava/lang/Float;"
		);
	}
	
	// Constructors
	void TextAttribute::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.awt.font.TextAttribute",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::java::awt::font

namespace java::awt::font
{
	class TextAttribute : public __jni_impl::java::awt::font::TextAttribute
	{
	public:
		TextAttribute(QAndroidJniObject obj) { __thiz = obj; }
		TextAttribute()
		{
			__constructor();
		}
	};
} // namespace java::awt::font

#endif // JAVA_AWT_FONT_TEXTATTRIBUTE

