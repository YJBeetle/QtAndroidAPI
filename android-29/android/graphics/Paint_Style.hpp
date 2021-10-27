#pragma once

#include "../../__JniBaseClass.hpp"
#include "../../java/lang/Enum.hpp"


namespace __jni_impl::android::graphics
{
	class Paint_Style : public __jni_impl::java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject FILL();
		static QAndroidJniObject FILL_AND_STROKE();
		static QAndroidJniObject STROKE();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static QAndroidJniObject valueOf(const QString &arg0);
		static jarray values();
	};
} // namespace __jni_impl::android::graphics


namespace __jni_impl::android::graphics
{
	// Fields
	QAndroidJniObject Paint_Style::FILL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Style",
			"FILL",
			"Landroid/graphics/Paint$Style;"
		);
	}
	QAndroidJniObject Paint_Style::FILL_AND_STROKE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Style",
			"FILL_AND_STROKE",
			"Landroid/graphics/Paint$Style;"
		);
	}
	QAndroidJniObject Paint_Style::STROKE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"android.graphics.Paint$Style",
			"STROKE",
			"Landroid/graphics/Paint$Style;"
		);
	}
	
	// Constructors
	void Paint_Style::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.graphics.Paint$Style",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Paint_Style::valueOf(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Style;",
			arg0
		);
	}
	QAndroidJniObject Paint_Style::valueOf(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Style",
			"valueOf",
			"(Ljava/lang/String;)Landroid/graphics/Paint$Style;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jarray Paint_Style::values()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.graphics.Paint$Style",
			"values",
			"()[Landroid/graphics/Paint$Style;"
		).object<jarray>();
	}
} // namespace __jni_impl::android::graphics

namespace android::graphics
{
	class Paint_Style : public __jni_impl::android::graphics::Paint_Style
	{
	public:
		Paint_Style(QAndroidJniObject obj) { __thiz = obj; }
		Paint_Style()
		{
			__constructor();
		}
	};
} // namespace android::graphics

