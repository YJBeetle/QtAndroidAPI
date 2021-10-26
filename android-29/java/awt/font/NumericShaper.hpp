#pragma once

#ifndef JAVA_AWT_FONT_NUMERICSHAPER
#define JAVA_AWT_FONT_NUMERICSHAPER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::awt::font
{
	class NumericShaper_Range;
}
namespace __jni_impl::java::io
{
	class ObjectOutputStream;
}

namespace __jni_impl::java::awt::font
{
	class NumericShaper : public __JniBaseClass
	{
	public:
		// Fields
		static jint EUROPEAN();
		static jint ARABIC();
		static jint EASTERN_ARABIC();
		static jint DEVANAGARI();
		static jint BENGALI();
		static jint GURMUKHI();
		static jint GUJARATI();
		static jint ORIYA();
		static jint TAMIL();
		static jint TELUGU();
		static jint KANNADA();
		static jint MALAYALAM();
		static jint THAI();
		static jint LAO();
		static jint TIBETAN();
		static jint MYANMAR();
		static jint ETHIOPIC();
		static jint KHMER();
		static jint MONGOLIAN();
		static jint ALL_RANGES();
		
		// Constructors
		void __constructor();
		
		// Methods
		jboolean equals(jobject arg0);
		jstring toString();
		jint hashCode();
		void shape(jcharArray arg0, jint arg1, jint arg2, jint arg3);
		void shape(jcharArray arg0, jint arg1, jint arg2);
		void shape(jcharArray arg0, jint arg1, jint arg2, __jni_impl::java::awt::font::NumericShaper_Range arg3);
		static QAndroidJniObject getShaper(jint arg0);
		static QAndroidJniObject getShaper(__jni_impl::java::awt::font::NumericShaper_Range arg0);
		static QAndroidJniObject getContextualShaper(jint arg0, jint arg1);
		static QAndroidJniObject getContextualShaper(__jni_impl::__JniBaseClass arg0);
		static QAndroidJniObject getContextualShaper(__jni_impl::__JniBaseClass arg0, __jni_impl::java::awt::font::NumericShaper_Range arg1);
		static QAndroidJniObject getContextualShaper(jint arg0);
		jint getRanges();
		QAndroidJniObject getRangeSet();
		jboolean isContextual();
	};
} // namespace __jni_impl::java::awt::font

#include "NumericShaper_Range.hpp"
#include "../../io/ObjectOutputStream.hpp"

namespace __jni_impl::java::awt::font
{
	// Fields
	jint NumericShaper::EUROPEAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"EUROPEAN"
		);
	}
	jint NumericShaper::ARABIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ARABIC"
		);
	}
	jint NumericShaper::EASTERN_ARABIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"EASTERN_ARABIC"
		);
	}
	jint NumericShaper::DEVANAGARI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"DEVANAGARI"
		);
	}
	jint NumericShaper::BENGALI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"BENGALI"
		);
	}
	jint NumericShaper::GURMUKHI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"GURMUKHI"
		);
	}
	jint NumericShaper::GUJARATI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"GUJARATI"
		);
	}
	jint NumericShaper::ORIYA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ORIYA"
		);
	}
	jint NumericShaper::TAMIL()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TAMIL"
		);
	}
	jint NumericShaper::TELUGU()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TELUGU"
		);
	}
	jint NumericShaper::KANNADA()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"KANNADA"
		);
	}
	jint NumericShaper::MALAYALAM()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MALAYALAM"
		);
	}
	jint NumericShaper::THAI()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"THAI"
		);
	}
	jint NumericShaper::LAO()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"LAO"
		);
	}
	jint NumericShaper::TIBETAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"TIBETAN"
		);
	}
	jint NumericShaper::MYANMAR()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MYANMAR"
		);
	}
	jint NumericShaper::ETHIOPIC()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ETHIOPIC"
		);
	}
	jint NumericShaper::KHMER()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"KHMER"
		);
	}
	jint NumericShaper::MONGOLIAN()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"MONGOLIAN"
		);
	}
	jint NumericShaper::ALL_RANGES()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"java.awt.font.NumericShaper",
			"ALL_RANGES"
		);
	}
	
	// Constructors
	void NumericShaper::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.awt.font.NumericShaper",
			"(V)V");
	}
	
	// Methods
	jboolean NumericShaper::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring NumericShaper::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint NumericShaper::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	void NumericShaper::shape(jcharArray arg0, jint arg1, jint arg2, jint arg3)
	{
		__thiz.callMethod<void>(
			"shape",
			"([CIII)V",
			arg0,
			arg1,
			arg2,
			arg3
		);
	}
	void NumericShaper::shape(jcharArray arg0, jint arg1, jint arg2)
	{
		__thiz.callMethod<void>(
			"shape",
			"([CII)V",
			arg0,
			arg1,
			arg2
		);
	}
	void NumericShaper::shape(jcharArray arg0, jint arg1, jint arg2, __jni_impl::java::awt::font::NumericShaper_Range arg3)
	{
		__thiz.callMethod<void>(
			"shape",
			"([CIILjava/awt/font/NumericShaper$Range;)V",
			arg0,
			arg1,
			arg2,
			arg3.__jniObject().object()
		);
	}
	QAndroidJniObject NumericShaper::getShaper(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getShaper",
			"(I)Ljava/awt/font/NumericShaper;",
			arg0
		);
	}
	QAndroidJniObject NumericShaper::getShaper(__jni_impl::java::awt::font::NumericShaper_Range arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getShaper",
			"(Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumericShaper::getContextualShaper(jint arg0, jint arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(II)Ljava/awt/font/NumericShaper;",
			arg0,
			arg1
		);
	}
	QAndroidJniObject NumericShaper::getContextualShaper(__jni_impl::__JniBaseClass arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(Ljava/util/Set;)Ljava/awt/font/NumericShaper;",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject NumericShaper::getContextualShaper(__jni_impl::__JniBaseClass arg0, __jni_impl::java::awt::font::NumericShaper_Range arg1)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(Ljava/util/Set;Ljava/awt/font/NumericShaper$Range;)Ljava/awt/font/NumericShaper;",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	QAndroidJniObject NumericShaper::getContextualShaper(jint arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.awt.font.NumericShaper",
			"getContextualShaper",
			"(I)Ljava/awt/font/NumericShaper;",
			arg0
		);
	}
	jint NumericShaper::getRanges()
	{
		return __thiz.callMethod<jint>(
			"getRanges",
			"()I"
		);
	}
	QAndroidJniObject NumericShaper::getRangeSet()
	{
		return __thiz.callObjectMethod(
			"getRangeSet",
			"()Ljava/util/Set;"
		);
	}
	jboolean NumericShaper::isContextual()
	{
		return __thiz.callMethod<jboolean>(
			"isContextual",
			"()Z"
		);
	}
} // namespace __jni_impl::java::awt::font

namespace java::awt::font
{
	class NumericShaper : public __jni_impl::java::awt::font::NumericShaper
	{
	public:
		NumericShaper(QAndroidJniObject obj) { __thiz = obj; }
		NumericShaper()
		{
			__constructor();
		}
	};
} // namespace java::awt::font

#endif // JAVA_AWT_FONT_NUMERICSHAPER

