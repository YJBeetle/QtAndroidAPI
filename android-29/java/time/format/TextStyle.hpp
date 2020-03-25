#pragma once

#ifndef JAVA_TIME_FORMAT_TEXTSTYLE
#define JAVA_TIME_FORMAT_TEXTSTYLE

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace __jni_impl::java::time::format
{
	class TextStyle : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FULL();
		static QAndroidJniObject FULL_STANDALONE();
		static QAndroidJniObject SHORT();
		static QAndroidJniObject SHORT_STANDALONE();
		static QAndroidJniObject NARROW();
		static QAndroidJniObject NARROW_STANDALONE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject values();
		static QAndroidJniObject valueOf(jstring arg0);
		jboolean isStandalone();
		QAndroidJniObject asStandalone();
		QAndroidJniObject asNormal();
	};
} // namespace __jni_impl::java::time::format


namespace __jni_impl::java::time::format
{
	// Fields
	QAndroidJniObject TextStyle::FULL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"FULL",
			"Ljava/time/format/TextStyle;");
	}
	QAndroidJniObject TextStyle::FULL_STANDALONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"FULL_STANDALONE",
			"Ljava/time/format/TextStyle;");
	}
	QAndroidJniObject TextStyle::SHORT()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"SHORT",
			"Ljava/time/format/TextStyle;");
	}
	QAndroidJniObject TextStyle::SHORT_STANDALONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"SHORT_STANDALONE",
			"Ljava/time/format/TextStyle;");
	}
	QAndroidJniObject TextStyle::NARROW()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"NARROW",
			"Ljava/time/format/TextStyle;");
	}
	QAndroidJniObject TextStyle::NARROW_STANDALONE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.time.format.TextStyle",
			"NARROW_STANDALONE",
			"Ljava/time/format/TextStyle;");
	}
	
	// Constructors
	void TextStyle::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.time.format.TextStyle",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject TextStyle::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.TextStyle",
			"values",
			"()[Ljava/time/format/TextStyle;");
	}
	QAndroidJniObject TextStyle::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.time.format.TextStyle",
			"valueOf",
			"(Ljava/lang/String;)Ljava/time/format/TextStyle;",
			arg0);
	}
	jboolean TextStyle::isStandalone()
	{
		return __thiz.callMethod<jboolean>(
			"isStandalone",
			"()Z");
	}
	QAndroidJniObject TextStyle::asStandalone()
	{
		return __thiz.callObjectMethod(
			"asStandalone",
			"()Ljava/time/format/TextStyle;");
	}
	QAndroidJniObject TextStyle::asNormal()
	{
		return __thiz.callObjectMethod(
			"asNormal",
			"()Ljava/time/format/TextStyle;");
	}
} // namespace __jni_impl::java::time::format

namespace java::time::format
{
	class TextStyle : public __jni_impl::java::time::format::TextStyle
	{
	public:
		TextStyle(QAndroidJniObject obj) { __thiz = obj; }
		TextStyle()
		{
			__constructor();
		}
	};
} // namespace java::time::format

#endif // JAVA_TIME_FORMAT_TEXTSTYLE

